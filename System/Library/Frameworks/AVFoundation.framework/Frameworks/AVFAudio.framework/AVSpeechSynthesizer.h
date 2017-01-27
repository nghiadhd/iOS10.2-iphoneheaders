/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVSpeechSynthesizerDelegate;
@class NSArray;

@interface AVSpeechSynthesizer : NSObject {

	BOOL speaking;
	BOOL paused;
	id<AVSpeechSynthesizerDelegate> delegate;
	NSArray* outputChannels;

}

@property (assign,nonatomic) id<AVSpeechSynthesizerDelegate> delegate; 
@property (getter=isSpeaking,nonatomic,readonly) BOOL speaking; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,retain) NSArray * outputChannels; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BOOL)isPaused;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(void)_handleAudioInterruption:(id)arg1 ;
-(void)_handleMediaServicesWereLost:(id)arg1 ;
-(void)_handleMediaServicesWereReset:(id)arg1 ;
-(BOOL)isInAudioInterruption;
-(BOOL)audioInterruptionStartedTime;
-(void)setDidRequestStartSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestPauseSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestResumeSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setIsInAudioInterruption:(BOOL)arg1 ;
-(void)setShouldHandleAudioInterruptions:(BOOL)arg1 ;
-(BOOL)wasSpeakingBeforeAudioInterruption;
-(BOOL)isSpeaking;
-(BOOL)pauseSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)stopSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)continueSpeaking;
-(void)speakUtterance:(id)arg1 ;
-(void)setWasSpeakingBeforeAudioInterruption:(BOOL)arg1 ;
-(void)setAudioInterruptionStartedTime:(double)arg1 ;
-(BOOL)didRequestStartSpeakingDuringAudioInterruption;
-(BOOL)didRequestPauseSpeakingDuringAudioInterruption;
-(BOOL)didRequestResumeSpeakingDuringAudioInterruption;
-(void)_didBeginInterruption;
-(void)_didEndInterruption;
-(id)speechManager;
-(void)prepareSpeechManager;
-(void)tearDownWarmupManager;
-(BOOL)shouldHandleAudioInterruptions;
-(id)speechQueue;
-(void)_speakUtterance:(id)arg1 ;
-(void)setRequestedUtteranceDuringAudioInterruption:(id)arg1 ;
-(id)inflightUtterance;
-(void)_enqueueNextJob;
-(id)requestedUtteranceDuringAudioInterruption;
-(void)setInflightUtterance:(id)arg1 ;
-(void)_handleSpeechDone:(id)arg1 successful:(BOOL)arg2 ;
-(int)_convertBoundary:(long long)arg1 ;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(void)setDelegate:(id<AVSpeechSynthesizerDelegate>)arg1 ;
-(id<AVSpeechSynthesizerDelegate>)delegate;
-(BOOL)isPaused;
-(BOOL)isSpeaking;
-(BOOL)pauseSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)stopSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)continueSpeaking;
-(void)speakUtterance:(id)arg1 ;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
@end
