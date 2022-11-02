Pod::Spec.new do |s|
  s.name                  = 'Judo3DS2_iOS'
  s.version               = '1.1.3'
  s.summary               = 'Judopay 3DS Secure 2.0 client for iOS.'
  s.homepage              = 'https://judopay.com/'
  s.license               = 'MIT'
  s.author                = { "Judopay" => 'developersupport@judopayments.com' }
  s.source                = { :git => 'https://github.com/Judopay/Judo3DS2-iOS.git', :tag => s.version.to_s }
  s.ios.deployment_target = '11.0'
  s.requires_arc          = true
  s.vendored_frameworks   = 'Framework/Judo3DS2_iOS.xcframework'
  s.frameworks            = 'Foundation', 'UIKit', 'WebKit'
end
