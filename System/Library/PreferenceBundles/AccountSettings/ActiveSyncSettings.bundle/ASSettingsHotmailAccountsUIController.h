/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActiveSyncSettings/ASSettingsAccountsUIController.h>
#import <libobjc.A.dylib/ACUIAccountCreationControlling.h>

@class DAEASOAuthWebViewController, UIViewController, NSString;

@interface ASSettingsHotmailAccountsUIController : ASSettingsAccountsUIController <ACUIAccountCreationControlling> {

	DAEASOAuthWebViewController* _webAuthController;
	/*^block*/id _completion;
	UIViewController* _settingsViewController;

}

@property (nonatomic,retain) DAEASOAuthWebViewController * webAuthController;              //@synthesize webAuthController=_webAuthController - In the implementation block
@property (nonatomic,copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) UIViewController * settingsViewController;                    //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isHotmailAccount;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)beginAccountCreationWithSpecifier:(id)arg1 fromViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountSpecifiers;
-(void)_validateUniquenessAndAddAccount:(id)arg1 username:(id)arg2 token:(id)arg3 refreshToken:(id)arg4 completion:(/*^block*/id)arg5 ;
-(DAEASOAuthWebViewController *)webAuthController;
-(void)setWebAuthController:(DAEASOAuthWebViewController *)arg1 ;
-(void)setSettingsViewController:(UIViewController *)arg1 ;
-(UIViewController *)settingsViewController;
@end
