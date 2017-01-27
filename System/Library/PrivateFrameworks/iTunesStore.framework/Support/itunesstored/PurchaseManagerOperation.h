/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SSPurchase;

@interface PurchaseManagerOperation : ISOperation {

	NSNumber* _applicationOwnerAccountDSID;
	NSString* _clientIdentifierHeader;
	SSPurchase* _purchase;
	/*^block*/id _purchaseBlock;
	long long _urlBagType;

}

@property (readonly) SSPurchase * purchase; 
@property (copy) NSString * clientIdentifierHeader; 
@property (assign) long long URLBagType; 
@property (copy) id purchaseBlock; 
-(id)_urlBagKey;
-(void)setPurchaseBlock:(id)arg1 ;
-(BOOL)_isDeviceCapableForPurchase;
-(id)_incompatibleErrorWithPurchase:(id)arg1 ;
-(void)_showDialogForPurchase:(id)arg1 error:(id)arg2 ;
-(void)_performSetup;
-(id)_newPurchaseOperationWithPurchase:(id)arg1 ;
-(void)_updateAccount:(id)arg1 withPurchaseResponse:(id)arg2 ;
-(void)_performTeardownWithResult:(BOOL)arg1 queueResponse:(id)arg2 ;
-(id)purchaseBlock;
-(id)_installedSoftwareApplicationForPurchase:(id)arg1 ;
-(id)_personalizedRedownloadParametersForPurchase:(id)arg1 ;
-(id)_localRedownloadParametersForPurchase:(id)arg1 ;
-(id)_placeholderVendorIdentifier;
-(id)_familyPurchaserAccountIdentifierForApplication:(id)arg1 ;
-(id)_appUpdateDownloadParametersForPurchase:(id)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)run;
-(id)initWithPurchase:(id)arg1 ;
-(void)setURLBagType:(long long)arg1 ;
-(long long)URLBagType;
-(SSPurchase *)purchase;
@end

