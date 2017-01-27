/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDSQLiteDatabase, HDSQLiteQueryDescriptor;

@interface HDSQLiteQuery : NSObject {

	HDSQLiteDatabase* _database;
	HDSQLiteQueryDescriptor* _descriptor;
	HDSQLiteQueryDescriptor* _queryDescriptor;

}

@property (readonly) HDSQLiteDatabase * database;                            //@synthesize database=_database - In the implementation block
@property (readonly) HDSQLiteQueryDescriptor * queryDescriptor;              //@synthesize queryDescriptor=_queryDescriptor - In the implementation block
-(HDSQLiteDatabase *)database;
-(id)initWithDatabase:(id)arg1 descriptor:(id)arg2 ;
-(BOOL)enumeratePersistentIDsAndProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(/*^block*/id)arg3 ;
-(BOOL)enumerateProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(/*^block*/id)arg3 ;
-(void)bindToSelectStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)copySelectSQLWithProperties:(id)arg1 ;
-(BOOL)deleteAllEntities;
-(void)enumerateEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(HDSQLiteQueryDescriptor *)queryDescriptor;
@end

