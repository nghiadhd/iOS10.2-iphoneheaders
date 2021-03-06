/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSString, BKSProcessAssertion;

@interface SSSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _databasePath;
	BOOL _readOnly;
	BOOL _isInTransaction;
	/*^block*/id _setupBlock;
	CFDictionaryRef _statementCache;
	BOOL _takesTaskCompletionAssertions;
	BKSProcessAssertion* _taskAssertion;
	long long _taskAssertionCount;

}

@property (assign) BOOL takesTaskCompletionAssertions; 
@property (nonatomic,copy) id setupBlock;                           //@synthesize setupBlock=_setupBlock - In the implementation block
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3 isCorrupt:(BOOL*)arg4 ;
+(void)_setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(long long)countChanges;
-(void)setSetupBlock:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)_beginTaskCompletionAssertion;
-(void)_endTaskCompletionAssertion;
-(void)_accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(void)_resetCorruptDatabase;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(BOOL)arg2 ;
-(BOOL)setUserVersion:(long long)arg1 forDatabase:(id)arg2 ;
-(long long)userVersionForDatabase:(id)arg1 ;
-(int)_openFlags;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(BOOL)_resetDatabaseWithPath:(id)arg1 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)beginTaskCompletionAssertion;
-(void)endTaskCompletionAssertion;
-(void)setTakesTaskCompletionAssertions:(BOOL)arg1 ;
-(BOOL)takesTaskCompletionAssertions;
-(id)setupBlock;
-(void)dealloc;
-(id)initWithDatabaseURL:(id)arg1 ;
-(int)_openDatabase;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)executeSQL:(id)arg1 ;
-(BOOL)setUserVersion:(long long)arg1 ;
-(long long)userVersion;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
@end

