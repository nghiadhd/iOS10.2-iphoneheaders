/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@required
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
-(id)passWithUniqueID:(id)arg1;
-(BOOL)canAddPaymentPass;
-(id)paymentPasses;
-(void)removePass:(id)arg1;

@end

