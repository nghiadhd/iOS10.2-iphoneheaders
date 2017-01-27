/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBValueMetadata;

@interface _INPBIntegerValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _value;
	_INPBValueMetadata* _valueMetadata;
	SCD_Struct_IN1 _has;

}

@property (nonatomic,readonly) BOOL hasValueMetadata; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) int value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)value;
-(void)setValue:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
@end

