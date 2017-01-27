/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailAccountSettings/MailAccountSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <MailAccountSettings/MailboxBehaviorMailboxPickerDelegate.h>
#import <libobjc.A.dylib/ACUIIdentityPickerViewControllerDelegate.h>

@class MailAccount, NSMutableDictionary, NSString;

@interface AccountPSAdvancedController : PSListController <MailboxBehaviorMailboxPickerDelegate, ACUIIdentityPickerViewControllerDelegate> {

	MailAccount* _account;
	NSMutableDictionary* _accountValues;
	NSMutableDictionary* _originalAccountValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSMIMEProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)deleteIntervalString;
-(id)mailbox:(id)arg1 ;
-(void)setSSLSetting:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setDeleteIntervalString:(id)arg1 withSpecifier:(id)arg2 ;
-(id)authSchemeTitlesForSpecifier:(id)arg1 ;
-(BOOL)_allowedToEnableSpecifier:(id)arg1 ;
-(id)authSchemeValuesForSpecifier:(id)arg1 ;
-(id)mailboxUidForType:(int)arg1 ;
-(void)_resetTargetsForSpecifiers:(id)arg1 ;
-(void)pickerDidChooseMailbox:(id)arg1 forType:(int)arg2 ;
-(id)_secureMIMESigningAndEncryptionSpecifiers;
-(void)_updateArchiveByDefaultSpecifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)isPropertyEnabledForIdentityPickerController:(id)arg1 ;
-(SecIdentityRef)selectedIdentityForIdentityPickerController:(id)arg1 ;
-(void)identityPickerController:(id)arg1 setPropertyEnabled:(BOOL)arg2 withIdentity:(SecIdentityRef)arg3 ;
-(id)localizedSwitchNameForIdentityPickerController:(id)arg1 ;
-(id)copyIdentitiesForIdentityPickerController:(id)arg1 ;
-(SecTrustRef)copyTrustForIdentityPickerController:(id)arg1 identity:(SecIdentityRef)arg2 ;
-(id)emailAddressesForIdentityPickerController:(id)arg1 ;
-(BOOL)allowEditingForIdentityPickerController:(id)arg1 ;
-(BOOL)storeMailboxTypeOnServer:(int)arg1 ;
-(id)account;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)specifiers;
@end

