Pod::Spec.new do |s|
  s.name = 'HokoConnectKit'
  s.version = '1.3.1'
  s.license = 'MIT'
  s.summary = 'Hoko Connect Kit'
  s.description = 'Hoko Connect Kit iOS SDK. Changing the way apps connect.'
  s.homepage = 'http://hoko.io'
  s.social_media_url = 'http://twitter.com/hoko_io'
  s.authors = {
    'Hokolinks S.A' => 'services@hoko.io',
    'Pedro Vieira' => 'pedro@hoko.io',
    'Hugo Sequeira' => 'hugo@hoko.io',
    'Goncalo Ferreira' => 'goncalo.ferreira@hoko.io',
    'Ricardo Otero' => 'ricardo@hoko.io'
  }
  s.source = {:git => 'https://github.com/hoko/HokoConnectKit.git', :tag => s.version }

  s.ios.deployment_target = '8.0'

  s.preserve_paths      = 'HokoConnectKit.framework'
  s.vendored_frameworks = 'HokoConnectKit.framework'

  s.requires_arc = true
end
