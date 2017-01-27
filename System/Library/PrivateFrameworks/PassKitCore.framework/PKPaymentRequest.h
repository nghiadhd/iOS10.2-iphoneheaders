/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, PKContact, NSData, NSURL, PKPaymentMerchantSession;

@interface PKPaymentRequest : NSObject <NSSecureCoding> {

	BOOL _expectsMerchantSession;
	BOOL _shippingEditable;
	BOOL _requiresAddressPrecision;
	NSString* _merchantIdentifier;
	NSString* _countryCode;
	NSArray* _supportedNetworks;
	unsigned long long _merchantCapabilities;
	NSArray* _paymentSummaryItems;
	NSString* _currencyCode;
	unsigned long long _requiredBillingAddressFields;
	PKContact* _billingContact;
	const void* _billingAddress;
	unsigned long long _requiredShippingAddressFields;
	PKContact* _shippingContact;
	const void* _shippingAddress;
	NSArray* _shippingMethods;
	unsigned long long _shippingType;
	NSData* _applicationData;
	NSArray* _thumbnailURLs;
	NSURL* _originatingURL;
	NSString* _shippingEditableMessage;
	PKPaymentMerchantSession* _merchantSession;

}

@property (nonatomic,retain) NSArray * thumbnailURLs;                                       //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (nonatomic,retain) NSURL * originatingURL;                                        //@synthesize originatingURL=_originatingURL - In the implementation block
@property (assign,nonatomic) BOOL expectsMerchantSession;                                   //@synthesize expectsMerchantSession=_expectsMerchantSession - In the implementation block
@property (assign,getter=isShippingEditable,nonatomic) BOOL shippingEditable;               //@synthesize shippingEditable=_shippingEditable - In the implementation block
@property (nonatomic,copy) NSString * shippingEditableMessage;                              //@synthesize shippingEditableMessage=_shippingEditableMessage - In the implementation block
@property (assign,nonatomic) BOOL requiresAddressPrecision;                                 //@synthesize requiresAddressPrecision=_requiresAddressPrecision - In the implementation block
@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;                    //@synthesize merchantSession=_merchantSession - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                                   //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSArray * supportedNetworks;                                     //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long merchantCapabilities;                       //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (nonatomic,copy) NSArray * paymentSummaryItems;                                   //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                         //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) unsigned long long requiredBillingAddressFields;               //@synthesize requiredBillingAddressFields=_requiredBillingAddressFields - In the implementation block
@property (nonatomic,retain) PKContact * billingContact;                                    //@synthesize billingContact=_billingContact - In the implementation block
@property (assign,nonatomic) const void* billingAddress;                                    //@synthesize billingAddress=_billingAddress - In the implementation block
@property (assign,nonatomic) unsigned long long requiredShippingAddressFields;              //@synthesize requiredShippingAddressFields=_requiredShippingAddressFields - In the implementation block
@property (nonatomic,retain) PKContact * shippingContact;                                   //@synthesize shippingContact=_shippingContact - In the implementation block
@property (assign,nonatomic) const void* shippingAddress;                                   //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,copy) NSArray * shippingMethods;                                       //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (assign,nonatomic) unsigned long long shippingType;                               //@synthesize shippingType=_shippingType - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                                        //@synthesize applicationData=_applicationData - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)requestWithProtobuf:(id)arg1 ;
+(id)availableNetworks;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(PKContact *)billingContact;
-(id)_shippingTypeToString;
-(void)setShippingType:(unsigned long long)arg1 ;
-(void)setShippingEditable:(BOOL)arg1 ;
-(void)setShippingEditableMessage:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(PKPaymentMerchantSession *)merchantSession;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(BOOL)expectsMerchantSession;
-(void)setShippingMethods:(NSArray *)arg1 ;
-(BOOL)requiresAddressPrecision;
-(id)serviceProviderPaymentRequest;
-(BOOL)isServiceProviderPaymentRequest;
-(id)protobuf;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setRequiredBillingAddressFields:(unsigned long long)arg1 ;
-(void)setRequiredShippingAddressFields:(unsigned long long)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)setOriginatingURL:(NSURL *)arg1 ;
-(void)setExpectsMerchantSession:(BOOL)arg1 ;
-(void)setThumbnailURLs:(NSArray *)arg1 ;
-(id)_transactionAmount;
-(BOOL)isEqualToPaymentRequest:(id)arg1 ;
-(void)setRequiresAddressPrecision:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSData *)applicationData;
-(NSArray *)paymentSummaryItems;
-(NSArray *)thumbnailURLs;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(NSArray *)shippingMethods;
-(NSURL *)originatingURL;
-(NSArray *)supportedNetworks;
-(unsigned long long)merchantCapabilities;
-(const void*)billingAddress;
-(unsigned long long)shippingType;
-(const void*)shippingAddress;
-(PKContact *)shippingContact;
-(unsigned long long)requiredShippingAddressFields;
-(NSString *)shippingEditableMessage;
-(BOOL)isShippingEditable;
-(void)setShippingAddress:(const void*)arg1 ;
-(unsigned long long)requiredBillingAddressFields;
-(void)setBillingAddress:(const void*)arg1 ;
-(void)setShippingContact:(PKContact *)arg1 ;
-(void)setBillingContact:(PKContact *)arg1 ;
-(void)setSupportedNetworks:(NSArray *)arg1 ;
-(void)setMerchantCapabilities:(unsigned long long)arg1 ;
@end

