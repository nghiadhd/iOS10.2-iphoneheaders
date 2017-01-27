/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate, NSData, NSDictionary, NSMutableSet;

@interface IDSPeerAggregateMessage : IDSMessage <NSCopying> {

	BOOL _fireAndForget;
	BOOL _hasRecivedAPSDAck;
	BOOL _isFinalMessage;
	NSString* _sourcePeerID;
	NSString* _encryptionType;
	NSString* _messageID;
	NSString* _targetService;
	NSNumber* _priority;
	NSDate* _expirationDate;
	NSData* _fromIdentity;
	NSDictionary* _additionalDictionary;
	NSMutableSet* _individualPeerMessages;
	NSMutableSet* _pendingResponseTokens;
	long long _maxSize;
	long long _currentSize;
	NSNumber* _chunkNumber;

}

@property (copy) NSString * sourcePeerID;                            //@synthesize sourcePeerID=_sourcePeerID - In the implementation block
@property (copy) NSString * encryptionType;                          //@synthesize encryptionType=_encryptionType - In the implementation block
@property (copy) NSString * messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (copy) NSString * targetService;                           //@synthesize targetService=_targetService - In the implementation block
@property (copy) NSNumber * priority;                                //@synthesize priority=_priority - In the implementation block
@property (copy) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy) NSData * fromIdentity;                              //@synthesize fromIdentity=_fromIdentity - In the implementation block
@property (copy) NSDictionary * additionalDictionary;                //@synthesize additionalDictionary=_additionalDictionary - In the implementation block
@property (copy) NSMutableSet * individualPeerMessages;              //@synthesize individualPeerMessages=_individualPeerMessages - In the implementation block
@property (copy) NSMutableSet * pendingResponseTokens;               //@synthesize pendingResponseTokens=_pendingResponseTokens - In the implementation block
@property (assign) long long maxSize;                                //@synthesize maxSize=_maxSize - In the implementation block
@property (assign) long long currentSize;                            //@synthesize currentSize=_currentSize - In the implementation block
@property (assign) BOOL fireAndForget;                               //@synthesize fireAndForget=_fireAndForget - In the implementation block
@property (assign) BOOL hasRecivedAPSDAck;                           //@synthesize hasRecivedAPSDAck=_hasRecivedAPSDAck - In the implementation block
@property (copy) NSNumber * chunkNumber;                             //@synthesize chunkNumber=_chunkNumber - In the implementation block
@property (assign) BOOL isFinalMessage;                              //@synthesize isFinalMessage=_isFinalMessage - In the implementation block
-(void)setChunkNumber:(NSNumber *)arg1 ;
-(NSString *)sourcePeerID;
-(void)setSourcePeerID:(NSString *)arg1 ;
-(NSDictionary *)additionalDictionary;
-(void)setAdditionalDictionary:(NSDictionary *)arg1 ;
-(void)setTargetService:(NSString *)arg1 ;
-(void)setFromIdentity:(NSData *)arg1 ;
-(void)setHasRecivedAPSDAck:(BOOL)arg1 ;
-(void)callAllIndividualCompletionBlocksWithResponseCode:(long long)arg1 andError:(id)arg2 ;
-(void)clearAllPendingResponseTokens;
-(BOOL)hasRecivedAPSDAck;
-(void)callAllAckBlocks;
-(NSString *)targetService;
-(NSData *)fromIdentity;
-(id)_processMessageResponseForMessage:(id)arg1 withError:(id)arg2 resultCode:(long long)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6 fromIdentity:(id)arg7 ;
-(void)setIndividualPeerMessages:(NSMutableSet *)arg1 ;
-(NSMutableSet *)individualPeerMessages;
-(NSMutableSet *)pendingResponseTokens;
-(void)setPendingResponseTokens:(NSMutableSet *)arg1 ;
-(void)setCurrentSize:(long long)arg1 ;
-(NSNumber *)chunkNumber;
-(BOOL)isFinalMessage;
-(void)setIsFinalMessage:(BOOL)arg1 ;
-(id)initWithHighPriority:(BOOL)arg1 ;
-(id)initWithPeerMessage:(id)arg1 service:(id)arg2 fromIdentity:(id)arg3 maxSize:(unsigned long long)arg4 ;
-(BOOL)hasSpaceForAggregatableMessage:(id)arg1 ;
-(BOOL)addAggregatableMessage:(id)arg1 ;
-(BOOL)removeAllAggregatableMessages;
-(id)messageBody;
-(NSString *)encryptionType;
-(void)setEncryptionType:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)maxSize;
-(NSNumber *)priority;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setMaxSize:(long long)arg1 ;
-(long long)currentSize;
-(BOOL)fireAndForget;
-(void)logFailureInfo;
-(void)setFireAndForget:(BOOL)arg1 ;
-(void)noteResponseForToken:(id)arg1 withResponse:(long long)arg2 andError:(id)arg3 ;
-(BOOL)expectingMoreResponses;
-(id)requiredKeys;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
@end

