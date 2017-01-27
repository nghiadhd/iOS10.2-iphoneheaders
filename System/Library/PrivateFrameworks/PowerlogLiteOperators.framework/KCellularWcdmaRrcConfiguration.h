/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface KCellularWcdmaRrcConfiguration : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _drxCycleLengthMs;
	BOOL _isDcConfigured;
	BOOL _isMimoConfigured;
	SCD_Struct_KC10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDrxCycleLengthMs; 
@property (assign,nonatomic) unsigned drxCycleLengthMs;                 //@synthesize drxCycleLengthMs=_drxCycleLengthMs - In the implementation block
@property (assign,nonatomic) BOOL hasIsMimoConfigured; 
@property (assign,nonatomic) BOOL isMimoConfigured;                     //@synthesize isMimoConfigured=_isMimoConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasIsDcConfigured; 
@property (assign,nonatomic) BOOL isDcConfigured;                       //@synthesize isDcConfigured=_isDcConfigured - In the implementation block
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
-(void)setDrxCycleLengthMs:(unsigned)arg1 ;
-(void)setHasDrxCycleLengthMs:(BOOL)arg1 ;
-(BOOL)hasDrxCycleLengthMs;
-(void)setIsMimoConfigured:(BOOL)arg1 ;
-(void)setHasIsMimoConfigured:(BOOL)arg1 ;
-(BOOL)hasIsMimoConfigured;
-(void)setIsDcConfigured:(BOOL)arg1 ;
-(void)setHasIsDcConfigured:(BOOL)arg1 ;
-(BOOL)hasIsDcConfigured;
-(unsigned)drxCycleLengthMs;
-(BOOL)isMimoConfigured;
-(BOOL)isDcConfigured;
@end

