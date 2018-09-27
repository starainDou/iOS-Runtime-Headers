/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSAttributedString *formattedAddressString;
@property (nonatomic, readonly) bool isShippingEditable;
@property (nonatomic, readonly) CNContact *shippingAddress;
@property (nonatomic, readonly) NSString *shippingType;

+ (long long)dataType;

- (id)_shippingName;
- (id)errors;
- (id)formattedAddressString;
- (bool)isShippingEditable;
- (bool)isValidWithError:(id*)arg1;
- (id)shippingAddress;
- (id)shippingType;

@end