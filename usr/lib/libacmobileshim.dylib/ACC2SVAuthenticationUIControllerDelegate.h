/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACC2SVAuthenticationUIControllerDelegate <NSObject>
@optional
-(id)uiControllerMyAppleConnectURL:(id)arg1;
-(void)uiControllerUserNeedsToAddTrustedDevices:(id)arg1;
-(id)uiControllerTitle:(id)arg1;
-(id)uiControllerRealm:(id)arg1;
-(id)uiControllerSelectedDevice:(id)arg1;
-(int)uiControllerRequestSenderProcessID:(id)arg1;

@required
-(void)uiControllerRefreshDeviceList:(id)arg1;
-(void)uiController:(id)arg1 resendVerificationCodeWithCompletion:(/*^block*/id)arg2;
-(void)uiControllerUserIsUnableToReceiveVerificationCode:(id)arg1;
-(void)uiController:(id)arg1 getImageWithURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)uiControllerCancelGettingImages:(id)arg1;
-(void)uiControllerHideViewAnimated:(id)arg1;
-(void)uiControllerSetup:(id)arg1;

@end

