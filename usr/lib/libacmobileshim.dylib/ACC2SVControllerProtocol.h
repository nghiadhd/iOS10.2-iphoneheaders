/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACC2SVControllerProtocol <NSObject>
@property (assign,nonatomic) id<ACC2SVControllerDelegate> delegate; 
@property (nonatomic,retain) id<ACC2SVAuthenticationUIControllerProtocol> secondFactorAuthUIController; 
@property (nonatomic,retain) id<ACC2SVTransportControllerProtocol> transportController; 
@optional
-(void)removeHSATokenForPrincipal:(id)arg1;
-(void)synchronizeHSATokens:(id)arg1;
-(void)setup2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)setDelegate:(id)arg1;
-(id<ACC2SVControllerDelegate>)delegate;
-(void)setSecondFactorAuthUIController:(id)arg1;
-(void)setTransportController:(id)arg1;
-(id<ACC2SVAuthenticationUIControllerProtocol>)secondFactorAuthUIController;
-(id<ACC2SVTransportControllerProtocol>)transportController;
-(void)perform2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelWithCompletion:(/*^block*/id)arg1;

@end

