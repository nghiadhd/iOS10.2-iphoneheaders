/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSNumber, NSDate, IDSSocketPairMessage, IDSProtobuf, NSDictionary, NSArray;

@interface IDSLocalDeliveryMessage : NSObject {

	NSData* _payload;
	NSString* _fromID;
	NSString* _topic;
	NSString* _awdTopic;
	NSString* _messageUUID;
	NSNumber* _domainHash;
	NSNumber* _command;
	NSString* _toDeviceID;
	NSString* _toURI;
	NSDate* _expirationDate;
	/*^block*/id _completionBlock;
	/*^block*/id _fallbackBlock;
	unsigned _messageID;
	double _timeEnqueued;
	double _timeSent;
	long long _priority;
	unsigned _dataProtectionClass;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _nonWaking;
	BOOL _requireBluetooth;
	BOOL _compressPayload;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _queueOneIdentifier;
	IDSSocketPairMessage* _underlyingSocketPairMessage;
	BOOL _isSending;
	BOOL _fullyAckd;
	IDSProtobuf* _protobuf;
	unsigned long long _sentMessageDataSize;
	BOOL _didFallback;
	NSString* _resourcePath;
	NSDictionary* _resourceMetadata;
	BOOL _manualQueueRemoval;
	BOOL _deniedToSend;
	BOOL _shouldEnforceRemoteTimeout;
	NSArray* _duetIdentifiersOverride;
	BOOL _bypassDuet;
	unsigned long long _minCompatibilityVersion;
	long long _messageType;

}

@property (assign,nonatomic) long long priority;                                              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned dataProtectionClass;                                    //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (assign,nonatomic) BOOL expectsPeerResponse;                                        //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (assign,nonatomic) BOOL wantsAppAck;                                                //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign,nonatomic) BOOL compressPayload;                                            //@synthesize compressPayload=_compressPayload - In the implementation block
@property (assign,nonatomic) BOOL compressed;                                                 //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) BOOL nonWaking;                                                  //@synthesize nonWaking=_nonWaking - In the implementation block
@property (assign,nonatomic) BOOL requireBluetooth;                                           //@synthesize requireBluetooth=_requireBluetooth - In the implementation block
@property (nonatomic,copy) NSString * queueOneIdentifier;                                     //@synthesize queueOneIdentifier=_queueOneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerResponseIdentifier;                                 //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (nonatomic,copy) NSData * payload;                                                  //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned messageID;                                              //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) double timeEnqueued;                                             //@synthesize timeEnqueued=_timeEnqueued - In the implementation block
@property (assign,nonatomic) double timeSent;                                                 //@synthesize timeSent=_timeSent - In the implementation block
@property (nonatomic,copy) NSString * fromID;                                                 //@synthesize fromID=_fromID - In the implementation block
@property (nonatomic,copy) NSString * topic;                                                  //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * awdTopic;                                               //@synthesize awdTopic=_awdTopic - In the implementation block
@property (nonatomic,copy) NSString * messageUUID;                                            //@synthesize messageUUID=_messageUUID - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSNumber * domainHash;                                           //@synthesize domainHash=_domainHash - In the implementation block
@property (nonatomic,retain) NSNumber * command;                                              //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSString * toDeviceID;                                           //@synthesize toDeviceID=_toDeviceID - In the implementation block
@property (nonatomic,retain) NSString * toURI;                                                //@synthesize toURI=_toURI - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id fallbackBlock;                                                  //@synthesize fallbackBlock=_fallbackBlock - In the implementation block
@property (assign,nonatomic) BOOL didFallback;                                                //@synthesize didFallback=_didFallback - In the implementation block
@property (assign,nonatomic) BOOL deniedToSend;                                               //@synthesize deniedToSend=_deniedToSend - In the implementation block
@property (assign,nonatomic) BOOL shouldEnforceRemoteTimeout;                                 //@synthesize shouldEnforceRemoteTimeout=_shouldEnforceRemoteTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long sentMessageDataSize;                          //@synthesize sentMessageDataSize=_sentMessageDataSize - In the implementation block
@property (nonatomic,readonly) BOOL isDoneSending;                                            //@synthesize fullyAckd=_fullyAckd - In the implementation block
@property (nonatomic,retain) IDSProtobuf * protobuf;                                          //@synthesize protobuf=_protobuf - In the implementation block
@property (nonatomic,retain) NSString * resourcePath;                                         //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,retain) NSDictionary * resourceMetadata;                                 //@synthesize resourceMetadata=_resourceMetadata - In the implementation block
@property (nonatomic,retain) NSArray * duetIdentifiersOverride;                               //@synthesize duetIdentifiersOverride=_duetIdentifiersOverride - In the implementation block
@property (assign,nonatomic) BOOL bypassDuet;                                                 //@synthesize bypassDuet=_bypassDuet - In the implementation block
@property (assign,nonatomic) BOOL manualQueueRemoval;                                         //@synthesize manualQueueRemoval=_manualQueueRemoval - In the implementation block
@property (assign,nonatomic) unsigned long long minCompatibilityVersion;                      //@synthesize minCompatibilityVersion=_minCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long messageType;                                           //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) IDSSocketPairMessage * underlyingSocketPairMessage;              //@synthesize underlyingSocketPairMessage=_underlyingSocketPairMessage - In the implementation block
+(id)socketPairMessageWithCommand:(long long)arg1 streamID:(unsigned short)arg2 sequenceNumber:(unsigned)arg3 messageID:(unsigned)arg4 expectsPeerResponse:(BOOL)arg5 wantsAppAck:(BOOL)arg6 compressPayload:(BOOL)arg7 compressed:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 payload:(id)arg11 protobuf:(id)arg12 resourcePath:(id)arg13 resourceMetadata:(id)arg14 expiryDate:(id)arg15 ;
+(unsigned char)_niceToSocketCommand:(long long)arg1 ;
-(NSString *)toDeviceID;
-(NSNumber *)domainHash;
-(void)processAckForSocketPairMessage:(id)arg1 ;
-(id)socketPairMessage;
-(NSString *)awdTopic;
-(void)setAwdTopic:(NSString *)arg1 ;
-(void)setDomainHash:(NSNumber *)arg1 ;
-(void)setToDeviceID:(NSString *)arg1 ;
-(NSString *)toURI;
-(void)setToURI:(NSString *)arg1 ;
-(double)timeEnqueued;
-(void)setTimeEnqueued:(double)arg1 ;
-(BOOL)isDoneSending;
-(unsigned long long)sentMessageDataSize;
-(void)setSentMessageDataSize:(unsigned long long)arg1 ;
-(BOOL)didFallback;
-(void)setDidFallback:(BOOL)arg1 ;
-(BOOL)manualQueueRemoval;
-(void)setManualQueueRemoval:(BOOL)arg1 ;
-(BOOL)deniedToSend;
-(void)setDeniedToSend:(BOOL)arg1 ;
-(BOOL)shouldEnforceRemoteTimeout;
-(void)setShouldEnforceRemoteTimeout:(BOOL)arg1 ;
-(IDSSocketPairMessage *)underlyingSocketPairMessage;
-(void)setUnderlyingSocketPairMessage:(IDSSocketPairMessage *)arg1 ;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSData *)payload;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(double)timeSent;
-(NSString *)resourcePath;
-(BOOL)compressed;
-(NSString *)peerResponseIdentifier;
-(void)setResourceMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)resourceMetadata;
-(NSString *)queueOneIdentifier;
-(NSArray *)duetIdentifiersOverride;
-(BOOL)compressPayload;
-(BOOL)requireBluetooth;
-(BOOL)bypassDuet;
-(BOOL)nonWaking;
-(void)setTimeSent:(double)arg1 ;
-(void)setFromID:(NSString *)arg1 ;
-(void)setWantsAppAck:(BOOL)arg1 ;
-(void)setMessageUUID:(NSString *)arg1 ;
-(void)setCompressPayload:(BOOL)arg1 ;
-(void)setRequireBluetooth:(BOOL)arg1 ;
-(void)setExpectsPeerResponse:(BOOL)arg1 ;
-(void)setPeerResponseIdentifier:(NSString *)arg1 ;
-(void)setBypassDuet:(BOOL)arg1 ;
-(void)setNonWaking:(BOOL)arg1 ;
-(void)setQueueOneIdentifier:(NSString *)arg1 ;
-(void)setDuetIdentifiersOverride:(NSArray *)arg1 ;
-(BOOL)wantsAppAck;
-(NSString *)fromID;
-(void)setCommand:(NSNumber *)arg1 ;
-(NSNumber *)command;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(IDSProtobuf *)protobuf;
-(void)setCompressed:(BOOL)arg1 ;
-(void)setProtobuf:(IDSProtobuf *)arg1 ;
-(NSString *)messageUUID;
-(void)setFallbackBlock:(id)arg1 ;
-(id)fallbackBlock;
-(unsigned)messageID;
-(void)setMessageID:(unsigned)arg1 ;
-(BOOL)expectsPeerResponse;
-(long long)messageType;
-(void)setMessageType:(long long)arg1 ;
-(unsigned long long)minCompatibilityVersion;
-(void)setMinCompatibilityVersion:(unsigned long long)arg1 ;
-(unsigned)dataProtectionClass;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(void)setResourcePath:(NSString *)arg1 ;
@end

