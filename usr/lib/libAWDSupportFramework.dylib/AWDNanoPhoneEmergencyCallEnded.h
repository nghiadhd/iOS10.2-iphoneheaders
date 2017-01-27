/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNanoPhoneEmergencyCallEnded : PBCodable <NSCopying> {

	unsigned long long _callDuration;
	unsigned long long _timestamp;
	BOOL _callConnected;
	BOOL _callFailed;
	BOOL _remoteEnded;
	BOOL _userEnded;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCallDuration; 
@property (assign,nonatomic) unsigned long long callDuration;              //@synthesize callDuration=_callDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCallConnected; 
@property (assign,nonatomic) BOOL callConnected;                           //@synthesize callConnected=_callConnected - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteEnded; 
@property (assign,nonatomic) BOOL remoteEnded;                             //@synthesize remoteEnded=_remoteEnded - In the implementation block
@property (assign,nonatomic) BOOL hasCallFailed; 
@property (assign,nonatomic) BOOL callFailed;                              //@synthesize callFailed=_callFailed - In the implementation block
@property (assign,nonatomic) BOOL hasUserEnded; 
@property (assign,nonatomic) BOOL userEnded;                               //@synthesize userEnded=_userEnded - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setCallDuration:(unsigned long long)arg1 ;
-(void)setHasCallDuration:(BOOL)arg1 ;
-(BOOL)hasCallDuration;
-(unsigned long long)callDuration;
-(void)setCallConnected:(BOOL)arg1 ;
-(void)setHasCallConnected:(BOOL)arg1 ;
-(BOOL)hasCallConnected;
-(void)setRemoteEnded:(BOOL)arg1 ;
-(void)setHasRemoteEnded:(BOOL)arg1 ;
-(BOOL)hasRemoteEnded;
-(void)setCallFailed:(BOOL)arg1 ;
-(void)setHasCallFailed:(BOOL)arg1 ;
-(BOOL)hasCallFailed;
-(void)setUserEnded:(BOOL)arg1 ;
-(void)setHasUserEnded:(BOOL)arg1 ;
-(BOOL)hasUserEnded;
-(BOOL)callConnected;
-(BOOL)remoteEnded;
-(BOOL)callFailed;
-(BOOL)userEnded;
@end

