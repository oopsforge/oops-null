require 'mkmf'

# stop LDSHARED stripping symbols (-s) if debugflags only
# contains -g and/or -g0
if ENV['BUILD_DEBUG_LIB']
  puts '[INFO] enabling debug library build configuration.'
  CONFIG['debugflags'] << ' -ggdb3 -O0'
end

create_makefile('oops_null/oops_null')
