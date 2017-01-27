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

@class PBUnknownFields, _INPBString, NSMutableArray, _INPBIntentMetadata;

@interface _INPBMoveFileIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_IN2* _entityTypes;
	_INPBString* _destinationName;
	int _destinationType;
	NSMutableArray* _entityNames;
	_INPBIntentMetadata* _intentMetadata;
	NSMutableArray* _properties;
	_INPBString* _sourceName;
	int _sourceType;
	SCD_Struct_IN3 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;               //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) unsigned long long entityTypesCount; 
@property (nonatomic,readonly) int* entityTypes; 
@property (nonatomic,retain) NSMutableArray * entityNames;                       //@synthesize entityNames=_entityNames - In the implementation block
@property (assign,nonatomic) BOOL hasSourceType; 
@property (assign,nonatomic) int sourceType;                                     //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceName; 
@property (nonatomic,retain) _INPBString * sourceName;                           //@synthesize sourceName=_sourceName - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) int destinationType;                                //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) _INPBString * destinationName;                      //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;                        //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)entityNameType;
+(Class)propertiesType;
-(NSMutableArray *)entityNames;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(NSMutableArray *)properties;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(_INPBString *)destinationName;
-(void)setDestinationName:(_INPBString *)arg1 ;
-(_INPBString *)sourceName;
-(void)setSourceName:(_INPBString *)arg1 ;
-(BOOL)hasDestinationName;
-(int)destinationType;
-(void)setDestinationType:(int)arg1 ;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(BOOL)hasDestinationType;
-(unsigned long long)propertiesCount;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(void)setHasSourceType:(BOOL)arg1 ;
-(BOOL)hasSourceType;
-(void)clearProperties;
-(void)addProperties:(id)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)addEntityName:(id)arg1 ;
-(void)clearEntityNames;
-(unsigned long long)entityNamesCount;
-(id)entityNameAtIndex:(unsigned long long)arg1 ;
-(void)setEntityNames:(NSMutableArray *)arg1 ;
-(unsigned long long)entityTypesCount;
-(int)entityTypeAtIndex:(unsigned long long)arg1 ;
-(void)addEntityType:(int)arg1 ;
-(int*)entityTypes;
-(void)clearEntityTypes;
-(void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasSourceName;
@end
