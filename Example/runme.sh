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
llvm="$BASEDIR/../LLVM_tools/XCODE_12_4" \
xcode=/Applications/Xcode\ 12.4.app \
enable-bitcode=true