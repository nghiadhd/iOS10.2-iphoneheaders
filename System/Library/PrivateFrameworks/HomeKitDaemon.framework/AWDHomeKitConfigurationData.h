/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitConfigurationData : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _databaseSize;
	NSMutableArray* _homeConfigurations;
	unsigned _metadataVersion;
	BOOL _isResidentCapable;
	BOOL _isResidentEnabled;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseSize; 
@property (assign,nonatomic) unsigned databaseSize;                            //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign,nonatomic) BOOL hasMetadataVersion; 
@property (assign,nonatomic) unsigned metadataVersion;                         //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentCapable; 
@property (assign,nonatomic) BOOL isResidentCapable;                           //@synthesize isResidentCapable=_isResidentCapable - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentEnabled; 
@property (assign,nonatomic) BOOL isResidentEnabled;                           //@synthesize isResidentEnabled=_isResidentEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeConfigurations;              //@synthesize homeConfigurations=_homeConfigurations - In the implementation block
+(Class)homeConfigurationsType;
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
-(unsigned)databaseSize;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isResidentCapable;
-(void)addHomeConfigurations:(id)arg1 ;
-(unsigned long long)homeConfigurationsCount;
-(void)clearHomeConfigurations;
-(id)homeConfigurationsAtIndex:(unsigned long long)arg1 ;
-(void)setDatabaseSize:(unsigned)arg1 ;
-(void)setHasDatabaseSize:(BOOL)arg1 ;
-(BOOL)hasDatabaseSize;
-(void)setMetadataVersion:(unsigned)arg1 ;
-(void)setHasMetadataVersion:(BOOL)arg1 ;
-(BOOL)hasMetadataVersion;
-(void)setIsResidentCapable:(BOOL)arg1 ;
-(void)setHasIsResidentCapable:(BOOL)arg1 ;
-(BOOL)hasIsResidentCapable;
-(void)setIsResidentEnabled:(BOOL)arg1 ;
-(void)setHasIsResidentEnabled:(BOOL)arg1 ;
-(BOOL)hasIsResidentEnabled;
-(unsigned)metadataVersion;
-(BOOL)isResidentEnabled;
-(NSMutableArray *)homeConfigurations;
-(void)setHomeConfigurations:(NSMutableArray *)arg1 ;
@end

