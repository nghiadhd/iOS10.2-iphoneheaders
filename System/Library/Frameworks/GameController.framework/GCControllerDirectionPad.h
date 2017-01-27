/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@class GCControllerAxisInput, GCControllerButtonInput;

@interface GCControllerDirectionPad : GCControllerElement

@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) GCControllerAxisInput * xAxis; 
@property (nonatomic,readonly) GCControllerAxisInput * yAxis; 
@property (nonatomic,readonly) GCControllerButtonInput * up; 
@property (nonatomic,readonly) GCControllerButtonInput * down; 
@property (nonatomic,readonly) GCControllerButtonInput * left; 
@property (nonatomic,readonly) GCControllerButtonInput * right; 
-(id)description;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 ;
-(GCControllerButtonInput *)down;
-(GCControllerButtonInput *)left;
-(GCControllerButtonInput *)right;
-(GCControllerButtonInput *)up;
-(GCControllerAxisInput *)yAxis;
-(GCControllerAxisInput *)xAxis;
@end

