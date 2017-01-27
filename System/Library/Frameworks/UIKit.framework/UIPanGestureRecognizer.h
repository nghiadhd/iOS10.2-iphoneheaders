/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer {

	CGPoint _firstSceneReferenceLocation;
	CGPoint _lastSceneReferenceLocation;
	double _lastTouchTime;
	id _velocitySample;
	id _previousVelocitySample;
	NSMutableArray* _touches;
	unsigned long long _lastTouchCount;
	unsigned long long _minimumNumberOfTouches;
	unsigned long long _maximumNumberOfTouches;
	double _hysteresis;
	double _allowableSeparation;
	CGPoint _lastUnadjustedSceneReferenceLocation;
	unsigned _failsPastMaxTouches : 1;
	unsigned _failsPastHysteresisWithoutMinTouches : 1;
	unsigned _canPanHorizontally : 1;
	unsigned _canPanVertically : 1;
	unsigned _ignoresStationaryTouches : 1;
	NSMutableArray* _movingTouches;
	CGPoint _digitizerLocation;

}

@property (getter=_velocitySample,readonly) UIPanGestureVelocitySample * _velocitySample;                              //@synthesize velocitySample=_velocitySample - In the implementation block
@property (getter=_previousVelocitySample,readonly) UIPanGestureVelocitySample * _previousVelocitySample;              //@synthesize previousVelocitySample=_previousVelocitySample - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfTouches;                                                //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;                                                //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
+(BOOL)_shouldDefaultToTouches;
+(double)_defaultHysteresis;
+(void)_setPanGestureRecognizersEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)_hysteresis;
-(void)_setHysteresis:(double)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)setFailsPastMaxTouches:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)_digitizerLocation;
-(void)_setIgnoresStationaryTouches:(BOOL)arg1 ;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(UIPanGestureVelocitySample *)_velocitySample;
-(UIPanGestureVelocitySample *)_previousVelocitySample;
-(void)_resetVelocitySamples;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(UIOffset)_offsetInViewFromSceneReferenceLocation:(CGPoint)arg1 toSceneReferenceLocation:(CGPoint)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(void)_setCanPanVertically:(BOOL)arg1 ;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(unsigned long long)minimumNumberOfTouches;
-(id)_activeTouches;
-(void)_setAllowableSeparation:(double)arg1 ;
-(void)_setFailsPastHysteresisWithoutMinTouches:(BOOL)arg1 ;
-(void)_resetGestureRecognizer;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(double)_allowableSeparation;
-(CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(CGPoint)arg1 lockingToAxis:(int)arg2 ;
-(BOOL)_willScrollX;
-(BOOL)_willScrollY;
-(void)_updateDigitizerLocationWithEvent:(id)arg1 ;
-(BOOL)_touchesExceedAllowableSeparation;
-(void)_touchesListChangedFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_updateMovingTouchesArraySavingOldArray:(id*)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)_removeHysteresisFromTranslation;
-(BOOL)_failsPastHysteresisWithoutMinTouches;
-(void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(/*^block*/id)arg2 ;
-(BOOL)failsPastMaxTouches;
-(long long)_lastTouchCount;
-(BOOL)_ignoresStationaryTouches;
-(BOOL)_canPanHorizontally;
-(BOOL)_canPanVertically;
-(void)_setCanPanHorizontally:(BOOL)arg1 ;
-(unsigned long long)maximumNumberOfTouches;
@end

