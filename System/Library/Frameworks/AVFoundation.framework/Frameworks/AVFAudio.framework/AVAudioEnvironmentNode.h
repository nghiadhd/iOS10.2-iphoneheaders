/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class AVAudioEnvironmentDistanceAttenuationParameters, AVAudioEnvironmentReverbParameters, NSArray, NSString;

@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (assign,nonatomic) AVAudio3DPoint listenerPosition; 
@property (assign,nonatomic) AVAudio3DVectorOrientation listenerVectorOrientation; 
@property (assign,nonatomic) AVAudio3DAngularOrientation listenerAngularOrientation; 
@property (nonatomic,readonly) AVAudioEnvironmentDistanceAttenuationParameters * distanceAttenuationParameters; 
@property (nonatomic,readonly) AVAudioEnvironmentReverbParameters * reverbParameters; 
@property (nonatomic,readonly) NSArray * applicableRenderingAlgorithms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)init;
-(AVAudioEnvironmentDistanceAttenuationParameters *)distanceAttenuationParameters;
-(AVAudio3DPoint)listenerPosition;
-(void)setListenerPosition:(AVAudio3DPoint)arg1 ;
-(void)setListenerVectorOrientation:(AVAudio3DVectorOrientation)arg1 ;
-(void)setOutputVolume:(float)arg1 ;
-(float)outputVolume;
-(unsigned long long)nextAvailableInputBus;
-(NSArray *)applicableRenderingAlgorithms;
-(AVAudio3DVectorOrientation)listenerVectorOrientation;
-(void)setListenerAngularOrientation:(AVAudio3DAngularOrientation)arg1 ;
-(AVAudio3DAngularOrientation)listenerAngularOrientation;
-(AVAudioEnvironmentReverbParameters *)reverbParameters;
@end

