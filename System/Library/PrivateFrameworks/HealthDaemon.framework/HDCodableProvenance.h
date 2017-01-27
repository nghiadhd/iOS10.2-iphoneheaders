/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableProvenance : PBCodable <NSCopying> {

	NSData* _deviceUUID;
	NSString* _originBuild;
	NSString* _originDevice;
	NSString* _originProductType;
	NSData* _sourceUUID;
	NSString* _sourceVersion;
	NSString* _timeZoneName;

}

@property (nonatomic,readonly) BOOL hasOriginBuild; 
@property (nonatomic,retain) NSString * originBuild;                    //@synthesize originBuild=_originBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginDevice; 
@property (nonatomic,retain) NSString * originDevice;                   //@synthesize originDevice=_originDevice - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                       //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceUUID; 
@property (nonatomic,retain) NSData * deviceUUID;                       //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceVersion; 
@property (nonatomic,retain) NSString * sourceVersion;                  //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginProductType; 
@property (nonatomic,retain) NSString * originProductType;              //@synthesize originProductType=_originProductType - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeZoneName; 
@property (nonatomic,retain) NSString * timeZoneName;                   //@synthesize timeZoneName=_timeZoneName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSourceVersion;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(NSData *)sourceUUID;
-(void)setSourceUUID:(NSData *)arg1 ;
-(void)setOriginBuild:(NSString *)arg1 ;
-(void)setOriginProductType:(NSString *)arg1 ;
-(void)setOriginDevice:(NSString *)arg1 ;
-(NSString *)timeZoneName;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(void)setDeviceUUID:(NSData *)arg1 ;
-(BOOL)hasOriginBuild;
-(BOOL)hasOriginDevice;
-(BOOL)hasSourceUUID;
-(BOOL)hasDeviceUUID;
-(BOOL)hasOriginProductType;
-(BOOL)hasTimeZoneName;
-(NSString *)originBuild;
-(NSString *)originDevice;
-(NSData *)deviceUUID;
-(NSString *)originProductType;
-(id)decodedSourceUUID;
-(id)decodedDeviceUUID;
@end

