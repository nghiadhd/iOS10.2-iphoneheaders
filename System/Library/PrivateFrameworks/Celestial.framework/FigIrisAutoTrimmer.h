/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	BOOL _motionAvailable;
	SCD_Struct_Fi53 _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	BOOL _haveCaptureMotionDelta;
	SCD_Struct_Fi53 _lastAttitude;
	SCD_Struct_Fi53 _lastDelta;
	double _lastCheckedTimestamp;
	int _lastStatus;
	OpaqueFigSimpleMutexRef _motionSamplesLock;
	NSMutableArray* _motionSamples;
	SCD_Struct_BW2 _maxHoldDuration;
	double _bufferHistorySeconds;
	double _motionSampleRate;

}

@property (nonatomic,readonly) BOOL trimmingActive; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)setVideoFrameRate:(double)arg1 ;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(void)setMaxHoldDuration:(SCD_Struct_BW2)arg1 ;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;
-(void)processISPMotionData:(id)arg1 forHostTime:(SCD_Struct_BW2)arg2 ;
-(int)emissionStatusForHostPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)beginTrimmingForStillImageHostPTS:(SCD_Struct_BW2)arg1 minimumPTS:(SCD_Struct_BW2)arg2 ;
-(void)_processMotionSample:(const SCD_Struct_Fi53*)arg1 gravity:(const SCD_Struct_Fi52*)arg2 timestamp:(double)arg3 ;
-(double)_timeoutThreshold;
-(BOOL)_isUnstable:(id)arg1 ;
-(BOOL)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2 ;
-(double)directionalWeightForSample:(id)arg1 ;
-(double)_getHostTime;
-(BOOL)trimmingActive;
-(SCD_Struct_BW2)maxHoldDuration;
-(double)bufferHistorySeconds;
-(double)videoFrameRate;
@end

