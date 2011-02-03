## What?

While most native C RubyGems try very hard **not** to cause failures, as a proud
member of the Oops family, `oops-null` segfaults your Ruby interpreter by dereferencing
a `NULL` pointer.

Diagnostic tool authors and novice debuggers rejoice!

## Usage

1. Type `gem install oops-null` or, to install a debug-enabled version, type
   `gem install oops-null -- --enable-debug`
2. Run `nulloops` or create a Ruby script with `require 'oops-null'; Oops::Null.boom`

## Requirements

1. MRI Ruby 1.8.7 or 1.9.2
2. An installed [rake-compiler](http://github.com/luislavena/rake-compiler) RubyGem
3. A GCC-based toolchain. For Windows, consider using the [DevKit](http://rubyinstaller.org/add-ons/devkit/)

## License

3-clause BSD. See project LICENSE file.
