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

@class PBUnknownFields, _INPBString;

@interface _INPBUncompressFileIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBString* _entityName;
	BOOL _success;
	SCD_Struct_IN1 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (nonatomic,retain) _INPBString * entityName;                       //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSuccess:(BOOL)arg1 ;
-(_INPBString *)entityName;
-(BOOL)success;
-(void)setEntityName:(_INPBString *)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)hasEntityName;
@end

