#!/bin/bash

# Instructions:

# Install ninja: brew install ninja
# Clone https://github.com/apple/swift-llvm
# Go to the tag that corresponds to your xcode version
# Apply these PR if necessary
https://reviews.llvm.org/D71219 (Requiered if you have Xcode 12.4)
https://reviews.llvm.org/D7102 (Requiered if you have Xcode 12.4)
https://reviews.llvm.org/D71217 (Requiered if you have Xcode 12.4)
https://reviews.llvm.org/D94202 (Requiered if you have Xcode 12.4 or Xcode 12.5.x)
# Copy this script in swift-llvm project
# Open the terminal and 'cd' swift-llvm directory
# From there, run this script with 'sh build_llvm.sh'

set -e
ROOT=`pwd`

## BUILD LLVM
function build_llvm() {
  cmake -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_PROJECTS=clang -DLLVM_FORCE_ENABLE_STATS:BOOL=ON -G "Ninja" ../llvm > /dev/null
  ninja
}

mkdir -p "$ROOT/OPTIMIZED"
cd "$ROOT/OPTIMIZED"
build_llvm