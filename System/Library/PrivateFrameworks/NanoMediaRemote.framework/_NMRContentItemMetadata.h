/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NMRContentItemMetadata : PBCodable <NSCopying> {

	double _duration;
	NSString* _album;
	NSString* _artist;
	NSString* _title;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) NSString * artist;              //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) NSString * album;               //@synthesize album=_album - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                //@synthesize duration=_duration - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasArtist;
-(BOOL)hasAlbum;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
@end

