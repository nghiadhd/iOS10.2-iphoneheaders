/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <ToneKit/TKVibrationRecorderRippleView.h>

@protocol NSCopying, TKVibrationRecorderTouchSurfaceDelegate;
@class TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView {

	BOOL _isRecordingModeEnabled;
	double _vibrationPatternMaximumDuration;
	TKVibrationRecorderTouchSurfaceRecordedDataWrapper* _recordedDataWrapper;
	BOOL _shouldIgnoreCurrentTouch;
	BOOL _isReplayModeEnabled;
	TLVibrationPattern* _vibrationPatternToReplay;
	double _replayModeWasEnteredStartTime;
	id<NSCopying> _displayLinkManagerObserverToken;
	id<TKVibrationRecorderTouchSurfaceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TKVibrationRecorderTouchSurfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<TKVibrationRecorderTouchSurfaceDelegate>)arg1 ;
-(void)dealloc;
-(id<TKVibrationRecorderTouchSurfaceDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)enterReplayModeWithVibrationPattern:(id)arg1 ;
-(void)enterRecordingMode;
-(void)exitReplayMode;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2 ;
-(void)exitRecordingMode;
-(void)currentVibrationComponentShouldEnd;
-(void)_recordTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 ;
-(void)_updateTouchLocationForReplayMode:(id)arg1 ;
@end

