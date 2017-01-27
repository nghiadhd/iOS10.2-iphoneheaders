/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, ATPRequest, ATPResponse, ATPError;

@interface ATPMessage : PBCodable <NSCopying> {

	unsigned _messageID;
	int _messageType;
	NSData* _parameters;
	NSData* _paramsSignature;
	NSData* _payload;
	NSData* _payloadSignature;
	ATPRequest* _request;
	ATPResponse* _response;
	unsigned _sessionID;
	ATPError* _streamError;
	BOOL _additionalPayload;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType;                         //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasMessageID; 
@property (assign,nonatomic) unsigned messageID;                      //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NSData * parameters;                     //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasParamsSignature; 
@property (nonatomic,retain) NSData * paramsSignature;                //@synthesize paramsSignature=_paramsSignature - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadSignature; 
@property (nonatomic,retain) NSData * payloadSignature;               //@synthesize payloadSignature=_payloadSignature - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) ATPRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) ATPResponse * response;                  //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                        //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalPayload; 
@property (assign,nonatomic) BOOL additionalPayload;                  //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (nonatomic,readonly) BOOL hasStreamError; 
@property (nonatomic,retain) ATPError * streamError;                  //@synthesize streamError=_streamError - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)payload;
-(ATPResponse *)response;
-(ATPRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)parameters;
-(void)setParameters:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(unsigned)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(unsigned)sessionID;
-(BOOL)hasRequest;
-(BOOL)hasResponse;
-(void)setRequest:(ATPRequest *)arg1 ;
-(void)setResponse:(ATPResponse *)arg1 ;
-(void)setParamsSignature:(NSData *)arg1 ;
-(void)setPayloadSignature:(NSData *)arg1 ;
-(void)setStreamError:(ATPError *)arg1 ;
-(void)setHasMessageID:(BOOL)arg1 ;
-(BOOL)hasMessageID;
-(BOOL)hasParameters;
-(BOOL)hasParamsSignature;
-(BOOL)hasPayloadSignature;
-(void)setAdditionalPayload:(BOOL)arg1 ;
-(void)setHasAdditionalPayload:(BOOL)arg1 ;
-(BOOL)hasAdditionalPayload;
-(BOOL)hasStreamError;
-(NSData *)paramsSignature;
-(NSData *)payloadSignature;
-(BOOL)additionalPayload;
-(id)formattedDescription;
-(unsigned)messageID;
-(BOOL)hasPayload;
-(void)setMessageID:(unsigned)arg1 ;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(ATPError *)streamError;
@end

