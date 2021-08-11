# sol
Size Optimizer Linker for iOS apps

Based on Uber article: https://eng.uber.com/how-uber-deals-with-large-ios-app-size/

Medium article explaning it: https://engineering.rappi.com/ios-app-size-reduction-with-machine-outlining-5ef2c6b53237

## How to use it:

Open the `runme.sh` that it’s in the `Example` directory with a text editor.
Replace the section "Configure this".
This is an example of the setup to optimize the Example project.

```bash
XCODE_VERSION="12_5"
LLVM_TOOLS="$BASEDIR/../LLVM_tools/XCODE_${XCODE_VERSION}"
XCODE_PATH="/Applications/Xcode.app"
WORKSPACE="$BASEDIR/JardinDeJuegos/JardinDeJuegos.xcworkspace"
SCHEME="JardinDeJuegos"
TARGET="JardinDeJuegos"
PROJECT="JardinDeJuegos"
```

There is an optional section where you can configure the following options:
`TARGETS_WHITE_LIST`: this allows you to exclude some Targets to be linked. This is useful when you use CocoaPods and want to exclude the target `Pods-<YourTargetName>`
`JSON_SYMBOLS`: this allows you to replace symbols. It’s useful when you have duplicated symbols and Xcode shows them as a warning. There’s a json example here
https://github.com/lu15gv/sol/blob/main/Example/symbols_example.json

Now, you just need to open a terminal window and run
`sh <path to sol project>/Example/runme.sh`

This will archive the project and then optimize it. You can find the archive by open Xcode > Window > Organizer > Archives. If you inspect the archive in finder (Show package contents), you can find the optimized version in `Products/Applications`.
