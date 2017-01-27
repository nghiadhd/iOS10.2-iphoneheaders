/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/useractivityd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHandoffRemotePasteboardWasRequested : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _payloadSize;
	unsigned long long _payloadXferSpeed;
	unsigned long long _payloadXferTime;
	unsigned long long _streamDataSize;
	unsigned long long _streamDataXferSpeed;
	unsigned long long _streamDataXferTime;
	unsigned long long _streamOpenTime;
	unsigned long long _timestamp;
	unsigned long long _totalTime;
	BOOL _cancelled;
	BOOL _usedStreams;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadXferTime; 
@property (assign,nonatomic) unsigned long long payloadXferTime;                  //@synthesize payloadXferTime=_payloadXferTime - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadXferSpeed; 
@property (assign,nonatomic) unsigned long long payloadXferSpeed;                 //@synthesize payloadXferSpeed=_payloadXferSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasUsedStreams; 
@property (assign,nonatomic) BOOL usedStreams;                                    //@synthesize usedStreams=_usedStreams - In the implementation block
@property (assign,nonatomic) BOOL hasStreamOpenTime; 
@property (assign,nonatomic) unsigned long long streamOpenTime;                   //@synthesize streamOpenTime=_streamOpenTime - In the implementation block
@property (assign,nonatomic) BOOL hasStreamDataSize; 
@property (assign,nonatomic) unsigned long long streamDataSize;                   //@synthesize streamDataSize=_streamDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasStreamDataXferTime; 
@property (assign,nonatomic) unsigned long long streamDataXferTime;               //@synthesize streamDataXferTime=_streamDataXferTime - In the implementation block
@property (assign,nonatomic) BOOL hasStreamDataXferSpeed; 
@property (assign,nonatomic) unsigned long long streamDataXferSpeed;              //@synthesize streamDataXferSpeed=_streamDataXferSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTime; 
@property (assign,nonatomic) unsigned long long totalTime;                        //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                                      //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                                 //@synthesize errorCode=_errorCode - In the implementation block
-(void)setUsedStreams:(BOOL)arg1 ;
-(void)setHasUsedStreams:(BOOL)arg1 ;
-(BOOL)hasUsedStreams;
-(void)setStreamDataSize:(unsigned long long)arg1 ;
-(void)setHasStreamDataSize:(BOOL)arg1 ;
-(BOOL)hasStreamDataSize;
-(void)setStreamDataXferTime:(unsigned long long)arg1 ;
-(void)setHasStreamDataXferTime:(BOOL)arg1 ;
-(BOOL)hasStreamDataXferTime;
-(void)setStreamDataXferSpeed:(unsigned long long)arg1 ;
-(void)setHasStreamDataXferSpeed:(BOOL)arg1 ;
-(BOOL)hasStreamDataXferSpeed;
-(void)setHasTotalTime:(BOOL)arg1 ;
-(BOOL)hasTotalTime;
-(BOOL)usedStreams;
-(unsigned long long)streamDataSize;
-(unsigned long long)streamDataXferTime;
-(unsigned long long)streamDataXferSpeed;
-(void)setPayloadXferTime:(unsigned long long)arg1 ;
-(void)setHasPayloadXferTime:(BOOL)arg1 ;
-(BOOL)hasPayloadXferTime;
-(unsigned long long)payloadXferTime;
-(void)setPayloadXferSpeed:(unsigned long long)arg1 ;
-(void)setStreamOpenTime:(unsigned long long)arg1 ;
-(void)setHasPayloadXferSpeed:(BOOL)arg1 ;
-(BOOL)hasPayloadXferSpeed;
-(void)setHasStreamOpenTime:(BOOL)arg1 ;
-(BOOL)hasStreamOpenTime;
-(unsigned long long)payloadXferSpeed;
-(unsigned long long)streamOpenTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(long long)errorCode;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(unsigned long long)payloadSize;
-(void)setTotalTime:(unsigned long long)arg1 ;
-(unsigned long long)totalTime;
@end

