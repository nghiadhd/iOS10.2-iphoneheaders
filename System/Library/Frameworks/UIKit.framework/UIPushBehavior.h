/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSMutableDictionary, NSArray;

@interface UIPushBehavior : UIDynamicBehavior {

	double _angle;
	double _magnitude;
	BOOL _active;
	long long _mode;
	CGVector _forceVector;
	double _timeInterval;
	NSMutableDictionary* _targetPoints;
	int _i;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long mode; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double magnitude; 
@property (assign,nonatomic) CGVector pushDirection; 
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(NSArray *)items;
-(void)removeItem:(id)arg1 ;
-(BOOL)active;
-(id)initWithItems:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(long long)mode;
-(void)_associate;
-(void)_dissociate;
-(id)initWithItems:(id)arg1 mode:(long long)arg2 ;
-(void)setPushDirection:(CGVector)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setAngle:(double)arg1 ;
-(double)angle;
-(void)setMagnitude:(double)arg1 ;
-(void)_step;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(double)magnitude;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(double)yComponent;
-(double)xComponent;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
-(CGPoint)targetPointForItem:(id)arg1 ;
-(void)setTargetPoint:(CGPoint)arg1 forItem:(id)arg2 ;
-(UIOffset)targetOffsetFromCenterForItem:(id)arg1 ;
-(void)setTargetOffsetFromCenter:(UIOffset)arg1 forItem:(id)arg2 ;
-(CGVector)pushDirection;
@end

