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
            xctoolchain)          XCTOOLCHAIN=${VALUE} ;;
            llvm)                 LLVM=${VALUE} ;;
            enable-bitcode)       ENABLE_BITCODE=${VALUE} ;;
            *)   
    esac    
done

if [[ ! `xcodebuild -version | grep "Xcode 12.4"` ]] 
then
	echo "Please use Xcode 12.4 version"
	exit -1
fi

STRIP="$XCTOOLCHAIN/usr/bin/strip"
DSYM_UTIL="$XCTOOLCHAIN/usr/bin/dsymutil"

LLVM_LINK="$LLVM/bin/llvm-link"
LLVM_DIS="$LLVM/bin/llvm-dis"
OPT="$LLVM/bin/OPT"
LLC="$LLVM/bin/llc"

TIME_FILE=$LOG_OUTPUT/time.txt
XCODE_BUILD_LOG=$LOG_OUTPUT/xcodebuild.log
LINK_ARGUMENTS_FILE=$LOG_OUTPUT/base_link_arguments.txt
ENVIRONMENT=$LOG_OUTPUT/env.sh

echo "********************************* Time file **********************************"

rm -f -- $TIME_FILE
touch $TIME_FILE

save_timestamp(){
  CURRENT_TIME=$(date '+%Y-%m-%d %H:%M:%S')
  SUFIX=$1
  echo "${CURRENT_TIME} -> ${SUFIX}" >> $TIME_FILE
}

echo "********************************** Archive ***********************************"
save_timestamp "archive started"

xcodebuild -workspace $WORKSPACE \
-scheme $SCHEME clean \
archive | tee $XCODE_BUILD_LOG | xcbeautify

echo "******************************** Log Parser **********************************"
save_timestamp "log parser started"

$SOL log-parser \
--xcode-build-log-file $XCODE_BUILD_LOG \
--target "$TARGET" \
--project "$PROJECT" \
--outputs "$LOG_OUTPUT"

echo "**************************** Setting environment *****************************"
source $ENVIRONMENT

OPTIMIZED=$OBJROOT/optimized/arm64/
APP_NAME=${CONTENTS_FOLDER_PATH%.*}

echo "********************************** Cleaning **********************************"

rm -f -R $OPTIMIZED
mkdir -p $OPTIMIZED

echo "******************************* Linking all IR *******************************"
save_timestamp "llvm-link started"

LINKER_PARAMS=()
if [ ! -z "$SYMBOLS" ]; then
    LINKER_PARAMS+=(--symbols-file "$SYMBOLS")
fi
if [ ! -z "$WHITELIST" ]; then
    LINKER_PARAMS+=(--targets-white-list "$WHITELIST")
fi
if [ "$ENABLE_BITCODE" = "TRUE" ]; then
    LINKER_PARAMS+=(--enable-bitcode)
fi

$SOL link \
--dependencies-paths-file $ENVIRONMENT \
--llvm-link $LLVM_LINK \
--llvm-dis $LLVM_DIS \
-o ${OPTIMIZED}WholeApp.ll \
"${LINKER_PARAMS[@]}"

echo "******************************* Run optimizer ********************************"
save_timestamp "optimizer started"

$OPT \
${OPTIMIZED}WholeApp.ll \
-code-model=small -Oz -cost-kind=code-size -objc-arc-contract \
-o ${OPTIMIZED}WholeApp.opt.ll

echo "***************************** Run optimized llc ******************************"
save_timestamp "llc started"

$LLC \
${OPTIMIZED}WholeApp.opt.ll \
-stats -filetype=obj -code-model=small -enable-machine-outliner=always -outline-repeat-count=5 -enable-linkonceodr-outlining \
-o ${OPTIMIZED}WholeApp.o

echo "*************************** Creating LinkFileList ****************************"

echo ${OPTIMIZED}WholeApp.o > ${OPTIMIZED}WholeApp.LinkFileList

echo "********************************** Linking ***********************************"
save_timestamp "linker started"

ARCHIVE_ROOT=~/Library/Developer/Xcode/Archives
MOST_RECENT_ARCHIVE_DIRECTORY=$(ls -t $ARCHIVE_ROOT | head -n 1)
MOST_RECENT_ARCHIVE=$(ls -t $ARCHIVE_ROOT/$MOST_RECENT_ARCHIVE_DIRECTORY | head -n 1)
ARCHIVE=$ARCHIVE_ROOT/$MOST_RECENT_ARCHIVE_DIRECTORY/$MOST_RECENT_ARCHIVE
APP_PATH=$ARCHIVE/Products/Applications/$APP_NAME.app
EXEC_PATH=$APP_PATH/$APP_NAME

CLANG_LINKER_PARAMS=()
if $ENABLE_BITCODE ; then
	echo "Bitcode false"
    CLANG_LINKER_PARAMS+=(--enable-bitcode)
fi

$SOL clang-linker \
--link-arguments-file "$LINK_ARGUMENTS_FILE" \
--link-file-list ${OPTIMIZED}WholeApp.LinkFileList \
--executable-file "$EXEC_PATH" \
"${CLANG_LINKER_PARAMS[@]}"

echo "*********************************** dSYM *************************************"

DSYM_PATH=$ARCHIVE/dSYMs/$APP_NAME.app.dSYM

"$DSYM_UTIL" \
"$EXEC_PATH" \
-o "$DSYM_PATH"

echo "*********************************** Strip ************************************"
save_timestamp "strip started"

"$STRIP" "$EXEC_PATH"

echo "********************************** Signing ***********************************"
save_timestamp "signing started"

ENTITLEMENTS=$CONFIGURATION_TEMP_DIR/${APP_NAME}.build/$CONTENTS_FOLDER_PATH.xcent

/usr/bin/codesign \
--force --sign  $CERT_ID \
--entitlements "$ENTITLEMENTS" \
"$APP_PATH"

save_timestamp "finished"
