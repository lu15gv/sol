#!/bin/bash

BASEDIR=$(dirname "$0")

sh "$BASEDIR/../Executables/pipeline.sh" \
log-output="$BASEDIR/outputs" \
workspace="$BASEDIR/JardinDeJuegos/JardinDeJuegos.xcworkspace" \
scheme=JardinDeJuegos \
target=JardinDeJuegos \
project=JardinDeJuegos \
targets-white-list="Pods-JardinDeJuegos" \
sizeOptimizerLinker="/Users/luis.gomez/Library/Developer/Xcode/DerivedData/SizeOptimizerLinker-dimxfusuupdccxfrpvuumswahofs/Build/Products/Debug/SizeOptimizerLinker" \
llvm="$BASEDIR/../Executables/LLVM_TOOLS_XCODE_12_5" \
xcode=/Applications/Xcode\ 12.5.app \
enable-bitcode=true