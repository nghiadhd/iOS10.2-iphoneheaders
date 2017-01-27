/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVVoiceControllerPlaybackDelegate <NSObject>
@optional
-(void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
-(void)voiceControllerDidStartPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceControllerDidStopPlaying:(id)arg1 forReason:(long long)arg2;
-(void)voiceControllerDecoderErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)voiceControllerBeginPlaybackInterruption:(id)arg1;
-(void)voiceControllerEndPlaybackInterruption:(id)arg1;

@required
-(void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2;

@end

