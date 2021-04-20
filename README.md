# sol
Size Optimizer Linker for iOS apps

Based on Uber article: https://eng.uber.com/how-uber-deals-with-large-ios-app-size/

## Instalation:

Run the configure.sh in your terminal: 

`source <path_to_sol>/configure.sh`

## Run example:

1. Open the `Example/runme.sh` with a text editor

2. Change `xctoolchain` if necessary

3. Open the terminal and `cd <path_to_sol>/Example/JardinDeJuegos` 

4. Run `pod install`

5. Run `cd ../`

6. Run `runme.sh`

This will archive the project and then optimize it. You can find the archive by open Xcode > Window > Organizer > Archives. If you inspect the archive in finder (Show package contents), you can find the optimized version in Products/Applications.

7. In the organizer, you can Distribute this archive, for example, an addhoc distribution.

Note: In order to produce a baseline, you can manually archive the project in Xcode but before that, please comment `post_install` section in podfile and run `pod install`.