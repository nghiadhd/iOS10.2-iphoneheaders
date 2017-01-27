/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/LDAPSettings.bundle/LDAPSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>

@class NSArray;

@interface LDAPSettingsAccountsUIController : DASettingsAccountsUIController {

	NSArray* _specifiersToInsert;

}

@property (nonatomic,retain) NSArray * specifiersToInsert;              //@synthesize specifiersToInsert=_specifiersToInsert - In the implementation block
-(id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(id)accountSpecifiers;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(BOOL)validateAccount;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(void)setSpecifiersToInsert:(NSArray *)arg1 ;
-(NSArray *)specifiersToInsert;
-(id)_searchBaseSpecifiers;
-(void)_updateDescriptionFromServer:(id)arg1 ;
-(void)_markAccountDirty;
-(BOOL)haveEnoughValues;
@end

