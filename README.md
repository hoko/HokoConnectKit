<p align="center" >
<img src="https://s3-eu-west-1.amazonaws.com/hokoassets/hoko_logo.png" alt="Hoko" title="Hoko">
</p>

[![HokoConnectKit Pod](https://img.shields.io/cocoapods/v/HokoConnectKit.svg?style=flat)](https://cocoapods.org/pods/HokoConnectKit)

# HokoConnectKit
Mobile greatness in the making! Coming soon. [hoko.io](http://hoko.io)

## Installation

The SDK is available through CocoaPods, a brilliant dependency manager for Xcode.
If you are not using CocoaPods, please follow the
[Getting Started Guide](http://guides.cocoapods.org/using/getting-started.html) to quickly set it up.

Once you are done with the setup, edit your `Podfile` and add `HokoConnectKit` to your target
(don't forget to also add `use_frameworks!` if your project is using swift):

```bash
pod 'HokoConnectKit'
```

Save the file and run `pod install` to download the SDK. Once the installation is complete,
open your project through the `.xcworkspace` file.

## Setup

Setup our SDK by calling the `setup` method with your app token, inside the
`application:didFinishLaunchingWithOptions` method of your `AppDelegate` file.

```swift
// Swift
func application(application: UIApplication,
  didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
    HokoConnectKit.sharedInstance.setup("YOUR-APP-TOKEN-GOES-HERE")
    ...
}
```

```objc
// Objective-C
// Soon ...
```

You can find your app token inside the dashboard. If you need our SDK to be verbose, use the
`verbose` argument.

## Contributing

Bug reports and feature requests are welcome! Send us an email to [contact@hoko.io](mailto:contact@hoko.io)

## Support

Need help? Don't be shy, drop us a message at [contact@hoko.io](mailto:contact@hoko.io)

## License

All rights reserved © 2016 HOKO S.A.
