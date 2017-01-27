/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/DAAccount.migrator/DAAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface DAAccountMigrator : DataClassMigrator
-(float)migrationProgress;
-(float)estimatedDuration;
-(void)_moveExchangeCredentialsToAppleAccessGroup;
-(void)_updateFacebookAccountAuthenticationTypes;
-(void)_upgradeDAAccounts;
-(void)_writeDeviceSpecificID;
-(void)_ensureHolidaySubCalAccount;
-(id)dataClassName;
-(BOOL)performMigration;
@end

