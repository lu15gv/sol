#!/bin/bash
set -e

BASEDIR=$(dirname "$0")
TARGETS_WHITE_LIST=""
JSON_SYMBOLS=""

###################################################################
# Configure this:

XCODE_VERSION="12_5"
LLVM_TOOLS="$BASEDIR/../LLVM_tools/XCODE_${XCODE_VERSION}"
XCODE_PATH="/Applications/Xcode.app"
WORKSPACE="$BASEDIR/JardinDeJuegos/JardinDeJuegos.xcworkspace"
SCHEME="JardinDeJuegos"
TARGET="JardinDeJuegos"
PROJECT="JardinDeJuegos"

###################################################################
# Optional configuration

# Add a target here if you don't want it to be linked. Pods-<YourTargetName> should be here
# Example: "Target1,Target2,Target3"

TARGETS_WHITE_LIST="Pods-JardinDeJuegos"

# If needed, this replaces symbols before llvm-link phase.
# See symbols_example.json to see the example.

# JSON_SYMBOLS="$BASEDIR/symbols_example.json"

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
sizeOptimizerLinker="$BASEDIR/../Executables/SizeOptimizerLinker" \
llvm="$LLVM_TOOLS" \
xcode="$XCODE_PATH" \
targets-white-list="$TARGETS_WHITE_LIST" \
symbols="$JSON_SYMBOLS" \
enable-bitcode=false