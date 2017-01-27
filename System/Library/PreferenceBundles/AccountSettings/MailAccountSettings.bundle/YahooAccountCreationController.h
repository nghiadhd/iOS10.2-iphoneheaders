/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACUIAccountCreationControlling.h>

@class ACAccountStore, PSSpecifier, PSViewController, SLYahooWebAuthController, NSString;

@interface YahooAccountCreationController : NSObject <ACUIAccountCreationControlling> {

	ACAccountStore* _accountStore;
	PSSpecifier* _specifier;
	PSViewController* _viewController;
	/*^block*/id _completion;
	SLYahooWebAuthController* _webAuthController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_validateUniquenessAndAddAccountWithUsername:(id)arg1 fullUserName:(id)arg2 token:(id)arg3 refreshToken:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_showDuplicateAccountAlertForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)beginAccountCreationWithSpecifier:(id)arg1 fromViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

