/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKKnowledgeEventStreamDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, _DKRateLimitPolicyEnforcer, _DKPrivacyPolicyEnforcer;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _defaultQueue;
	_DKRateLimitPolicyEnforcer* _rateLimitEnforcer;
	_DKPrivacyPolicyEnforcer* _privacyEnforcer;

}

@property (retain) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> defaultQueue;                     //@synthesize defaultQueue=_defaultQueue - In the implementation block
@property (readonly) _DKRateLimitPolicyEnforcer * rateLimitEnforcer;              //@synthesize rateLimitEnforcer=_rateLimitEnforcer - In the implementation block
@property (readonly) _DKPrivacyPolicyEnforcer * privacyEnforcer;                  //@synthesize privacyEnforcer=_privacyEnforcer - In the implementation block
+(id)knowledgeStore;
+(id)knowledgeStoreWithDirectReadOnlyAccess;
-(id)init;
-(void)dealloc;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)defaultQueue;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(void)setDefaultQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_DKRateLimitPolicyEnforcer *)rateLimitEnforcer;
-(_DKPrivacyPolicyEnforcer *)privacyEnforcer;
-(BOOL)saveObjects:(id)arg1 error:(id*)arg2 ;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

