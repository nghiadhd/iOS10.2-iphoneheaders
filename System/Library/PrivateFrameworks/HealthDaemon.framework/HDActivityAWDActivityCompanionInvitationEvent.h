/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivityCompanionInvitationEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _action;
	int _failureReason;
	int _stage;
	BOOL _retryExpected;
	BOOL _success;
	SCD_Struct_HD49 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                              //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason;                         //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) BOOL hasStage; 
@property (assign,nonatomic) int stage;                                 //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL hasRetryExpected; 
@property (assign,nonatomic) BOOL retryExpected;                        //@synthesize retryExpected=_retryExpected - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(int)arg1 ;
-(int)stage;
-(id)dictionaryRepresentation;
-(BOOL)hasAction;
-(void)setHasAction:(BOOL)arg1 ;
-(void)setStage:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)success;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(int)failureReason;
-(void)setFailureReason:(int)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(id)failureReasonAsString:(int)arg1 ;
-(int)StringAsFailureReason:(id)arg1 ;
-(void)setHasStage:(BOOL)arg1 ;
-(BOOL)hasStage;
-(id)stageAsString:(int)arg1 ;
-(int)StringAsStage:(id)arg1 ;
-(void)setRetryExpected:(BOOL)arg1 ;
-(void)setHasRetryExpected:(BOOL)arg1 ;
-(BOOL)hasRetryExpected;
-(BOOL)retryExpected;
@end

