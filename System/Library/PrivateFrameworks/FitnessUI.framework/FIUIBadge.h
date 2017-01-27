/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <HealthKitUI/HKAnimatableObject.h>

@interface FIUIBadge : HKAnimatableObject {

	double _rotationX;
	double _rotationY;
	CGPoint _position;

}

@property (assign,nonatomic) CGPoint position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double rotationX;              //@synthesize rotationX=_rotationX - In the implementation block
@property (assign,nonatomic) double rotationY;              //@synthesize rotationY=_rotationY - In the implementation block
-(id)init;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)addAnimation:(id)arg1 forBadgePropertyType:(unsigned long long)arg2 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(void)removeAllAnimationsForBadgePropertyType:(unsigned long long)arg1 ;
-(void)setRotationX:(double)arg1 ;
-(void)setRotationY:(double)arg1 ;
-(double)rotationX;
-(double)rotationY;
@end

