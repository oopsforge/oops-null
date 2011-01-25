## What?

While most native C RubyGems try very hard **not** to cause failures, as a proud
member of the Oops family, oops-null segfaults your Ruby interpreter by dereferencing
a `NULL` pointer.

Diagnostic tool authors and novice debuggers rejoice!

## Usage

1. `gem install oops-null`
2. run `nulloops` or create a Ruby script with `require 'oops-null'; Oops::Null.boom`

## License 

3-clause BSD. See project LICENSE file.
