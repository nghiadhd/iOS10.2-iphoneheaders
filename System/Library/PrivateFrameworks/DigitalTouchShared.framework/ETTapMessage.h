/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class SKScene, SKFieldNode, NSMutableArray, NSTimer;

@interface ETTapMessage : ETMessage {

	SKScene* _preVisualizeScene;
	SKFieldNode* _noiseField;
	vector<CGPoint, std::__1::allocator<CGPoint> >* _points;
	vector<double, std::__1::allocator<double> >* _times;
	NSMutableArray* _colors;
	double _baseTime;
	NSTimer* _soundTimer;
	unsigned long long _soundIndex;

}

@property (nonatomic,readonly) unsigned long long tapCount; 
+(unsigned short)messageType;
-(id)init;
-(unsigned long long)tapCount;
-(id)archiveData;
-(CGPoint)pointAtIndex:(unsigned long long)arg1 ;
-(id)initWithArchiveData:(id)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(void)displayInScene:(id)arg1 ;
-(BOOL)reachedSizeLimit;
-(void)preVisualizeInScene:(id)arg1 ;
-(void)addTapAtPoint:(CGPoint)arg1 time:(double)arg2 color:(id)arg3 ;
-(void)_displayInScene:(id)arg1 point:(CGPoint)arg2 color:(id)arg3 filled:(BOOL)arg4 withWisp:(BOOL)arg5 ;
-(double)timeDeltaAtIndex:(unsigned long long)arg1 ;
-(id)_animateCircleInner0:(double)arg1 inner1:(double)arg2 outer0:(double)arg3 outer1:(double)arg4 duration:(double)arg5 ;
@end

