/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRRenderer, MRAction, NSObject, NSArray, MRTouchSet, MCAction, NSSet;

@interface MRGestureRecognizer : NSObject {

	MRRenderer* _renderer;
	MRAction* _automaticStartAction;
	MRAction* _automaticUpdateAction;
	MRAction* _automaticEndAction;
	MRAction* _automaticCancelAction;
	MRAction* _startAction;
	MRAction* _updateAction;
	MRAction* _endAction;
	MRAction* _cancelAction;
	NSObject* _sender;
	NSArray* _matrixChain;
	int _state;
	CGSize _referenceSize;
	double _referenceScale;
	MRTouchSet* _touchSet;
	CGPoint _centroidStartLocation;
	CGPoint _centroidLocation;
	CGPoint _previousCentroidLocation;
	CGPoint _offsetFromCentroid;
	double _scale;
	double _previousScale;
	double _ratioFromScale;
	double _rotation;
	double _previousRotation;
	double _offsetFromRotation;
	double _startTime;
	double _hitTime;
	double _previousHitTime;
	double _score;
	unsigned char _requiredTouchCount;

}

@property (retain) MCAction * startAction; 
@property (retain) MCAction * updateAction; 
@property (retain) MCAction * endAction; 
@property (retain) MCAction * cancelAction; 
@property (readonly) id sender;                                             //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * matrixChain;                                   //@synthesize matrixChain=_matrixChain - In the implementation block
@property (assign,nonatomic) int state;                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                          //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) double referenceScale;                         //@synthesize referenceScale=_referenceScale - In the implementation block
@property (readonly) NSSet * touches; 
@property (assign,nonatomic) unsigned char requiredTouchCount;              //@synthesize requiredTouchCount=_requiredTouchCount - In the implementation block
@property (assign,nonatomic) double score;                                  //@synthesize score=_score - In the implementation block
-(void)_sendStartActions;
-(void)setRequiredTouchCount:(unsigned char)arg1 ;
-(void)_addSpecificObjectToAction:(id)arg1 ;
-(void)touchEnded:(id)arg1 ;
-(CGPoint)_localPointFromTouchPoint:(CGPoint)arg1 ;
-(void)recognize;
-(void)setMatrixChain:(NSArray *)arg1 ;
-(void)_sendAction:(id)arg1 ;
-(void)_sendEndActions;
-(void)touchBegan:(id)arg1 ;
-(void)_sendCancelActions;
-(id)initWithRenderer:(id)arg1 startAction:(id)arg2 andSender:(id)arg3 ;
-(void)_sendUpdateActions;
-(void)setStartAction:(MCAction *)arg1 ;
-(unsigned char)requiredTouchCount;
-(NSArray *)matrixChain;
-(MCAction *)startAction;
-(double)referenceScale;
-(void)setReferenceScale:(double)arg1 ;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)sender;
-(NSSet *)touches;
-(void)setCancelAction:(MCAction *)arg1 ;
-(MCAction *)cancelAction;
-(void)touchMoved:(id)arg1 ;
-(void)cleanup;
-(MCAction *)updateAction;
-(void)setScore:(double)arg1 ;
-(void)setEndAction:(MCAction *)arg1 ;
-(MCAction *)endAction;
-(double)score;
-(void)setUpdateAction:(MCAction *)arg1 ;
-(void)abort;
-(CGSize)referenceSize;
-(void)setReferenceSize:(CGSize)arg1 ;
@end

