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

@class PBUnknownFields, _INPBString, _INPBDouble, _INPBIntentMetadata, _INPBInteger;

@interface _INPBSetRadioStationIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBString* _channel;
	_INPBDouble* _frequency;
	_INPBIntentMetadata* _intentMetadata;
	_INPBInteger* _presetNumber;
	int _radioType;
	_INPBString* _stationName;
	SCD_Struct_IN1 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasRadioType; 
@property (assign,nonatomic) int radioType;                                     //@synthesize radioType=_radioType - In the implementation block
@property (nonatomic,readonly) BOOL hasFrequency; 
@property (nonatomic,retain) _INPBDouble * frequency;                           //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) BOOL hasStationName; 
@property (nonatomic,retain) _INPBString * stationName;                         //@synthesize stationName=_stationName - In the implementation block
@property (nonatomic,readonly) BOOL hasChannel; 
@property (nonatomic,retain) _INPBString * channel;                             //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) BOOL hasPresetNumber; 
@property (nonatomic,retain) _INPBInteger * presetNumber;                       //@synthesize presetNumber=_presetNumber - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_INPBDouble *)frequency;
-(void)setFrequency:(_INPBDouble *)arg1 ;
-(void)setChannel:(_INPBString *)arg1 ;
-(_INPBString *)channel;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasChannel;
-(void)setStationName:(_INPBString *)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setRadioType:(int)arg1 ;
-(void)setPresetNumber:(_INPBInteger *)arg1 ;
-(BOOL)hasRadioType;
-(int)radioType;
-(void)setHasRadioType:(BOOL)arg1 ;
-(_INPBString *)stationName;
-(_INPBInteger *)presetNumber;
-(BOOL)hasFrequency;
-(BOOL)hasStationName;
-(BOOL)hasPresetNumber;
@end

