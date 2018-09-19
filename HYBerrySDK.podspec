#
# Be sure to run `pod lib lint HYBerrySDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HYBerrySDK'
  s.version          = '1.3.1'
  s.summary          = 'HYBerrySDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Pod for setup HYBerrySDK.
                       DESC

  s.homepage         = 'https://github.com/fengfengscau/HYBerrySDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fengfengscau' => 'fengfengscau@163.com' }
  s.source           = { :git => 'https://github.com/fengfengscau/HYBerrySDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'HYBerrySDK/HYBerrySDK.framework/Headers/*.{h}'

  s.vendored_frameworks = 'HYBerrySDK/HYBerrySDK.framework'
  
  s.public_header_files = 'HYBerrySDK/HYBerrySDK.framework/Headers/HYBerrySDK.h'

  s.resource = 'HYBerrySDK/HYBerrySDK.framework/berryBundle.bundle','HYBerrySDK/HYBerrySDK.framework/SVProgressHUD.bundle'
  
  # s.resource_bundles = {
  #   'HYBerrySDK' => ['HYBerrySDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
