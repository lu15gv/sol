# LLVM tools for machine outlining
Patched LLVM tools to work alongside https://github.com/lu15gv/sol
## Compiled binaries
Here you can find LLVM compiled binaries for different version of Xcode.
Just clone this repo and select any of the **XCODE_X_X** directories (for example XCODE_12_5).
## Compile it by yourself
You can also apply the necessary changes and build the LLVM project by yourself by following the next intrusctions:
1. Clone Apple's LLVM fork: https://github.com/apple/llvm-project
2. `git checkout` the `tag` that corresponds your Xcode version.

| Xcode version | LLVM version | tag      |
|---------------|--------------|---------------------|
| 12.4          | 10.0.0       | swift-5.3.2-RELEASE |
| 12.5          | 11.1.0       | swift-5.4-RELEASE   |
| 12.5.1        | 11.1.0       | swift-5.4.2-RELEASE |
| 13            | 12.0.0       | swift-5.5-RELEASE   |

More in https://en.wikipedia.org/wiki/Xcode

4. Apply the missing LLVM pull requests

| LLVM Pull Request                | Present in Xcode 12.4 | Present in Xcode 12.5.x |
|----------------------------------|-----------------------|-------------------------|
| https://reviews.llvm.org/D71219  | ❌                     | ✅                       |
| https://reviews.llvm.org/D7102   | ❌                     | ✅                       |
| https://reviews.llvm.org/D71217  | ❌                     | ✅                       |
| https://reviews.llvm.org/D94202  | ❌                     | ❌                       |

Note: You only need to apply the ❌ ones

5. Install ninja with homebrew, open the terminal an run `brew install ninja`
6. Copy [build_llvm.sh](https://github.com/lu15gv/sol/blob/main/LLVM_tools/build_llvm.sh) script to the root of swift-llvm project (the one that you cloned in step 1).
7. Open the terminal and `cd <path to llvm-project>`
8. Build it with `sh build_llvm.sh`
9. You will find the binarias under **OPTIMIZED** directory
