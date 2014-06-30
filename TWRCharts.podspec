Pod::Spec.new do |s|

  s.name         = "TWRCharts"
  s.version      = "0.3"
  s.summary      = "An Obj-C wrapper for ChartJS. Easily build animated charts by leveraging the power of native code."
  s.homepage     = "https://github.com/chasseurmic/TWRCharts"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "Michelangelo Chasseur" => "chasseurmic@gmail.com" }
  s.social_media_url = "http://twitter.com/chasseurmic"
  s.source       = {
    :git => "https://github.com/chasseurmic/TWRCharts.git",
    :tag => "0.2"
  }
  s.resource = ['TWRCharts/*.js', 'TWRCharts/*.html']
  s.platform     = :ios, '6.0'
  s.source_files = 'TWRCharts/*.{h,m}'
  s.requires_arc = true

end
