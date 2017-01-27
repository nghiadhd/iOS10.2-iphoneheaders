/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSSQLiteEntity.h>

@protocol SSSQLiteEntity <NSObject>
@required
+(id)databasePropertyToSetClientProperty:(id)arg1;
+(id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+(id)joinClauseForProperty:(id)arg1;
+(id)databasePropertyToGetClientProperty:(id)arg1;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1;
+(id)foreignDatabaseTableForProperty:(id)arg1;
+(id)foreignDatabaseColumnForProperty:(id)arg1;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1;
-(id)copyValuesForClientProperties:(id)arg1;
-(id)copyXPCEncodedValuesForClientProperties:(id)arg1;
-(id)valueForProperty:(id)arg1;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2;
-(BOOL)setValuesWithDictionary:(id)arg1;
-(BOOL)deleteFromDatabase;

@end


@class SSSQLiteDatabase, NSString;

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity> {

	SSSQLiteDatabase* _database;
	long long _persistentID;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long persistentID;                   //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) BOOL existsInDatabase; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1 ;
+(Class)memoryEntityClass;
+(id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)countForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
-(id)_copyTableClusteredValuesWithValues:(id)arg1 ;
-(BOOL)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 ;
-(id)copyValuesForClientProperties:(id)arg1 ;
-(id)copyXPCEncodedValuesForClientProperties:(id)arg1 ;
-(BOOL)existsInDatabase;
-(id)valueForProperty:(id)arg1 ;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(SSSQLiteDatabase *)database;
-(id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2 ;
-(id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2 ;
-(BOOL)setValuesWithDictionary:(id)arg1 ;
-(BOOL)deleteFromDatabase;
-(long long)persistentID;
@end

