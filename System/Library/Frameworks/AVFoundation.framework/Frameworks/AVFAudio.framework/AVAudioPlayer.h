/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioPlayer : NSObject {

	id _impl;

}

@property (getter=isPlaying,readonly) BOOL playing; 
@property (readonly) unsigned long long numberOfChannels; 
@property (readonly) double duration; 
@property (assign) id<AVAudioPlayerDelegate> delegate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (assign) float pan; 
@property (assign) float volume; 
@property (assign) BOOL enableRate; 
@property (assign) float rate; 
@property (assign) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (assign) long long numberOfLoops; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(unsigned long long)numberOfChannels;
-(void)setDelegate:(id<AVAudioPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<AVAudioPlayerDelegate>)delegate;
-(double)duration;
-(NSDictionary *)settings;
-(NSURL *)url;
-(void)stop;
-(AVAudioFormat *)format;
-(NSData *)data;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(BOOL)play;
-(void)pause;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(id)audioSession;
-(long long)numberOfLoops;
-(void)beginInterruption;
-(void)endInterruptionWithFlags:(id)arg1 ;
-(void)endInterruption;
-(id)impl;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)setAudioSession:(id)arg1 ;
-(BOOL)prepareToPlay;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(double)deviceCurrentTime;
-(BOOL)playAtTime:(double)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(void)finalize;
-(BOOL)isMeteringEnabled;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(id)initBase;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(void)setVolume:(float)arg1 fadeDuration:(double)arg2 ;
-(void)setEnableRate:(BOOL)arg1 ;
-(BOOL)enableRate;
-(void)setNumberOfLoops:(long long)arg1 ;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(BOOL)mixToUplink;
-(void)setMixToUplink:(BOOL)arg1 ;
@end

