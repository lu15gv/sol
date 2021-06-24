set -e

for ARGUMENT in "$@"
do
    KEY=$(echo $ARGUMENT | cut -f1 -d=)
    VALUE=$(echo $ARGUMENT | cut -f2 -d=)
    case "$KEY" in
            log-output)           LOG_OUTPUT=${VALUE} ;; 
            workspace)            WORKSPACE=${VALUE} ;; 
            scheme)               SCHEME=${VALUE} ;;
            targets-white-list)   WHITELIST=${VALUE} ;;
            sizeOptimizerLinker)  SOL=${VALUE} ;;
            symbols)              SYMBOLS=${VALUE} ;;
            target)               TARGET=${VALUE} ;;
            project)              PROJECT=${VALUE} ;;
            xcode)                XCODE=${VALUE} ;;
            llvm)                 LLVM=${VALUE} ;;
            enable-bitcode)       ENABLE_BITCODE=${VALUE} ;;
            *)   
    esac    
done

# if [[ ! `xcodebuild -version | grep "Xcode 12.4"` ]] 
# then
# 	echo "Please use Xcode 12.4 version"
# 	exit -1
# fi

XCODE_TOOLCHAIN="$XCODE/Contents/Developer/Toolchains/XcodeDefault.xctoolchain"
STRIP="$XCODE_TOOLCHAIN/usr/bin/strip"
SWIFT="$XCODE_TOOLCHAIN/usr/bin/swift"

DSYM_UTIL="$LLVM/bin/dsymutil"
LLVM_LINK="$LLVM/bin/llvm-link"
LLVM_DIS="$LLVM/bin/llvm-dis"
OPT="$LLVM/bin/OPT"
LLC="$LLVM/bin/llc"
CLANG="$LLVM/bin/clang"

TIME_FILE=$LOG_OUTPUT/time.txt
XCODE_BUILD_LOG=$LOG_OUTPUT/xcodebuild.log
LINK_ARGUMENTS_FILE=$LOG_OUTPUT/base_link_arguments.txt
ENVIRONMENT=$LOG_OUTPUT/env.sh

CONFIGURATION=Release

echo_section() {
  TITLE=$1
  echo "\033[1;34m ********************************* $TITLE ********************************** \033[0m" 
}

echo_section "Time file" #*******************************************************************

rm -f -- $TIME_FILE
touch $TIME_FILE

save_timestamp() {
  CURRENT_TIME=$(date '+%Y-%m-%d %H:%M:%S')
  SUFIX=$1
  echo "${CURRENT_TIME} -> ${SUFIX}" >> $TIME_FILE
}

archive() {
  echo_section "Archive" #*********************************************************************
  save_timestamp "archive started"
  xcodebuild -workspace $WORKSPACE \
  -scheme $SCHEME clean \
  -configuration $CONFIGURATION \
  -arch arm64 \
  archive | tee $XCODE_BUILD_LOG 
  # | xcbeautify
}

log_parser() {
  echo_section "Log Parser" #******************************************************************
  save_timestamp "log parser started"
  echo $XCODE_BUILD_LOG
  $SOL log-parser \
  --xcode-build-log-file $XCODE_BUILD_LOG \
  --target "$TARGET" \
  --project "$PROJECT" \
  --configuration $CONFIGURATION \
  --outputs "$LOG_OUTPUT"
}

set_environment() {
  echo_section "Set Environment" #*************************************************************
  source $ENVIRONMENT
  OPTIMIZED=$OBJROOT/optimized/arm64/
  APP_NAME=${CONTENTS_FOLDER_PATH%.*}
  echo_section "Cleaning"
  rm -f -R $OPTIMIZED
  mkdir -p $OPTIMIZED
}

link_ir() {
  echo_section "Link all IR" #*****************************************************************
  save_timestamp "llvm-link started"
  LINKER_PARAMS=()
  if [ ! -z "$SYMBOLS" ]; then
      LINKER_PARAMS+=(--symbols-file "$SYMBOLS")
  fi
  if [ ! -z "$WHITELIST" ]; then
      LINKER_PARAMS+=(--targets-white-list "$WHITELIST")
  fi
  if $ENABLE_BITCODE ; then
      LINKER_PARAMS+=(--enable-bitcode)
  fi

  $SOL link \
  --dependencies-paths-file $ENVIRONMENT \
  --llvm-link $LLVM_LINK \
  --llvm-dis $LLVM_DIS \
  --swift "$SWIFT" \
  --configuration $CONFIGURATION \
  -o ${OPTIMIZED}WholeApp.ll \
  "${LINKER_PARAMS[@]}" #> "$LOG_OUTPUT"/llvm-link.log

  # swift -frontend -primary-file /Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/IntermediateBuildFilesPath/Pods.build/Release-iphoneos/Swinject.build/Objects-normal/arm64/ServiceKey.bc \
  # -emit-bc \
  # -embed-bitcode \
  # -target arm64-apple-ios12.0 \
  # -Xllvm -aarch64-use-tbi -Osize -disable-llvm-optzns \
  # -module-name Swinject \
  # -o /Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/IntermediateBuildFilesPath/Pods.build/Release-iphoneos/Swinject.build/Objects-normal/arm64/ServiceKey.o

  # llvm-link someSwiftA.bc someSwiftB.bc -o some.ir
}

opt() {
  echo_section "opt" #*************************************************************************
  save_timestamp "optimizer started"
  $OPT \
  ${OPTIMIZED}WholeApp.ll \
  -code-model=small -Oz -cost-kind=code-size -objc-arc-contract \
  -o ${OPTIMIZED}WholeApp.opt.ll
}

llc() {
  echo_section "llc" #*************************************************************************
  save_timestamp "llc started"
  if [[ `xcodebuild -version | grep "Xcode 12.4"` ]] 
  then
    $LLC \
    ${OPTIMIZED}WholeApp.opt.ll \
    -stats -filetype=obj -code-model=small -enable-machine-outliner=always -outline-repeat-count=5 -enable-linkonceodr-outlining \
    -o ${OPTIMIZED}WholeApp.o
  fi

  if [[ `xcodebuild -version | grep "Xcode 12.5"` ]] 
  then
    $LLC \
    ${OPTIMIZED}WholeApp.opt.ll \
    -stats -filetype=obj -code-model=small -enable-machine-outliner=always -machine-outliner-reruns=4 -enable-linkonceodr-outlining \
    -o ${OPTIMIZED}WholeApp.o
  fi
}

link_o() {
  echo_section "Link" #************************************************************************
  save_timestamp "linker started"
  echo ${OPTIMIZED}WholeApp.ll > ${OPTIMIZED}WholeApp.LinkFileList
  ARCHIVE_ROOT=~/Library/Developer/Xcode/Archives
  MOST_RECENT_ARCHIVE_DIRECTORY=$(ls -t $ARCHIVE_ROOT | head -n 1)
  MOST_RECENT_ARCHIVE=$(ls -t $ARCHIVE_ROOT/$MOST_RECENT_ARCHIVE_DIRECTORY | head -n 1)
  ARCHIVE=$ARCHIVE_ROOT/$MOST_RECENT_ARCHIVE_DIRECTORY/$MOST_RECENT_ARCHIVE
  APP_PATH=$ARCHIVE/Products/Applications/$APP_NAME.app
  EXEC_PATH=$APP_PATH/$APP_NAME

  CLANG_LINKER_PARAMS=()
  if $ENABLE_BITCODE ; then
    echo "Bitcode enabled"
      CLANG_LINKER_PARAMS+=(--enable-bitcode)
  fi

  $SOL clang-linker \
  --link-arguments-file "$LINK_ARGUMENTS_FILE" \
  --link-file-list ${OPTIMIZED}WholeApp.LinkFileList \
  --executable-file "$EXEC_PATH" \
  --configuration $CONFIGURATION \
  "${CLANG_LINKER_PARAMS[@]}"

  # "$CLANG" -target arm64-apple-ios12.0 \
  # -isysroot /Applications/Xcode\ 12.5.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS14.5.sdk \
  # -L/Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/BuildProductsPath/Release-iphoneos \
  # -F/Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/BuildProductsPath/Release-iphoneos \
  # -filelist /Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/IntermediateBuildFilesPath/optimized/arm64/WholeApp.LinkFileList \
  # -Xlinker -rpath -Xlinker /usr/lib/swift \
  # -Xlinker -rpath -Xlinker @executable_path/Frameworks \
  # -dead_strip \
  # -Xlinker -object_path_lto -Xlinker /Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/IntermediateBuildFilesPath/JardinDeJuegos.build/Release-iphoneos/JardinDeJuegos.build/Objects-normal/arm64/JardinDeJuegos_lto.o \
  # -fembed-bitcode \
  # -Xlinker -bitcode_verify -Xlinker -bitcode_hide_symbols \
  # -Xlinker -bitcode_symbol_map -Xlinker /Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/BuildProductsPath/Release-iphoneos \
  # -Xlinker -final_output -Xlinker /Applications/JardinDeJuegos.app/JardinDeJuegos \
  # -fobjc-link-runtime \
  # -L/Applications/Xcode\ 12.5.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/swift/iphoneos \
  # -L/usr/lib/swift \
  # -Xlinker -add_ast_path -Xlinker /Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/IntermediateBuildFilesPath/JardinDeJuegos.build/Release-iphoneos/JardinDeJuegos.build/Objects-normal/arm64/JardinDeJuegos.swiftmodule \
  # -ObjC \
  # -lPods-JardinDeJuegos \
  # -Xlinker -no_adhoc_codesign\
  #  -Xlinker -dependency_info -Xlinker /Users/luis.gomez/Library/Developer/Xcode/DerivedData/JardinDeJuegos-cvsqdjbhnxlqghcjfdsyzmfkxxzk/Build/Intermediates.noindex/ArchiveIntermediates/JardinDeJuegos/IntermediateBuildFilesPath/JardinDeJuegos.build/Release-iphoneos/JardinDeJuegos.build/Objects-normal/arm64/JardinDeJuegos_dependency_info.dat \
  #  -o "$EXEC_PATH"
}

generate_dsym() {
  echo_section "dSYM" #***********************************************************************
  DSYM_PATH=$ARCHIVE/dSYMs/$APP_NAME.app.dSYM
  "$DSYM_UTIL" \
  "$EXEC_PATH" \
  -o "$DSYM_PATH"
}

verify_dsym() {
  echo_section "Verify dSYM" #****************************************************************
   dwarfdump -verify "$DSYM_PATH"
}

strip() {
  echo_section "Strip" #**********************************************************************
  save_timestamp "strip started"
  "$STRIP" "$EXEC_PATH"
}

sign() {
  echo_section "Signing" #********************************************************************
  save_timestamp "signing started"
  ENTITLEMENTS=$CONFIGURATION_TEMP_DIR/${APP_NAME}.build/$CONTENTS_FOLDER_PATH.xcent
  /usr/bin/codesign \
  --force --sign  $CERT_ID \
  --entitlements "$ENTITLEMENTS" \
  "$APP_PATH"
}

copy_app() {
  echo_section "Copy .app" #********************************************************************
  ln -s "$ARCHIVE" "$LOG_OUTPUT"
  cp -R "$APP_PATH" "$LOG_OUTPUT"
}

extract_bitcode() {
  echo_section "Extract Bitcode" #********************************************************************
  rm -f -R "$LOG_OUTPUT/Bitcode"
  mkdir -p "$LOG_OUTPUT/Bitcode"
  otool -v -s __LLVM __bundle "$LOG_OUTPUT/$APP_NAME.app/$APP_NAME" > "$LOG_OUTPUT/Bitcode/Bitcode.xml"
  cd "$LOG_OUTPUT/Bitcode"
  ebcutil -e "$LOG_OUTPUT/$APP_NAME.app/$APP_NAME"
}

generate_ipa() {
  echo_section "ipatool" #********************************************************************
  save_timestamp "ipatool started"
  "$XCODE/Contents/Developer/usr/bin/python3" \
  "$XCODE/Contents/Developer/usr/bin/bitcode-build-tool" -v -t \
  "$XCODE_TOOLCHAIN/usr/bin" \
  -L "$LOG_OUTPUT/$APP_NAME.app/Frameworks" \
  --sdk "$XCODE/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS14.4.sdk" \
  -o "$LOG_OUTPUT/$APP_NAME.app/$APP_NAME" \
  --generate-dsym "$LOG_OUTPUT/$APP_NAME.app/$APP_NAME.dSYM" \
  --strip-swift-symbols "$LOG_OUTPUT/$APP_NAME.app/$APP_NAME"
  save_timestamp "finished"
}

# Pipeline

archive
log_parser        # Extracts derivedData paths, cert ID, and link arguments from xcode raw log
set_environment
link_ir           # Link all .bc files (from swift), all .lto (from obj-c/c/c++) using 'llvm-link'. 
                  # This produces an unique IR file that contains all the app
                  
opt               # Optimizer
llc               # Runs machine outliner and produces a Mach-O file 
link_o            # clang linker
generate_dsym 
# verify_dsym
strip
sign
copy_app
# extract_bitcode
# generate_ipa


