# This file allows users to call find_package(Clang) and pick up our targets.



find_package(LLVM REQUIRED CONFIG
             HINTS "/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/cmake/llvm")

set(CLANG_EXPORTED_TARGETS "clangBasic;clangAPINotes;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangCrossTU;clangSema;clangCodeGen;clangAnalysis;clangEdit;clangRewrite;clangARCMigrate;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangToolingInclusions;clangToolingRefactor;clangToolingRefactoring;clangToolingASTDiff;clangToolingSyntax;clangDependencyScanning;clangTransformer;clangTooling;clangDirectoryWatcher;clangIndex;clangIndexDataStore;clangStaticAnalyzerCore;clangStaticAnalyzerCheckers;clangStaticAnalyzerFrontend;clangFormat;clang;clang-format;clangHandleCXX;clangHandleLLVM;clang-import-test;clang-offload-bundler;clang-offload-wrapper;clang-scan-deps;IndexStore;clang-rename;clang-refactor;clang-cpp;clang-check;clang-extdef-mapping;libclang")
set(CLANG_CMAKE_DIR "/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/cmake/clang")
set(CLANG_INCLUDE_DIRS "/Users/luis.gomez/Documents/Personal/apple/llvm-project/clang/include;/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/tools/clang/include")

# Provide all our library targets to users.
include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/cmake/clang/ClangTargets.cmake")

# By creating clang-tablegen-targets here, subprojects that depend on Clang's
# tablegen-generated headers can always depend on this target whether building
# in-tree with Clang or not.
if(NOT TARGET clang-tablegen-targets)
  add_custom_target(clang-tablegen-targets)
endif()
