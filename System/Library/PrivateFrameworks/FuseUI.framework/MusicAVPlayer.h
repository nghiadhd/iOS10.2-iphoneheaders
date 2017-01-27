/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUAVPlayer.h>
#import <libobjc.A.dylib/MPNowPlayingPlaybackQueueDataSource.h>

@protocol OS_dispatch_queue;
@class MPPlaybackContext, MPCRadioStationPlaybackMetadata, NSObject, RadioStation, NSString;

@interface MusicAVPlayer : MPUAVPlayer <MPNowPlayingPlaybackQueueDataSource> {

	MPPlaybackContext* _lastPlaybackContext;
	BOOL _isSubscribed;
	BOOL _checkedDefaultsForLastPlayedStation;
	MPCRadioStationPlaybackMetadata* _lastPlayedStationMetadata;
	NSObject*<OS_dispatch_queue> _lastPlayedStationSaveQueue;
	NSObject*<OS_dispatch_queue> _radioUIAccessQueue;
	BOOL _banningCurrentItemShouldSkipToNextItem;

}

@property (nonatomic,readonly) RadioStation * currentStation; 
@property (nonatomic,retain) MPCRadioStationPlaybackMetadata * lastPlayedStationMetadata; 
@property (assign,nonatomic) BOOL banningCurrentItemShouldSkipToNextItem;                              //@synthesize banningCurrentItemShouldSkipToNextItem=_banningCurrentItemShouldSkipToNextItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)playlistManagerClass;
+(id)sharedAVPlayer;
-(id)init;
-(void)dealloc;
-(void)reloadWithPlaybackContext:(id)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_connectAVPlayer;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(BOOL)hasVolumeControl;
-(void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1 ;
-(id)contentItemForOffset:(long long)arg1 ;
-(id)contentItemIdentifierForOffset:(long long)arg1 ;
-(void)_itemLikedStateDidChangeNotification:(id)arg1 ;
-(void)_feederContentsDidChangeNotification:(id)arg1 ;
-(void)_musicPlayer_defaultsDidChangeNotification:(id)arg1 ;
-(void)_registerPlaybackQueueDataSource;
-(void)_unregisterPlaybackQueueDataSource;
-(void)_initiateMusicPlayback;
-(BOOL)_shouldVendContentItemForOffset:(long long)arg1 ;
-(void)_handlePlaybackQueueChangedNotification;
-(void)_subscriptionStatusDidChangeNotification;
-(id)_fallbackMusicPlaybackContext;
-(MPCRadioStationPlaybackMetadata *)lastPlayedStationMetadata;
-(BOOL)beginPlaybackWithCoordinator:(id)arg1 ;
-(void)_updateLastPlayedStationMetadata;
-(void)setLastPlayedStationMetadata:(MPCRadioStationPlaybackMetadata *)arg1 ;
-(void)beginPlayback;
-(void)beginOrTogglePlayback;
-(void)seekAlbum:(int)arg1 ;
-(void)seekPlaylist:(int)arg1 ;
-(RadioStation *)currentStation;
-(BOOL)beginOrTogglePlaybackWithCoordinator:(id)arg1 ;
-(BOOL)banningCurrentItemShouldSkipToNextItem;
-(void)setBanningCurrentItemShouldSkipToNextItem:(BOOL)arg1 ;
@end

