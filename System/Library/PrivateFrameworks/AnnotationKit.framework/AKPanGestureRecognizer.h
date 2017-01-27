/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>
#import <libobjc.A.dylib/AKPenDetectionGestureRecognizerProtocol.h>

@class NSMutableArray, NSString;

@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {

	BOOL _penGestureDetected;
	double _currentWeight;
	double _currentMaxWeight;
	NSMutableArray* _currentAccumulatedTouches;
	CGPoint _locationOfFirstTouch;

}

@property (assign,nonatomic) CGPoint locationOfFirstTouch;                            //@synthesize locationOfFirstTouch=_locationOfFirstTouch - In the implementation block
@property (assign,nonatomic) BOOL penGestureDetected;                                 //@synthesize penGestureDetected=_penGestureDetected - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentAccumulatedTouches;              //@synthesize currentAccumulatedTouches=_currentAccumulatedTouches - In the implementation block
@property (assign,nonatomic) double currentWeight;                                    //@synthesize currentWeight=_currentWeight - In the implementation block
@property (assign,nonatomic) double currentMaxWeight;                                 //@synthesize currentMaxWeight=_currentMaxWeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setPenGestureDetected:(BOOL)arg1 ;
-(BOOL)penGestureDetected;
-(void)setCurrentWeight:(double)arg1 ;
-(double)currentWeight;
-(void)setCurrentMaxWeight:(double)arg1 ;
-(void)resetAccumulatedTouches;
-(void)setLocationOfFirstTouch:(CGPoint)arg1 ;
-(NSMutableArray *)currentAccumulatedTouches;
-(void)setCurrentAccumulatedTouches:(NSMutableArray *)arg1 ;
-(void)_checkTouchForStylus:(id)arg1 ;
-(CGPoint)locationOfFirstTouch;
-(id)accumulatedTouches;
-(CGPoint)locationOfFirstTouchInView:(id)arg1 ;
-(double)currentMaxWeight;
@end

