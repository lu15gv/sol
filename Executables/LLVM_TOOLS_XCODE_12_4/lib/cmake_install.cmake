# Install script for directory: /Users/luis.gomez/Documents/Personal/apple/llvm-project/llvm/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Users/luis.gomez/Downloads/Xcode 12.4.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/IR/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/FuzzMutate/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/IRReader/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/CodeGen/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/BinaryFormat/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Bitcode/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Bitstream/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Frontend/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Transforms/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Linker/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Analysis/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/LTO/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/MC/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/MCA/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Object/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/ObjectYAML/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Option/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Remarks/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/DebugInfo/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/ExecutionEngine/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/AsmParser/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/LineEditor/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/ProfileData/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Passes/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/TextAPI/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/ToolDrivers/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/XRay/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Testing/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/WindowsManifest/cmake_install.cmake")

endif()

