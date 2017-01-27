/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLCore, NSPersistentStoreRequest, NSSQLiteConnection, NSManagedObjectContext, NSError, NSException, NSSQLRowCache, NSQueryGenerationToken;

@interface NSSQLStoreRequestContext : NSObject {

	NSSQLCore* _sqlCore;
	NSPersistentStoreRequest* _persistentStoreRequest;
	NSSQLiteConnection* _connection;
	NSManagedObjectContext* _context;
	NSError* _error;
	NSException* _exception;
	id _result;
	BOOL _useColoredLogging;
	BOOL _useConcurrentFetching;

}

@property (nonatomic,readonly) NSSQLCore * sqlCore; 
@property (nonatomic,retain) NSSQLiteConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType; 
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest;              //@synthesize persistentStoreRequest=_persistentStoreRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSError * localError;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) int debugLogLevel; 
@property (nonatomic,readonly) BOOL useColoredLogging;                                         //@synthesize useColoredLogging=_useColoredLogging - In the implementation block
@property (nonatomic,readonly) BOOL useConcurrentFetching;                                     //@synthesize useConcurrentFetching=_useConcurrentFetching - In the implementation block
@property (nonatomic,retain) id result;                                                        //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) id exception;                                                     //@synthesize exception=_exception - In the implementation block
@property (nonatomic,readonly) NSSQLRowCache * rowCache; 
@property (nonatomic,readonly) BOOL isWritingRequest; 
@property (nonatomic,readonly) NSQueryGenerationToken * queryGenerationToken; 
@property (nonatomic,readonly) BOOL shouldRegisterQueryGeneration; 
-(NSSQLCore *)sqlCore;
-(id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(void)setLocalError:(NSError *)arg1 ;
-(void)setException:(id)arg1 ;
-(BOOL)isWritingRequest;
-(void)executeRequestUsingConnection:(id)arg1 ;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(void)executePrologue;
-(BOOL)useConcurrentFetching;
-(id)newStatementWithSQLString:(id)arg1 ;
-(NSQueryGenerationToken *)queryGenerationToken;
-(BOOL)forConflictAnalysis;
-(id)createNestedObjectFaultContextForObjectWithID:(id)arg1 ;
-(id)notificationSourceObject;
-(NSSQLRowCache *)rowCache;
-(int)debugLogLevel;
-(void)executeEpilogue;
-(BOOL)shouldRegisterQueryGeneration;
-(BOOL)useColoredLogging;
-(NSError *)localError;
-(id)exception;
-(void)dealloc;
-(NSManagedObjectContext *)context;
-(NSSQLiteConnection *)connection;
-(void)setConnection:(NSSQLiteConnection *)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(unsigned long long)requestType;
@end

