/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKAstronomyRotationModelObserver, NURotatable;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CADisplayLink;

@interface NTKAstronomyRotationModel : NSObject {

	CADisplayLink* _displayLink;
	const NTKAstronomyInteractionSettings* _interactionSettings;
	id<NTKAstronomyRotationModelObserver> _observer;
	id<NURotatable> _rotatable;
	long long _state;
	CLLocationCoordinate2D _landingCoordinate;
	 _accumulatedPushVector;
	float _effectivePushDeceleration;
	float _effectivePullAcceleration;
	double _pushStartTime;
	double _pullStartTime;
	double _previousDisplayLinkCallbackTime;
	BOOL _isPulling;

}

@property (nonatomic,readonly) const NTKAstronomyInteractionSettings* interactionSettings;              //@synthesize interactionSettings=_interactionSettings - In the implementation block
@property (assign,nonatomic,__weak) id<NURotatable> rotatable;                                          //@synthesize rotatable=_rotatable - In the implementation block
@property (assign,nonatomic,__weak) id<NTKAstronomyRotationModelObserver> observer;                     //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isPulling,nonatomic) BOOL pulling;                                             //@synthesize isPulling=_isPulling - In the implementation block
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)_update;
-(void)setObserver:(id<NTKAstronomyRotationModelObserver>)arg1 ;
-(id<NTKAstronomyRotationModelObserver>)observer;
-(void)push:;
-(void)_handleDisplayLink;
-(const NTKAstronomyInteractionSettings*)interactionSettings;
-(BOOL)isAtHomeCoordinate;
-(id<NURotatable>)rotatable;
-(void)setRotatable:(id<NURotatable>)arg1 ;
-(BOOL)isPulling;
-(void)setPulling:(BOOL)arg1 ;
@end

