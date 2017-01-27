/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACVolumeWarningMessage : PBCodable <NSCopying> {

	NSString* _category;
	BOOL _volumeWarningEnabled;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasVolumeWarningEnabled; 
@property (assign,nonatomic) BOOL volumeWarningEnabled;                 //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                       //@synthesize category=_category - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCategory;
-(BOOL)volumeWarningEnabled;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(void)setHasVolumeWarningEnabled:(BOOL)arg1 ;
-(BOOL)hasVolumeWarningEnabled;
@end

