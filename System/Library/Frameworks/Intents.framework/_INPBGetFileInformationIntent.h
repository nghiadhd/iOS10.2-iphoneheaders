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

@class PBUnknownFields, _INPBString, _INPBIntentMetadata;

@interface _INPBGetFileInformationIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBString* _entityName;
	int _entityType;
	_INPBIntentMetadata* _intentMetadata;
	int _propertyName;
	int _qualifier;
	SCD_Struct_IN4 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) int entityType;                                    //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (nonatomic,retain) _INPBString * entityName;                          //@synthesize entityName=_entityName - In the implementation block
@property (assign,nonatomic) BOOL hasPropertyName; 
@property (assign,nonatomic) int propertyName;                                  //@synthesize propertyName=_propertyName - In the implementation block
@property (assign,nonatomic) BOOL hasQualifier; 
@property (assign,nonatomic) int qualifier;                                     //@synthesize qualifier=_qualifier - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(void)setPropertyName:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)propertyName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setQualifier:(int)arg1 ;
-(int)qualifier;
-(void)setEntityType:(int)arg1 ;
-(int)entityType;
-(_INPBString *)entityName;
-(void)setEntityName:(_INPBString *)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setHasEntityType:(BOOL)arg1 ;
-(BOOL)hasEntityType;
-(BOOL)hasEntityName;
-(void)setHasQualifier:(BOOL)arg1 ;
-(BOOL)hasQualifier;
-(void)setHasPropertyName:(BOOL)arg1 ;
-(BOOL)hasPropertyName;
@end

