/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountMigrator/AccountMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@class NSMutableDictionary;

@interface AccountsDataMigrator : DataClassMigrator {

	NSMutableDictionary* _collatedMigrationData;
	BOOL _foundOldMailAccountsToMigrate;
	BOOL _foundOldDAAccountsToMigrate;

}
-(id)_accountTypeForMailAccountClass:(id)arg1 ;
-(BOOL)_migrateAccountsFrom7A149:(id)arg1 ;
-(id)_expectedCalDAVUsernamesForAccount:(id)arg1 ;
-(id)_urlSafeUsername:(id)arg1 ;
-(void)_saveCollatedMigrationInformation;
-(BOOL)_migrateAccountsFrom8F191:(id)arg1 ;
-(BOOL)_migrateAccountsFrom9A182:(id)arg1 ;
-(BOOL)_migrateAccountsFrom8B117:(id)arg1 ;
-(BOOL)_migrateAccountsFrom9A334:(id)arg1 ;
-(BOOL)_migrateAccountsFrom7A241:(id)arg1 ;
-(id)_convertMailAccountDescription:(id)arg1 type:(id)arg2 ;
-(BOOL)_saveMigrationInformation;
-(BOOL)_migrateNewAccountsInfo:(id)arg1 ;
-(BOOL)_migrateMailAccounts:(id)arg1 ;
-(BOOL)_migrateDAAccounts:(id)arg1 ;
-(BOOL)_failedToRemoveOldAccountsInfo;
-(BOOL)_calDAVAccount:(id)arg1 matchesUmbrellaAccount:(id)arg2 ;
-(BOOL)_migrateAccountsFrom7A242:(id)arg1 ;
-(BOOL)_migrateAccountsFrom7A153:(id)arg1 ;
-(void)_enableProvisioningForDataClass:(id)arg1 toAccount:(id)arg2 ifChildAccountExistsOfType:(id)arg3 ;
-(BOOL)_migrateAccountsFrom8A293:(id)arg1 ;
-(BOOL)_migrateAccountsFrom8C136:(id)arg1 ;
-(id)_accountShortTypeStringForMailAccountClass:(id)arg1 ;
-(BOOL)_migrateAccountsFrom7A150:(id)arg1 ;
-(id)_expectedCalDAVPrincipalURLsForAccount:(id)arg1 ;
-(BOOL)_account:(id)arg1 hasChildAccountOfType:(id)arg2 ;
-(id)_expectedCalDAVHostnameForAccount:(id)arg1 ;
-(id)_absolutePathToOldAccountsInfoRemovalSentinel;
-(id)_accountTypeStringForMailAccountClass:(id)arg1 ;
-(BOOL)_newAccountsInformationPresent;
-(BOOL)_migrateAccountsFrom9B176:(id)arg1 ;
-(BOOL)_removeOldAccountsInfo;
-(id)_convertExchangeAccountDescription:(id)arg1 ;
-(void)_copyAsideAccountsPlist;
-(BOOL)_tetheredDisabledInSources:(CFArrayRef)arg1 ;
-(void)dealloc;
-(id)dataClassName;
-(BOOL)executeMigrationSteps;
-(BOOL)performMigration;
@end

