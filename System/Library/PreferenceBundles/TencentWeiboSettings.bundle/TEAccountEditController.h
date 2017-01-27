/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/TencentWeiboSettings.bundle/TencentWeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, ACAccountType;

@interface TEAccountEditController : ACUIViewController {

	ACAccount* _account;
	ACAccountType* _tencentWeiboAccountType;
	BOOL _isAccountDirty;

}
-(id)_tencentWeiboAccountType;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_handleSaveCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 wasVerifying:(BOOL)arg3 ;
-(void)_setDisplayName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_userNameSpecifier;
-(void)_showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(void)_confirmDeleteAccount;
-(id)_displayNameWithSpecifier:(id)arg1 ;
-(id)_descriptionSpecifier;
-(void)_saveAccountChangesIfNecessary;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_passwordSpecifier;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

