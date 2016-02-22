Pod::Spec.new do |s|
  s.name = 'HokoConnectKit'
  s.version = '1.0.0'
  s.license = 'MIT'
  s.summary = 'Hoko Connect Kit'
  s.description = 'Hoko Connect Kit iOS SDK. Changing the way apps connect.'
  s.homepage = 'http://hoko.io'
  s.social_media_url = 'http://twitter.com/hoko_io'
  s.authors = {
    'Hokolinks S.A' => 'support@hokolinks.com',
    'Pedro Vieira' => 'pedro@hokolinks.com'
  }
  s.source = {:git => 'https://github.com/hokolinks/HokoConnectKit.git', :tag => s.version }

  s.ios.deployment_target = '9.0'

  s.preserve_paths      = 'HokoConnectKit.framework'
  # s.public_header_files = 'HokoConnectKit.framework/Versions/A/Headers/*.h'
  s.vendored_frameworks = 'HokoConnectKit.framework'

  s.requires_arc = true
end
