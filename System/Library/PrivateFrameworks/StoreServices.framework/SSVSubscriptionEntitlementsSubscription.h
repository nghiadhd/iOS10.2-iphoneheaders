/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@class NSNumber, NSString, NSDate;

@interface SSVSubscriptionEntitlementsSubscription : NSObject {

	BOOL _newsAppPurchase;
	NSNumber* _appAdamId;
	NSNumber* _appVersion;
	NSString* _chargeCountryCode;
	NSString* _chargeCurrencyCode;
	NSNumber* _chargeStoreFrontIdentifier;
	NSDate* _expireDate;
	NSNumber* _familyId;
	NSNumber* _inAppAdamId;
	NSString* _inAppVersion;
	NSString* _offerIdentifier;
	NSNumber* _originalPurchaseDownloadId;
	NSNumber* _purchasabilityType;
	NSNumber* _purchaseDownloadId;
	NSNumber* _quantity;
	NSString* _vendorIdentifier;

}

@property (nonatomic,copy) NSNumber * appAdamId;                                         //@synthesize appAdamId=_appAdamId - In the implementation block
@property (nonatomic,copy) NSNumber * appVersion;                                        //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy) NSString * chargeCountryCode;                                 //@synthesize chargeCountryCode=_chargeCountryCode - In the implementation block
@property (nonatomic,copy) NSString * chargeCurrencyCode;                                //@synthesize chargeCurrencyCode=_chargeCurrencyCode - In the implementation block
@property (nonatomic,copy) NSNumber * chargeStoreFrontIdentifier;                        //@synthesize chargeStoreFrontIdentifier=_chargeStoreFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * expireDate;                                          //@synthesize expireDate=_expireDate - In the implementation block
@property (nonatomic,copy) NSNumber * familyId;                                          //@synthesize familyId=_familyId - In the implementation block
@property (nonatomic,copy) NSNumber * inAppAdamId;                                       //@synthesize inAppAdamId=_inAppAdamId - In the implementation block
@property (nonatomic,copy) NSString * inAppVersion;                                      //@synthesize inAppVersion=_inAppVersion - In the implementation block
@property (assign,getter=isNewsAppPurchase,nonatomic) BOOL newsAppPurchase;              //@synthesize newsAppPurchase=_newsAppPurchase - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;                                   //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * originalPurchaseDownloadId;                        //@synthesize originalPurchaseDownloadId=_originalPurchaseDownloadId - In the implementation block
@property (nonatomic,copy) NSNumber * purchasabilityType;                                //@synthesize purchasabilityType=_purchasabilityType - In the implementation block
@property (nonatomic,copy) NSNumber * purchaseDownloadId;                                //@synthesize purchaseDownloadId=_purchaseDownloadId - In the implementation block
@property (nonatomic,copy) NSNumber * quantity;                                          //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                                  //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
-(NSNumber *)appAdamId;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(NSString *)chargeCountryCode;
-(void)setChargeCountryCode:(NSString *)arg1 ;
-(NSString *)chargeCurrencyCode;
-(void)setChargeCurrencyCode:(NSString *)arg1 ;
-(NSNumber *)chargeStoreFrontIdentifier;
-(void)setChargeStoreFrontIdentifier:(NSNumber *)arg1 ;
-(NSDate *)expireDate;
-(void)setExpireDate:(NSDate *)arg1 ;
-(NSNumber *)familyId;
-(void)setFamilyId:(NSNumber *)arg1 ;
-(void)setInAppAdamId:(NSNumber *)arg1 ;
-(NSString *)inAppVersion;
-(void)setInAppVersion:(NSString *)arg1 ;
-(void)setNewsAppPurchase:(BOOL)arg1 ;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(NSNumber *)originalPurchaseDownloadId;
-(void)setOriginalPurchaseDownloadId:(NSNumber *)arg1 ;
-(NSNumber *)purchasabilityType;
-(void)setPurchasabilityType:(NSNumber *)arg1 ;
-(NSNumber *)purchaseDownloadId;
-(void)setPurchaseDownloadId:(NSNumber *)arg1 ;
-(void)setQuantity:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)offerIdentifier;
-(NSString *)vendorIdentifier;
-(NSNumber *)quantity;
-(BOOL)isNewsAppPurchase;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(NSNumber *)inAppAdamId;
-(void)setAppVersion:(NSNumber *)arg1 ;
-(NSNumber *)appVersion;
@end

