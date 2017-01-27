/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/00LaunchServicesMigrator.migrator/00LaunchServicesMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface LSDatabaseMigrator : DataClassMigrator
-(BOOL)migrateFromVersion9_0ToVersionCurrent;
-(BOOL)populateLSDatabase;
-(BOOL)moveItemAtURL:(id)arg1 destination:(id)arg2 ;
-(BOOL)removeItemAtURL:(id)arg1 matchingPattern:(id)arg2 ;
-(id)ItemsAtURL:(id)arg1 matchingPattern:(id)arg2 ;
-(float)migrationProgress;
-(id)init;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

