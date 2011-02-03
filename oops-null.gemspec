Gem::Specification.new do |s|
  s.name = 'oops-null'
  s.summary = 'A segfaulting native RubyGem for Windows and Linux'

  s.description = <<-EOT
A native RubyGem for Windows and Linux that segfaults the Ruby interpreter
by dereferencing a NULL pointer
EOT

  s.homepage = 'http://oopsforge.github.com/'
  s.version = '0.3.0'
  s.date = Time.now.strftime('%Y-%m-%d')

  s.authors = ['Jon Maken']
  s.email = 'jon.forums@gmail.com'

  s.executables = ['nulloops']
  s.default_executable = 'nulloops'
  s.extensions = ['ext/oops_null/extconf.rb']

  s.has_rdoc = false

  s.require_paths = %w[lib]

  s.files = Dir.glob('bin/nulloops')
  s.files << Dir.glob(['ext/**/extconf.rb', 'ext/**/*.{c,h}'])
  s.files << Dir.glob(['lib/**/*.rb', 'lib/**/*.so'])
  s.files << %w[
    Rakefile
    oops-null.gemspec
  ]

  s.rubygems_version = '1.3.7'
  s.add_development_dependency('rake-compiler', ['>= 0.7.5'])
end
