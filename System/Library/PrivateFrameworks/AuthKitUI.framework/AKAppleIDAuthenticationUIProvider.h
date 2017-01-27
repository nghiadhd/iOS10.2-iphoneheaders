/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider>
@optional
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1;

@required
-(void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1;

@end
