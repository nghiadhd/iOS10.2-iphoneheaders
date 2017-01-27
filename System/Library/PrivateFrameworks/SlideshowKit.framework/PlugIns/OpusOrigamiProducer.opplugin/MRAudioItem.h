/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayerItem;

@interface MRAudioItem : NSObject {

	float _volume;
	float _duckLevel;
	AVPlayerItem* _avPlayerItem;
	double _startTime;
	double _duration;
	double _localTimeOffset;
	double _fadeInDuration;
	double _fadeOutDuration;
	double _duckInDuration;
	double _duckOutDuration;

}

@property (readonly) AVPlayerItem * avPlayerItem;              //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (readonly) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                          //@synthesize duration=_duration - In the implementation block
@property (assign) double localTimeOffset;                     //@synthesize localTimeOffset=_localTimeOffset - In the implementation block
@property (assign) float volume;                               //@synthesize volume=_volume - In the implementation block
@property (assign) double fadeInDuration;                      //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign) double fadeOutDuration;                     //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign) float duckLevel;                            //@synthesize duckLevel=_duckLevel - In the implementation block
@property (assign) double duckInDuration;                      //@synthesize duckInDuration=_duckInDuration - In the implementation block
@property (assign) double duckOutDuration;                     //@synthesize duckOutDuration=_duckOutDuration - In the implementation block
-(double)duckOutDuration;
-(double)duckInDuration;
-(float)volumeAtTime:(double)arg1 ;
-(void)setDuckLevel:(float)arg1 ;
-(float)duckLevel;
-(void)setDuckInDuration:(double)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(id)initWithURL:(id)arg1 startTime:(double)arg2 andDuration:(double)arg3 ;
-(void)syncVolumeToSong:(id)arg1 ;
-(void)setLocalTimeOffset:(double)arg1 ;
-(double)localTimeOffset;
-(void)dealloc;
-(double)duration;
-(double)startTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)gotoTime:(double)arg1 ;
-(AVPlayerItem *)avPlayerItem;
@end

