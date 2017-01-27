/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>
#import <libobjc.A.dylib/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer, UITouch, NSString;

@interface AXSpeakScreenGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	_UIScreenEdgePanRecognizer* _recognizer;
	UITouch* _firstTouch;

}

@property (nonatomic,retain) UITouch * firstTouch;                  //@synthesize firstTouch=_firstTouch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(double)_edgeRegionSize;
-(BOOL)isRequiringLongPress;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(unsigned long long)edges;
-(CGPoint)_locationForTouch:(id)arg1 ;
-(long long)_touchInterfaceOrientation;
-(void)setFirstTouch:(UITouch *)arg1 ;
-(UITouch *)firstTouch;
@end

