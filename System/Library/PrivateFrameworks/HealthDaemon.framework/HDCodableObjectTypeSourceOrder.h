/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {

	long long _objectType;
	NSData* _sourceUUIDs;
	BOOL _userOrdered;
	SCD_Struct_HD18 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) long long objectType;               //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasUserOrdered; 
@property (assign,nonatomic) BOOL userOrdered;                   //@synthesize userOrdered=_userOrdered - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceUUIDs; 
@property (nonatomic,retain) NSData * sourceUUIDs;               //@synthesize sourceUUIDs=_sourceUUIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasObjectType;
-(long long)objectType;
-(long long)decodedDataTypeCode;
-(BOOL)userOrdered;
-(void)setUserOrdered:(BOOL)arg1 ;
-(NSData *)sourceUUIDs;
-(void)setSourceUUIDs:(NSData *)arg1 ;
-(BOOL)hasUserOrdered;
-(BOOL)hasSourceUUIDs;
-(void)setHasUserOrdered:(BOOL)arg1 ;
@end

