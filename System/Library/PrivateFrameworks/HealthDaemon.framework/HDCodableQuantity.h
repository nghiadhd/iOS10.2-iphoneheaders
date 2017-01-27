/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableQuantity : PBCodable <NSCopying> {

	double _value;
	NSString* _unitString;
	SCD_Struct_HD32 _has;

}

@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasUnitString; 
@property (nonatomic,retain) NSString * unitString;              //@synthesize unitString=_unitString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
-(NSString *)unitString;
-(BOOL)hasUnitString;
-(void)setUnitString:(NSString *)arg1 ;
@end

