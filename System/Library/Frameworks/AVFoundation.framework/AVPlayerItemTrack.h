/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {

	AVPlayerItemTrackInternal* _playerItemTrack;

}

@property (nonatomic,readonly) AVAssetTrack * assetTrack; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) float currentVideoFrameRate; 
+(id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)loudnessInfo;
-(void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1 ;
-(void)_respondToFigPlaybackItemBecomingReadyForInpection;
-(id)videoEnhancementFilterOptions;
-(BOOL)disableColorMatching;
-(id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(id)_weakReferenceToPlayerItem;
-(void)_transferEnabledToFig;
-(void)_transferLoudnessInfoToFig;
-(void)_transferVideoEnhancementOptionsToFig;
-(void)_transferDisableColorMatchingToFig;
-(void)_transferCachedValuesToFig;
-(id)fallbackTrack;
-(float)currentVideoFrameRate;
-(void)setVideoEnhancementFilterOptions:(id)arg1 ;
-(void)setDisableColorMatching:(BOOL)arg1 ;
-(AVAssetTrack *)assetTrack;
-(void)setLoudnessInfo:(id)arg1 ;
-(int)trackID;
-(id)_playerItem;
-(void)finalize;
@end

