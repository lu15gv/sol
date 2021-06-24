#!/bin/bash
set -e

BASEDIR=$(dirname "$0")

###################################################################
# Configure this:

XCODE_VERSION="12_5"
LLVM_TOOLS="$BASEDIR/../LLVM_tools/XCODE_${XCODE_VERSION}"
XCODE_PATH="/Applications/Xcode 12.5.1.app"
WORKSPACE="$BASEDIR/JardinDeJuegos/JardinDeJuegos.xcworkspace"
SCHEME="JardinDeJuegos"
TARGET="JardinDeJuegos"
PROJECT="JardinDeJuegos"

###################################################################

source "$BASEDIR/../Executables/configure.sh" "$LLVM_TOOLS"
cd "$BASEDIR/JardinDeJuegos"
pod install
sh "$BASEDIR/../Executables/pipeline.sh" \
log-output="$BASEDIR/outputs" \
workspace="$WORKSPACE" \
scheme="$SCHEME" \
target="$TARGET" \
project="$PROJECT" \
targets-white-list="Pods-JardinDeJuegos" \
sizeOptimizerLinker="$BASEDIR/../Executables/SizeOptimizerLinker" \
llvm="$LLVM_TOOLS" \
xcode="$XCODE_PATH" \
enable-bitcode=false