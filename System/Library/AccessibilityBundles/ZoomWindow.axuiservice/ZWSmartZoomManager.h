/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol ZWSmartZoomDelegate;
@class AXElement, AVSpeechSynthesizer, NSTimer, NSString;

@interface ZWSmartZoomManager : NSObject <AVSpeechSynthesizerDelegate> {

	BOOL _enabled;
	id<ZWSmartZoomDelegate> _delegate;
	AXObserverRef _accessibilityRuntimeObserver;
	AXElement* _focusElement;
	AVSpeechSynthesizer* _synthesizer;
	NSTimer* _audioUnduckTimer;

}

@property (assign,nonatomic) AXObserverRef accessibilityRuntimeObserver;              //@synthesize accessibilityRuntimeObserver=_accessibilityRuntimeObserver - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) AXElement * focusElement;                                //@synthesize focusElement=_focusElement - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesizer * synthesizer;                       //@synthesize synthesizer=_synthesizer - In the implementation block
@property (nonatomic,retain) NSTimer * audioUnduckTimer;                              //@synthesize audioUnduckTimer=_audioUnduckTimer - In the implementation block
@property (assign,nonatomic,__weak) id<ZWSmartZoomDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect focusRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initializeAccessibility;
-(void)enableOCRLiveMonitoring;
-(void)disableOCRLiveMonitoring;
-(void)_updateAudioSettings;
-(void)disableSmartZoom;
-(void)setFocusElement:(AXElement *)arg1 ;
-(void)_speakFocusedElement;
-(AXObserverRef)accessibilityRuntimeObserver;
-(void)setAudioUnduckTimer:(NSTimer *)arg1 ;
-(id)_elementForFocus;
-(NSTimer *)audioUnduckTimer;
-(void)_accessibilitySystemServerDied;
-(void)_handleAudioUnduckTimerFired:(id)arg1 ;
-(void)speakContent;
-(AXElement *)focusElement;
-(void)setAccessibilityRuntimeObserver:(AXObserverRef)arg1 ;
-(void)_registerForAccessibilityRuntimeNotifications;
-(void)_unregisterForAccessibilityRuntimeNotifications;
-(void)_updateApplicationAccessibility:(BOOL)arg1 ;
-(id)_accessibilityRuntimeNotifications;
-(void)_handleNativeFocusItemChangedNotification:(void*)arg1 ;
-(void)_handleUpdateElementVisualsNotification;
-(BOOL)setNativeFocusOnBestElementNearRect:(CGRect)arg1 ;
-(void)_handleFirstResponderChangedNotification;
-(void)enableSmartZoom;
-(void)setDelegate:(id<ZWSmartZoomDelegate>)arg1 ;
-(void)dealloc;
-(id<ZWSmartZoomDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(CGRect)focusRect;
-(AVSpeechSynthesizer *)synthesizer;
-(void)setSynthesizer:(AVSpeechSynthesizer *)arg1 ;
@end

