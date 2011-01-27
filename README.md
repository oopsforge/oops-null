## What?

While most native C RubyGems try very hard **not** to cause failures, as a proud
member of the Oops family, oops-null segfaults your Ruby interpreter by dereferencing
a `NULL` pointer.

Diagnostic tool authors and novice debuggers rejoice!

## Usage

1. If you would like to build debug symbols into the gem as part of the installation
   build process, set/export the environment variable `BUILD_DEBUG_LIB=1` before
   proceeding.
2. `gem install oops-null`
3. run `nulloops` or create a Ruby script with `require 'oops-null'; Oops::Null.boom`

## License 

3-clause BSD. See project LICENSE file.
