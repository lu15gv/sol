# Install script for directory: /Users/luis.gomez/Documents/Personal/apple/llvm-project/llvm/lib/Target

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xLLVMTargetx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/libLLVMTarget.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVMTarget.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVMTarget.a")
    execute_process(COMMAND "/Users/luis.gomez/Downloads/Xcode 12.4.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLLVMTarget.a")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/AArch64/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/AMDGPU/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/ARM/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/BPF/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/Hexagon/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/Lanai/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/Mips/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/MSP430/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/NVPTX/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/PowerPC/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/RISCV/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/Sparc/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/SystemZ/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/WebAssembly/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/X86/cmake_install.cmake")
  include("/Users/luis.gomez/Documents/Personal/apple/llvm-project/OPTMIZED_LLVM_PR/lib/Target/XCore/cmake_install.cmake")

endif()

