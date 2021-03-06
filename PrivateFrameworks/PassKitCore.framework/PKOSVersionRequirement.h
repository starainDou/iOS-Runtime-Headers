/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKOSVersionRequirement : NSObject {
    NSString * _appletv;
    NSString * _ipad;
    NSString * _iphone;
    NSString * _ipod;
    NSString * _mac;
    NSString * _watch;
}

@property (nonatomic, readonly) NSString *appletv;
@property (nonatomic, readonly) NSString *ipad;
@property (nonatomic, readonly) NSString *iphone;
@property (nonatomic, readonly) NSString *ipod;
@property (nonatomic, readonly) NSString *mac;
@property (nonatomic, readonly) NSString *watch;

+ (id)fromDeviceVersion;

- (void).cxx_destruct;
- (id)appletv;
- (long long)compare:(id)arg1 deviceClass:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)ipad;
- (id)iphone;
- (id)ipod;
- (id)mac;
- (id)watch;

@end
