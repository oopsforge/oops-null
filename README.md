## What?

While most native C RubyGems try very hard **not** to cause failures, as a proud
member of the Oops family, `oops-null` segfaults your Ruby interpreter by dereferencing
a `NULL` pointer.

Diagnostic tool authors and novice debuggers rejoice!

## Usage

1. Install a GCC-based toolchain such as the [DevKit](http://rubyinstaller.org/add-ons/devkit/)
2. Type `gem install oops-null` or to install a debug-enabled version, type
   `gem install oops-null -- --enable-debug`
3. Run `nulloops` or create a Ruby script with `require 'oops-null'; Oops::Null.boom`

## License 

3-clause BSD. See project LICENSE file.
