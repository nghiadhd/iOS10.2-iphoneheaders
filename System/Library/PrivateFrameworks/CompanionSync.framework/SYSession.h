/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYChangeSerializer.h>
#import <libobjc.A.dylib/SYStateLoggable.h>

@protocol OS_dispatch_queue, SYSessionDelegate, SYChangeSerializer;
@class NSObject, NSMutableSet, NSString, SYService, NSDictionary, NSError, NSMutableDictionary, PBCodable;

@interface SYSession : NSObject <SYChangeSerializer, SYStateLoggable> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	AB _inTransaction;
	NSMutableSet* _pendingMessageIDs;
	BOOL _rejectedNewSessionFromSamePeer;
	BOOL _sessionStarted;
	BOOL _isSending;
	long long _priority;
	id<SYSessionDelegate> _delegate;
	id<SYChangeSerializer> _serializer;
	NSString* _identifier;
	SYService* _service;
	double _perMessageTimeout;
	double _fullSessionTimeout;
	NSDictionary* _options;
	long long _maxConcurrentMessages;
	NSError* _error;
	NSDictionary* _userContext;
	NSDictionary* _sessionMetadata;
	NSObject*<OS_dispatch_queue> _queue;
	double _birthDate;
	unsigned long long _sessionSignpost;
	unsigned long long _bytesTransferred;
	unsigned long long _changeCount;
	NSMutableDictionary* _peerGenerationIDs;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (assign) long long state; 
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double birthDate;                                      //@synthesize birthDate=_birthDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * wrappedUserContext; 
@property (nonatomic,readonly) double remainingSessionTime; 
@property (assign,nonatomic) unsigned long long sessionSignpost;                    //@synthesize sessionSignpost=_sessionSignpost - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesTransferred;                 //@synthesize bytesTransferred=_bytesTransferred - In the implementation block
@property (nonatomic,readonly) unsigned long long changeCount;                      //@synthesize changeCount=_changeCount - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * peerGenerationIDs;                 //@synthesize peerGenerationIDs=_peerGenerationIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long protocolVersion; 
@property (assign,nonatomic) long long priority;                                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic,__weak) id<SYSessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,retain) id<SYChangeSerializer> serializer;                     //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,__weak,readonly) SYService * service;                          //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) double perMessageTimeout;                              //@synthesize perMessageTimeout=_perMessageTimeout - In the implementation block
@property (assign,nonatomic) double fullSessionTimeout;                             //@synthesize fullSessionTimeout=_fullSessionTimeout - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long maxConcurrentMessages;                       //@synthesize maxConcurrentMessages=_maxConcurrentMessages - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign) BOOL canRestart; 
@property (assign) BOOL canRollback; 
@property (nonatomic,readonly) BOOL isSending;                                      //@synthesize isSending=_isSending - In the implementation block
@property (readonly) BOOL isResetSync; 
@property (readonly) BOOL wasCancelled; 
@property (nonatomic,retain) NSDictionary * userContext;                            //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,copy) NSDictionary * sessionMetadata;                          //@synthesize sessionMetadata=_sessionMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<SYSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<SYSessionDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)identifier;
-(unsigned long long)changeCount;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)protocolVersion;
-(void)_handleError:(id)arg1 ;
-(BOOL)isResetSync;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(NSDictionary *)wrappedUserContext;
-(id<SYChangeSerializer>)serializer;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3 ;
-(id)dataFromChange:(id)arg1 ;
-(id)changeFromData:(id)arg1 ofType:(long long)arg2 ;
-(void)setSerializer:(id<SYChangeSerializer>)arg1 ;
-(BOOL)isSending;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2 ;
-(double)fullSessionTimeout;
-(long long)maxConcurrentMessages;
-(double)perMessageTimeout;
-(id)combinedEngineOptions:(id)arg1 ;
-(void)didCompleteSession;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)didStartSession;
-(double)remainingSessionTime;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(PBCodable *)stateForLogging;
-(void)_continue;
-(void)setSessionSignpost:(unsigned long long)arg1 ;
-(unsigned long long)sessionSignpost;
-(unsigned long long)bytesTransferred;
-(BOOL)_willAcquiesceToNewSessionFromPeer:(id)arg1 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(void)_clearOutgoingMessageUUID:(id)arg1 ;
-(void)_recordOutgoingMessageUUID:(id)arg1 ;
-(BOOL)_readyToProcessIncomingMessages;
-(NSMutableDictionary *)peerGenerationIDs;
-(NSDictionary *)sessionMetadata;
-(void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_supercededWithSession:(id)arg1 ;
-(void)setPerMessageTimeout:(double)arg1 ;
-(void)setFullSessionTimeout:(double)arg1 ;
-(void)setMaxConcurrentMessages:(long long)arg1 ;
-(id)_cancelPendingMessagesReturningFailures;
-(void)setSessionMetadata:(NSDictionary *)arg1 ;
-(void)_resolvedIdentifierForRequest:(id)arg1 ;
-(void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2 ;
-(id)CPObfuscatedDescription;
-(void)setPeerGenerationIDs:(NSMutableDictionary *)arg1 ;
-(BOOL)wasCancelled;
-(id)initWithService:(id)arg1 ;
-(SYService *)service;
-(NSDictionary *)userContext;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(BOOL)_beginTransaction;
-(BOOL)_endTransaction;
-(double)birthDate;
-(void)setBirthDate:(double)arg1 ;
-(void)_pause;
@end

