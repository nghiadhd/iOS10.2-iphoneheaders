/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class SBSStatusBarStyleOverridesAssertion;

@interface AXHALiveListenController : NSObject {

	SBSStatusBarStyleOverridesAssertion* _llStatusBarAssertion;
	OpaqueExtAudioFileRef _debugAudioFile;
	float _noise;
	float _signal;
	BOOL isListening;
	BOOL _didInitializeAudioUnit;
	OpaqueAudioComponentInstanceRef rioUnit;
	OpaqueAudioComponentInstanceRef mixerUnit;

}

@property (assign,nonatomic) BOOL didInitializeAudioUnit;                              //@synthesize didInitializeAudioUnit=_didInitializeAudioUnit - In the implementation block
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef rioUnit; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef mixerUnit; 
@property (assign,nonatomic) BOOL isListening; 
-(id)init;
-(void)dealloc;
-(float)audioLevel;
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(void)mediaServicesWereReset:(id)arg1 ;
-(void)audioRouteDidChange:(id)arg1 ;
-(BOOL)stopListeningWithError:(id*)arg1 ;
-(BOOL)isListening;
-(BOOL)startListeningWithError:(id*)arg1 ;
-(BOOL)didInitializeAudioUnit;
-(void)setDidInitializeAudioUnit:(BOOL)arg1 ;
-(void)setIsListening:(BOOL)arg1 ;
-(OpaqueExtAudioFileRef)debugAudioFile;
-(OpaqueAudioComponentInstanceRef)rioUnit;
-(OpaqueAudioComponentInstanceRef)mixerUnit;
@end

