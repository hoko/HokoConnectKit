<p align="center" >
<img src="https://s3-eu-west-1.amazonaws.com/hokoassets/hoko_logo.png" alt="Hoko" title="Hoko">
</p>

[![HokoConnectKit Pod](https://img.shields.io/cocoapods/v/HokoConnectKit.svg?style=flat)](https://cocoapods.org/pods/HokoConnectKit)

# HokoConnectKit
Mobile greatness in the making. Coming soon at [HOKO.IO](http://hoko.io)

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

Start by adding a new entry to your app's `Info.plist` with the key `HokoConnectToken` and the value being your `token`.  
Then, setup our SDK by calling the `setup` method, inside the
`application:didFinishLaunchingWithOptions` method of your `AppDelegate` file.

```swift
// Swift
func application(application: UIApplication,
  didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
    HokoConnectKit.sharedInstance.setup()
    ...
}
```

```objc
// Objective-C
// Soon ...
```

You can find your app `token` inside the dashboard. If you need our SDK to be verbose, use the `verbose` parameter.

## Receiving Incoming Traffic from the HOKO Network

To prepare your app to receive incoming traffic from partners on the HOKO Network, add the following code to your `AppDelegate` file:

```swift
func application(application: UIApplication, openURL url: NSURL, sourceApplication: String?,
                   annotation: AnyObject) -> Bool {
    if HokoConnectKit.sharedInstance.handleAttributionFromIncomingURL(url) {
      // The deep link came from a HOKO partner and was processed by the SDK
    } else {
      // Handle the incoming deep link with your code...
    }
    return true
}
```

```objc
// Objective-C
// Soon ...
```

This step is **extremely necessary** to prepare the SDK to track events explained in the next section.

## Event Tracking

The SDK offers the ability to track user events, such as orders (with a given amount, quantity, etc...), that are used to
identify the actions that a specific user, sent from a HOKO partner app to yours, performed.  

**NOTE**: Before tracking an event, make sure you've correctly set up the SDK. Also, the event tracking will only be performed if your current user was sent to your app via a partner registered on the HOKO Network, as explained in the last section (no need to check for this case, the SDK will handle all of that).

Events are separated in 2 different types: `order` and `general` events.  
To track an `order` event, simply call:

```swift
// the user bought a product worth 20£ (£ is the default currency)
HokoConnectKit.tracking.trackOrder(withAmount: 20)

// the user bought a product worth 10€
HokoConnectKit.tracking.trackOrder(withAmount: 10, currency: "EUR")
```

```objc
// Objective-C
// Soon ...
```

The `trackOrder` method has a total of 4 parameters:
- `amount` - **required**: the total amount of the purchase
- `quantity` - **optional** : the number of items bought (defaults to `1`)
- `productId` - **optional**: the id of your product bought by the user
- `currency` - **optional**: the [ISO 4217 currency code](http://www.xe.com/iso4217.php) used for the order (defaults to `GBP` - £)

On the other hand, to track a `general` event with any type of metadata, both parties need to agree on a specific code for a given type of event and use that code as the first parameter of the `trackEvent` method:

```swift
// a simple custom event with no context
HokoConnectKit.tracking.trackEvent(withCode: "your-code-here")

// a custom event with metadata
let metadata = ["page": "sign-up", "gender": "male"]
HokoConnectKit.tracking.trackEvent(withCode: "your-code-here", metadata: metadata)
```

```objc
// Objective-C
// Soon ...
```

The `trackEvent` method has a total of 2 parameters:
- `code` - **required**: the code that identifies the custom event
- `metadata` - **optional**: a dictionary that contains any other information that can be used to give richer insights regarding the event

## Contributing

Bug reports and feature requests are welcome! Send us an email to [contact@hoko.io](mailto:contact@hoko.io)

## Support

Need help? Don't be shy, drop us a message at [contact@hoko.io](mailto:contact@hoko.io)

## License

All rights reserved © 2016 HOKO S.A. :heart: London
