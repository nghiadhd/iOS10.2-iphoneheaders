/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/BuddyMigrator.migrator/BuddyMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface BuddyDataMigrator : DataClassMigrator {

	BOOL _done;
	BOOL _didRestore;
	BOOL _didUpgrade;
	BOOL _isMultiUser;
	BOOL _runUpgradeMiniBuddies;
	unsigned _storedBuddyMigratorVersion;

}
-(void)_performHSA2Migration;
-(BOOL)_performiOSMigration;
-(unsigned)_storedBuddyMigratorVersion;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

