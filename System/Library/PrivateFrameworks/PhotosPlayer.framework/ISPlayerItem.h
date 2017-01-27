/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISObservable.h>

@protocol OS_dispatch_queue;
@class AVVideoComposition, NSObject, NSHashTable, ISAsset, ISPlayerContent, NSError, AVPlayerItem, ISCrossfadeItem;

@interface ISPlayerItem : ISObservable {

	long long _loadingTarget;
	AVVideoComposition* _videoComposition;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSHashTable* _observers;
	float _videoCropFactor;
	SCD_Struct_IS12 _isLoaded;
	SCD_Struct_IS12 _isValid;
	BOOL __loadingCancelled;
	BOOL _reversesMoreVideoFramesInMemory;
	BOOL _aggressivelyCacheVideoFrames;
	BOOL _shouldLoadCrossfadeContent;
	BOOL _preparesForVitalityOnLoad;
	ISAsset* _asset;
	long long _status;
	ISPlayerContent* _playerContent;
	NSError* _error;
	AVPlayerItem* __videoPlayerItem;
	ISCrossfadeItem* __crossfadeItem;
	double __photoTime;
	long long __numberOfCrossfadeLoadingAttempts;
	long long __crossfadeItemRequestID;
	long long __videoPlayerItemRequestID;
	CGSize _targetSize;
	SCD_Struct_IS6 _trimmedTimeRange;

}

@property (assign,setter=_setStatus:,nonatomic) long long status;                                                                   //@synthesize status=_status - In the implementation block
@property (setter=_setError:,nonatomic,retain) NSError * error;                                                                     //@synthesize error=_error - In the implementation block
@property (setter=_setVideoPlayerItem:,nonatomic,retain) AVPlayerItem * _videoPlayerItem;                                           //@synthesize _videoPlayerItem=__videoPlayerItem - In the implementation block
@property (setter=_setCrossfadeItem:,nonatomic,retain) ISCrossfadeItem * _crossfadeItem;                                            //@synthesize _crossfadeItem=__crossfadeItem - In the implementation block
@property (setter=_setPlayerContent:,nonatomic,retain) ISPlayerContent * playerContent;                                             //@synthesize playerContent=_playerContent - In the implementation block
@property (nonatomic,readonly) double _photoTime;                                                                                   //@synthesize _photoTime=__photoTime - In the implementation block
@property (assign,setter=_setLoadingCancelled:,getter=_isLoadingCancelled,nonatomic) BOOL _loadingCancelled;                        //@synthesize _loadingCancelled=__loadingCancelled - In the implementation block
@property (assign,nonatomic) BOOL reversesMoreVideoFramesInMemory;                                                                  //@synthesize reversesMoreVideoFramesInMemory=_reversesMoreVideoFramesInMemory - In the implementation block
@property (assign,nonatomic) BOOL aggressivelyCacheVideoFrames;                                                                     //@synthesize aggressivelyCacheVideoFrames=_aggressivelyCacheVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadCrossfadeContent;                                                                       //@synthesize shouldLoadCrossfadeContent=_shouldLoadCrossfadeContent - In the implementation block
@property (assign,setter=_setNumberOfCrossfadeLoadingAttempts:,nonatomic) long long _numberOfCrossfadeLoadingAttempts;              //@synthesize _numberOfCrossfadeLoadingAttempts=__numberOfCrossfadeLoadingAttempts - In the implementation block
@property (assign,nonatomic) BOOL preparesForVitalityOnLoad;                                                                        //@synthesize preparesForVitalityOnLoad=_preparesForVitalityOnLoad - In the implementation block
@property (assign,setter=_setCrossfadeItemRequestID:,nonatomic) long long _crossfadeItemRequestID;                                  //@synthesize _crossfadeItemRequestID=__crossfadeItemRequestID - In the implementation block
@property (assign,setter=_setVideoPlayerItemRequestID:,nonatomic) long long _videoPlayerItemRequestID;                              //@synthesize _videoPlayerItemRequestID=__videoPlayerItemRequestID - In the implementation block
@property (readonly) ISAsset * asset;                                                                                               //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) CGSize targetSize;                                                                                   //@synthesize targetSize=_targetSize - In the implementation block
@property (assign) long long loadingTarget; 
@property (nonatomic,readonly) SCD_Struct_IS6 trimmedTimeRange;                                                                     //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (nonatomic,readonly) float videoCropFactor;                                                                               //@synthesize videoCropFactor=_videoCropFactor - In the implementation block
@property (copy) AVVideoComposition * videoComposition; 
+(id)playerItemWithAsset:(id)arg1 targetSize:(CGSize)arg2 ;
+(id)playerItemWithAsset:(id)arg1 targetSize:(CGSize)arg2 trimmedTimeRange:(SCD_Struct_IS6)arg3 ;
-(id)init;
-(void)dealloc;
-(CGSize)targetSize;
-(ISAsset *)asset;
-(long long)status;
-(BOOL)reversesMoreVideoFramesInMemory;
-(void)setReversesMoreVideoFramesInMemory:(BOOL)arg1 ;
-(void)_setVideoComposition:(id)arg1 ;
-(void)_updateIfNeeded;
-(BOOL)_needsUpdate;
-(void)_setStatus:(long long)arg1 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(NSError *)error;
-(AVVideoComposition *)videoComposition;
-(id)mutableChangeObject;
-(void)_invalidateStatus;
-(void)_updateStatusIfNeeded;
-(void)didPerformChanges;
-(void)_setError:(id)arg1 ;
-(void)_invalidatePlayerContent;
-(void)_updatePlayerContentIfNeeded;
-(long long)loadingTarget;
-(void)setLoadingTarget:(long long)arg1 ;
-(id)initWithAsset:(id)arg1 targetSize:(CGSize)arg2 ;
-(void)discardContentBelowLoadingTarget;
-(float)videoCropFactor;
-(double)_photoTime;
-(AVPlayerItem *)_videoPlayerItem;
-(ISCrossfadeItem *)_crossfadeItem;
-(ISPlayerContent *)playerContent;
-(void)resetAVObjects;
-(SCD_Struct_IS6)trimmedTimeRange;
-(id)initWithAsset:(id)arg1 targetSize:(CGSize)arg2 trimmedTimeRange:(SCD_Struct_IS6)arg3 ;
-(void)_setLoadingTarget:(long long)arg1 ;
-(void)_cancelLoading;
-(void)_loadNextResourceIfNeeded;
-(void)_setVideoPlayerItem:(id)arg1 ;
-(void)_setCrossfadeItem:(id)arg1 ;
-(void)_reloadAllContent;
-(long long)_crossfadeItemRequestID;
-(long long)_videoPlayerItemRequestID;
-(void)_resetAVObjects;
-(BOOL)shouldLoadCrossfadeContent;
-(BOOL)_needsToLoadContent;
-(void)_loadVideoPlayerItemIfNeeded;
-(void)_loadCrossfadeItemIfNeeded;
-(void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)arg1 playerItem:(id)arg2 videoCropFactor:(float)arg3 error:(id)arg4 ;
-(void)_setVideoPlayerItemRequestID:(long long)arg1 ;
-(void)_setVideoPlayerItem:(id)arg1 cropFactor:(float)arg2 ;
-(long long)_numberOfCrossfadeLoadingAttempts;
-(void)_setNumberOfCrossfadeLoadingAttempts:(long long)arg1 ;
-(void)_handleCrossfadeLoadingResultWithSuccess:(BOOL)arg1 crossfadeItem:(id)arg2 error:(id)arg3 ;
-(void)_setCrossfadeItemRequestID:(long long)arg1 ;
-(BOOL)aggressivelyCacheVideoFrames;
-(BOOL)preparesForVitalityOnLoad;
-(void)_setPlayerContent:(id)arg1 ;
-(void)setAggressivelyCacheVideoFrames:(BOOL)arg1 ;
-(BOOL)_isLoadingCancelled;
-(void)_setLoadingCancelled:(BOOL)arg1 ;
-(void)setShouldLoadCrossfadeContent:(BOOL)arg1 ;
-(void)setPreparesForVitalityOnLoad:(BOOL)arg1 ;
-(void)cancelLoading;
@end

