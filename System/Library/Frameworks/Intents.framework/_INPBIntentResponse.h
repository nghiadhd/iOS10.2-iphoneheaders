/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess;

@interface _INPBIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBIntentResponsePayloadFailure* _PayloadFailure;
	_INPBIntentResponsePayloadSuccess* _PayloadSuccess;
	int _type;
	SCD_Struct_IN1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadSuccess; 
@property (nonatomic,retain) _INPBIntentResponsePayloadSuccess * PayloadSuccess;              //@synthesize PayloadSuccess=_PayloadSuccess - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadFailure; 
@property (nonatomic,retain) _INPBIntentResponsePayloadFailure * PayloadFailure;              //@synthesize PayloadFailure=_PayloadFailure - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setPayloadSuccess:(_INPBIntentResponsePayloadSuccess *)arg1 ;
-(void)setPayloadFailure:(_INPBIntentResponsePayloadFailure *)arg1 ;
-(BOOL)hasPayloadSuccess;
-(BOOL)hasPayloadFailure;
-(_INPBIntentResponsePayloadSuccess *)PayloadSuccess;
-(_INPBIntentResponsePayloadFailure *)PayloadFailure;
@end

