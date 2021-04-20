#!/bin/bash

BASEDIR=$(dirname "$0")

sh "$BASEDIR/../Executables/pipeline.sh" \
log-output="$BASEDIR/outputs" \
workspace="$BASEDIR/JardinDeJuegos/JardinDeJuegos.xcworkspace" \
scheme=JardinDeJuegos \
target=JardinDeJuegos \
project=JardinDeJuegos \
targets-white-list="Pods-JardinDeJuegos" \
sizeOptimizerLinker="$BASEDIR/../Executables/SizeOptimizerLinker" \
llvm="$BASEDIR/../Executables/LLVM_TOOLS_XCODE_12_4" \
xctoolchain=/Applications/Xcode\ 12.4.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain \
enable-bitcode=false