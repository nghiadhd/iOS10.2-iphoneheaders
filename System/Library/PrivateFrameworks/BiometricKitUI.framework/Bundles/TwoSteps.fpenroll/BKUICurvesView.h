/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TwoSteps/TwoSteps-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OS_os_log;
@class NSMutableArray, UIColor, CABasicAnimation, NSCondition, NSXMLParser, UIBezierPath, CAShapeLayer, NSObject, NSNumber, NSString;

@interface BKUICurvesView : UIView <NSXMLParserDelegate, CAAnimationDelegate> {

	NSMutableArray* _pathLayers;
	UIColor* _color;
	unsigned long long _currentLayer;
	unsigned long long _preEstimateLayer;
	float _progress;
	BOOL _estimateFailed;
	BOOL _estimating;
	CABasicAnimation* _lastAnimation;
	double _lastRatio;
	NSCondition* _initCondition;
	BOOL _inited;
	NSXMLParser* _parser;
	UIBezierPath* _wholePath;
	NSMutableArray* _paths;
	CAShapeLayer* _fingerLayer;
	NSObject*<OS_os_log> bkui_curves_view_log;
	NSNumber* _speed;

}

@property (retain) NSNumber * speed;                                //@synthesize speed=_speed - In the implementation block
@property (assign) float progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeEstimateWatchDog;
-(void)loadDataFromXML:(id)arg1 name:(id)arg2 color:(id)arg3 ;
-(void)setSublayersSize:(CGSize)arg1 ;
-(void)estimateProgress:(float)arg1 ;
-(void)_checkEstimateFailedAfterAnimation:(id)arg1 ;
-(void)estimateFailed;
-(void)_animateFromLayer:(unsigned long long)arg1 toLayer:(unsigned long long)arg2 withColor:(id)arg3 ;
-(unsigned long long)_animateFromLayer:(unsigned long long)arg1 toProgress:(float)arg2 withColor:(id)arg3 ;
-(CGPoint)_getPoint:(id)arg1 ;
-(void)_resetLayers;
-(void)_resetEstimate:(id)arg1 ;
-(void)_startAnimation:(unsigned long long)arg1 withColor:(id)arg2 isLast:(BOOL)arg3 ;
-(void)_waitForInit;
-(void)_addEstimateWatchDog;
-(void)_animateEstimateFailure;
-(void)dealloc;
-(void)setSpeed:(NSNumber *)arg1 ;
-(NSNumber *)speed;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end

