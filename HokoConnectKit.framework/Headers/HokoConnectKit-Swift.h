// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import QuartzCore;
@import UIKit;
@import ObjectiveC;
@import Foundation;
@import Foundation.NSURLSession;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface CAGradientLayer (SWIFT_EXTENSION(HokoConnectKit))
@end

@class NSCoder;

SWIFT_CLASS("_TtC14HokoConnectKit13ConnectButton")
@interface ConnectButton : UIButton
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ConnectButton (SWIFT_EXTENSION(HokoConnectKit))
- (void)layoutSubviews;
@end


@interface ConnectButton (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface ConnectButton (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface ConnectButton (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface ConnectButton (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface ConnectButton (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface ConnectButton (SWIFT_EXTENSION(HokoConnectKit))
@end


SWIFT_CLASS("_TtC14HokoConnectKit11ConnectLink")
@interface ConnectLink : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable code;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable desc;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull tags;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable metadata;
@end


SWIFT_CLASS("_TtC14HokoConnectKit14HokoConnectKit")
@interface HokoConnectKit : NSObject
+ (HokoConnectKit * _Nonnull)sharedInstance;
+ (void)setSharedInstance:(HokoConnectKit * _Nonnull)value;

/// Performs the SDK setup with the respective token.
///
/// \param token The <code>String
/// </code> that identifies your app.
///
/// \param verbose If true, the SDK will print debug messages.
///
/// \param userId A custom Id that identifies the current user (for attribution).
- (void)setup:(NSString * _Nullable)token verbose:(BOOL)verbose userId:(NSString * _Nullable)userId;

/// Identify the user that is using your app with a unique Id like an email address or code. This Id is passed along to other apps through deep links for later attribution. By default we use the device unique Id to identify the user. When that fails we use a random code.
///
/// \param identifier The <code>String
/// </code> that identifies you user.
- (void)setUserId:(NSString * _Nonnull)identifier;

/// Returns the code that identifies the current user.
- (NSString * _Nonnull)getUserId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDate (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface NSNumber (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface NSURL (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface NSURLComponents (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface NSURLRequest (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface NSURLRequest (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface NSURLSession (SWIFT_EXTENSION(HokoConnectKit))
@end


SWIFT_CLASS("_TtC14HokoConnectKit7Partner")
@interface Partner : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable code;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@property (nonatomic, readonly, copy) NSString * _Nullable iconUrl;
@property (nonatomic, readonly, copy) NSString * _Nullable bannerUrl;
@property (nonatomic, readonly, copy) NSString * _Nullable desc;
@property (nonatomic, readonly, copy) NSArray<ConnectLink *> * _Nonnull connectLinks;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull tags;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull countryCodes;
@property (nonatomic, readonly) BOOL isLocal;
@property (nonatomic, readonly, copy) NSString * _Nullable localCountryCode;
@end


@interface UIButton (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIColor (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIImage (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIImage (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIImage (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIImage (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIImage (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIImage (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIImageView (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIView (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIView (SWIFT_EXTENSION(HokoConnectKit))
@end


@interface UIViewController (SWIFT_EXTENSION(HokoConnectKit))
@end

#pragma clang diagnostic pop
