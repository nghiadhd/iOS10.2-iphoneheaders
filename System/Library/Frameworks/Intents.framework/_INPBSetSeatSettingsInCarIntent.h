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

@class PBUnknownFields, _INPBIntentMetadata, _INPBInteger;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBIntentMetadata* _intentMetadata;
	_INPBInteger* _level;
	int _relativeLevelSetting;
	int _seat;
	BOOL _enableCooling;
	BOOL _enableHeating;
	BOOL _enableMassage;
	SCD_Struct_IN8 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEnableHeating; 
@property (assign,nonatomic) BOOL enableHeating;                                //@synthesize enableHeating=_enableHeating - In the implementation block
@property (assign,nonatomic) BOOL hasEnableCooling; 
@property (assign,nonatomic) BOOL enableCooling;                                //@synthesize enableCooling=_enableCooling - In the implementation block
@property (assign,nonatomic) BOOL hasEnableMassage; 
@property (assign,nonatomic) BOOL enableMassage;                                //@synthesize enableMassage=_enableMassage - In the implementation block
@property (assign,nonatomic) BOOL hasSeat; 
@property (assign,nonatomic) int seat;                                          //@synthesize seat=_seat - In the implementation block
@property (nonatomic,readonly) BOOL hasLevel; 
@property (nonatomic,retain) _INPBInteger * level;                              //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) BOOL hasRelativeLevelSetting; 
@property (assign,nonatomic) int relativeLevelSetting;                          //@synthesize relativeLevelSetting=_relativeLevelSetting - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(_INPBInteger *)arg1 ;
-(_INPBInteger *)level;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLevel;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setEnableHeating:(BOOL)arg1 ;
-(void)setEnableCooling:(BOOL)arg1 ;
-(void)setEnableMassage:(BOOL)arg1 ;
-(void)setSeat:(int)arg1 ;
-(void)setRelativeLevelSetting:(int)arg1 ;
-(BOOL)hasEnableHeating;
-(BOOL)enableHeating;
-(void)setHasEnableHeating:(BOOL)arg1 ;
-(BOOL)hasEnableCooling;
-(BOOL)enableCooling;
-(void)setHasEnableCooling:(BOOL)arg1 ;
-(BOOL)hasEnableMassage;
-(BOOL)enableMassage;
-(void)setHasEnableMassage:(BOOL)arg1 ;
-(BOOL)hasSeat;
-(int)seat;
-(void)setHasSeat:(BOOL)arg1 ;
-(BOOL)hasRelativeLevelSetting;
-(int)relativeLevelSetting;
-(void)setHasRelativeLevelSetting:(BOOL)arg1 ;
@end

