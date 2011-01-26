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

spec = Gem::Specification.new do |s|
  s.name = 'oops-null'
  s.summary = 'A segfaulting native RubyGem for Windows'
  s.description = 'A native RubyGem for Windows that segfaults due to dereferencing a NULL pointer'
  s.homepage = 'http://oopsforge.github.com/'
  s.version = '0.1.0'
  s.date = Time.now.strftime('%Y-%m-%d')

  s.authors = ['Jon Maken']
  s.email = 'jon.forums@gmail.com'

  s.executables = ['nulloops']
  s.default_executable = 'nulloops'
  s.extensions = ['ext/oops_null/extconf.rb']

  s.has_rdoc = false

  s.require_paths = %w[lib]

  s.files = FileList.new('bin/nulloops')
  s.files << FileList.new('ext/**/extconf.rb', 'ext/**/*.{c,h}')
  s.files << FileList.new('lib/**/*.rb', 'lib/**/*.so')
  s.files << %w[
    Rakefile
  ]

  s.rubygems_version = '1.3.7'
  s.add_development_dependency('rake-compiler', ['>= 0.7.5'])
end

Gem::PackageTask.new(spec) do |pkg|
end

Rake::ExtensionTask.new('oops_null', spec) do |ext|
  ext.lib_dir = 'lib/oops_null'
end

desc 'Clobber and compile oops-null extension'
task :default => [ :clobber, :compile ]
