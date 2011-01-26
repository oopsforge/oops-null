require 'mkmf'

# Stop 1.9.2's LDSHARED from stripping symbols (-s) if debugflags
# only contains -g and/or -g0 and remove 1.8.7 LDSHARED's hard-coded
# -s
if ENV['BUILD_DEBUG_LIB']
  puts '[INFO] enabling debug library build configuration.'
  if RUBY_VERSION < '1.9'
    CONFIG['LDSHARED'] = 'gcc -shared'
  else
    CONFIG['debugflags'] << ' -ggdb3 -O0'
  end
end

create_makefile('oops_null/oops_null')
