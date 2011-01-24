require 'mkmf'

# stop LDSHARED stripping symbols (-s) if debugflags only
# contains -g and/or -g0
if ENV['BUILD_DEBUG_LIB']
  puts '[INFO] enabling debug library build configuration.'
  CONFIG['debugflags'] << ' -ggdb3 -O0'
end

unless find_library('kernel32', 'LoadLibraryA')
  abort '[ERROR] unable to find kernel32 library.'
end

create_makefile('oops_null/oops_null')
