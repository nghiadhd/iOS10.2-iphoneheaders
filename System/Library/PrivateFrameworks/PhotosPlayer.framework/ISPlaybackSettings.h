/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVVideoComposition;

@interface ISPlaybackSettings : NSObject {

	float _audioVolume;
	AVVideoComposition* _videoComposition;

}

@property (nonatomic,retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) float audioVolume;                                  //@synthesize audioVolume=_audioVolume - In the implementation block
-(id)init;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(AVVideoComposition *)videoComposition;
@end

