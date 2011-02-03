require 'rubygems'
require 'rubygems/package_task'
require 'rake/extensiontask'

begin
  have_tools = %w{gcc make sh}.all? do |t|
    system("#{t} --version > NUL 2>&1")
  end
  require 'devkit' unless have_tools or ENV['RI_DEVKIT']
rescue LoadError
  abort '[ERROR] build environment unavailable or misconfigured'
end

spec = eval("#{File.read('oops-null.gemspec')}", binding, __FILE__, __LINE__)

Gem::PackageTask.new(spec) do |pkg|
end

Rake::ExtensionTask.new('oops_null', spec) do |ext|
  ext.lib_dir = 'lib/oops_null'
end

desc 'Clobber and compile oops-null extension'
task :default => [ :clobber, :compile ]
