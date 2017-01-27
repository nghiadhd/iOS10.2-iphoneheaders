/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCPlayerEntity.h>

@class NSString, MPModelSong, MPModelPlaylistEntry, NSArray;

@interface MPCPlayerItem : MPCPlayerEntity {

	NSString* _albumName;
	NSString* _artistName;
	MPModelSong* _modelSongRepresentation;
	MPModelPlaylistEntry* _modelPlaylistEntryRepresentation;
	SCD_Struct_MP2 _durationSnapshot;

}

@property (nonatomic,copy) NSArray * representations; 
@property (nonatomic,readonly) MPModelSong * modelSongRepresentation;                                //@synthesize modelSongRepresentation=_modelSongRepresentation - In the implementation block
@property (nonatomic,readonly) MPModelPlaylistEntry * modelPlaylistEntryRepresentation;              //@synthesize modelPlaylistEntryRepresentation=_modelPlaylistEntryRepresentation - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                                     //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP2 durationSnapshot;                                      //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
-(void)setRepresentations:(NSArray *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSArray *)representations;
-(MPModelSong *)modelSongRepresentation;
-(id)initWithAVItem:(id)arg1 ;
-(SCD_Struct_MP2)durationSnapshot;
-(MPModelPlaylistEntry *)modelPlaylistEntryRepresentation;
-(long long)comparePlaybackOrder:(id)arg1 ;
@end

