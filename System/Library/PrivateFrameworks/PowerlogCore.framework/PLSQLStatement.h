/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <PowerlogCore/PowerlogCore-Structs.h>
@class NSString, NSObject;

@interface PLSQLStatement : NSObject {

	BOOL _isInsert;
	BOOL _isDelete;
	sqlite3_stmtRef _statement;
	NSString* _sqlQuery;
	NSObject*<OS_dispatch_semaphore> _dbSem;
	sqlite3Ref _dbConnection;

}

@property (retain) NSObject*<OS_dispatch_semaphore> dbSem;              //@synthesize dbSem=_dbSem - In the implementation block
@property (assign) sqlite3Ref dbConnection;                             //@synthesize dbConnection=_dbConnection - In the implementation block
@property (assign) sqlite3_stmtRef statement;                           //@synthesize statement=_statement - In the implementation block
@property (retain) NSString * sqlQuery;                                 //@synthesize sqlQuery=_sqlQuery - In the implementation block
@property (readonly) BOOL isInsert;                                     //@synthesize isInsert=_isInsert - In the implementation block
@property (readonly) BOOL isDelete;                                     //@synthesize isDelete=_isDelete - In the implementation block
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)perform;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)statement;
-(NSObject*<OS_dispatch_semaphore>)dbSem;
-(sqlite3Ref)dbConnection;
-(id)initWithSQLQuery:(id)arg1 forDatabase:(sqlite3Ref)arg2 withDBSem:(id)arg3 result:(int*)arg4 ;
-(BOOL)isInsert;
-(int)bindValue:(id)arg1 withFormater:(short)arg2 atPosition:(int)arg3 ;
-(NSString *)sqlQuery;
-(void)setDbConnection:(sqlite3Ref)arg1 ;
-(void)setDbSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setSqlQuery:(NSString *)arg1 ;
-(BOOL)isDelete;
-(void)finalize;
@end

