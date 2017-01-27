/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITimingCurveProvider.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <UITimingCurveProvider> {

	BOOL _implicitDuration;
	double _dampingRatio;
	double _mass;
	double _stiffness;
	double _damping;
	CGVector _initialVelocity;

}

@property (nonatomic,readonly) double dampingRatio;                                            //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (nonatomic,readonly) BOOL implicitDuration;                                          //@synthesize implicitDuration=_implicitDuration - In the implementation block
@property (assign,nonatomic) double mass;                                                      //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                                                 //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                                                   //@synthesize damping=_damping - In the implementation block
@property (nonatomic,readonly) double settlingDuration; 
@property (nonatomic,readonly) CGVector initialVelocity;                                       //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,readonly) long long timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)damping;
-(double)mass;
-(id)_mediaTimingFunction;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(CGVector)arg4 ;
-(id)effectiveTimingFunction;
-(long long)timingCurveType;
-(UICubicTimingParameters *)cubicTimingParameters;
-(UISpringTimingParameters *)springTimingParameters;
-(BOOL)implicitDuration;
-(double)stiffness;
-(CGVector)initialVelocity;
-(double)dampingRatio;
-(id)initWithDampingRatio:(double)arg1 initialVelocity:(CGVector)arg2 ;
-(id)initWithDampingRatio:(double)arg1 ;
-(double)settlingDuration;
@end

