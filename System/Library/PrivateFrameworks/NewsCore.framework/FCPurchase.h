/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKProductsRequestDelegate.h>

@protocol OS_dispatch_group;
@class NSNumber, NSString, SKProduct, NSObject, FCCloudContext;

@interface FCPurchase : NSObject <SKProductsRequestDelegate> {

	BOOL _purchaseRestore;
	NSNumber* _appAdamID;
	NSString* _purchaseID;
	NSString* _subscriptionPriceFormatted;
	NSString* _subscriptionPeriodInISO_8601;
	NSString* _trialPeriodInISO_8601;
	NSString* _offerName;
	NSNumber* _storeExternalVersion;
	NSString* _bundleID;
	NSNumber* _price;
	SKProduct* _product;
	NSObject*<OS_dispatch_group> _productRequestGroup;
	FCCloudContext* _cloudContext;

}

@property (nonatomic,copy) NSNumber * appAdamID;                                            //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                                           //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * subscriptionPriceFormatted;                           //@synthesize subscriptionPriceFormatted=_subscriptionPriceFormatted - In the implementation block
@property (nonatomic,copy) NSString * subscriptionPeriodInISO_8601;                         //@synthesize subscriptionPeriodInISO_8601=_subscriptionPeriodInISO_8601 - In the implementation block
@property (nonatomic,copy) NSString * trialPeriodInISO_8601;                                //@synthesize trialPeriodInISO_8601=_trialPeriodInISO_8601 - In the implementation block
@property (nonatomic,copy) NSString * offerName;                                            //@synthesize offerName=_offerName - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * storeExternalVersion;                                 //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,copy) NSNumber * price;                                                //@synthesize price=_price - In the implementation block
@property (nonatomic,retain) SKProduct * product;                                           //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> productRequestGroup;              //@synthesize productRequestGroup=_productRequestGroup - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                 //@synthesize cloudContext=_cloudContext - In the implementation block
@property (assign,nonatomic) BOOL purchaseRestore;                                          //@synthesize purchaseRestore=_purchaseRestore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)price;
-(void)setPrice:(NSNumber *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSNumber *)appAdamID;
-(NSString *)offerName;
-(NSString *)subscriptionPeriodInISO_8601;
-(NSString *)trialPeriodInISO_8601;
-(FCCloudContext *)cloudContext;
-(NSString *)purchaseID;
-(NSNumber *)storeExternalVersion;
-(void)setStoreExternalVersion:(NSNumber *)arg1 ;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(void)setPurchaseID:(NSString *)arg1 ;
-(void)setAppAdamID:(NSNumber *)arg1 ;
-(void)setOfferName:(NSString *)arg1 ;
-(void)setSubscriptionPeriodInISO_8601:(NSString *)arg1 ;
-(void)setTrialPeriodInISO_8601:(NSString *)arg1 ;
-(void)setSubscriptionPriceFormatted:(NSString *)arg1 ;
-(void)appLookupWithAppAdamID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)purchaseRestore;
-(void)appLookupForBundleIDWithAppAdamID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)productLookupWithcompletion:(/*^block*/id)arg1 ;
-(void)setProductRequestGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)productRequestGroup;
-(SKProduct *)product;
-(void)setProduct:(SKProduct *)arg1 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithPurchaseID:(id)arg1 cloudContext:(id)arg2 purchaseRestore:(BOOL)arg3 ;
-(void)purchaseLookUp:(/*^block*/id)arg1 ;
-(void)startPurchaseWithTagID:(id)arg1 webAccessOptIn:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)simulatePurchaseWithTagID:(id)arg1 webAccessOptIn:(BOOL)arg2 ;
-(NSString *)subscriptionPriceFormatted;
-(void)setPurchaseRestore:(BOOL)arg1 ;
@end

