/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AccountPSOutgoingController : PSListController {

	PSSpecifier* _newOutgoingAccountSpecifier;

}
-(void)reloadOutgoingAccounts;
-(id)_getStatusForServer:(id)arg1 ;
-(id)specifierForDeliveryAccount:(id)arg1 isPrimary:(BOOL)arg2 isCarrierAccount:(BOOL)arg3 ;
-(void)canceledAccountSetup;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)finishedAccountSetup;
-(id)specifiers;
@end

