/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAppleIDAuthenticationClientProtocol <NSObject>
@required
-(void)presentKeepUsingUIForContext:(id)arg1 appleID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissKeepUsingUIForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)presentBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentLoginAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5;
-(void)presentSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentSecondFactorAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5;
-(void)presentServerProvidedUIForContext:(id)arg1 URLRequest:(id)arg2 delegate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)dismissServerProvidedUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentICSCRecoveryUIForContext:(id)arg1 withInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissICSCRecoveryUIForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContextID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)provisionAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)eraseAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

