/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKExtensionBaseContext.h>
#import <libobjc.A.dylib/PKExtensionVendorContextProtocol.h>

@class NSString;

@interface PKExtensionVendorContext : PKExtensionBaseContext <PKExtensionVendorContextProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hostContext;
-(id)hostContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1 ;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1 ;
-(void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1 ;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1 ;
-(void)handleHostApplicationWillResignActive:(BOOL)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)handleHostApplicationDidCancel;
-(void)prepareWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

