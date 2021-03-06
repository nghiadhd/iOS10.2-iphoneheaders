/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreInterest/CoreInterest-Structs.h>
@class NSURL;

@interface IFDataStore : NSObject {

	NSURL* _path;
	unsigned long long _schemaVersion;
	sqlite3Ref _database;

}

@property (nonatomic,copy,readonly) NSURL * path;                //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) sqlite3Ref database;              //@synthesize database=_database - In the implementation block
+(id)migrationPlan;
-(void)dealloc;
-(BOOL)_reset;
-(NSURL *)path;
-(id)initWithPath:(id)arg1 ;
-(void)clear;
-(long long)version;
-(sqlite3Ref)database;
-(void)clearAll;
-(long long)migrateToVersion:(unsigned long long)arg1 withMigrationPlan:(id)arg2 ;
-(long long)configureDatabase;
-(void)updateSchemaVersionNumberTo:(long long)arg1 ;
-(long long)migrate;
-(void)runQuery:(id)arg1 ;
-(void)runQuery:(id)arg1 inTransaction:(BOOL)arg2 ;
-(void)_dropAllOfType:(id)arg1 ;
-(void)_runQuery:(id)arg1 preparation:(/*^block*/id)arg2 step:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(long long)runMigrationPlan:(id)arg1 toVersion:(unsigned long long)arg2 ;
@end

