/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInvisibleInkEffectView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CKTextBalloonView, UITextView, CAEmitterLayer, CALayer, NSArray, NSString;

@interface CKInvisibleInkTextEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {

	BOOL _blendingEnabled;
	CKTextBalloonView* _balloonView;
	UITextView* _textView;
	CAEmitterLayer* _textDrawEmitterLayer;
	CALayer* _dustEmitterContainerLayer;
	NSArray* _dustEmitterLayers;
	CAEmitterLayer* _dustDrawEmitterLayer;

}

@property (assign,nonatomic,__weak) CKTextBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) UITextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * textDrawEmitterLayer;               //@synthesize textDrawEmitterLayer=_textDrawEmitterLayer - In the implementation block
@property (nonatomic,retain) CALayer * dustEmitterContainerLayer;                 //@synthesize dustEmitterContainerLayer=_dustEmitterContainerLayer - In the implementation block
@property (nonatomic,retain) NSArray * dustEmitterLayers;                         //@synthesize dustEmitterLayers=_dustEmitterLayers - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * dustDrawEmitterLayer;               //@synthesize dustDrawEmitterLayer=_dustDrawEmitterLayer - In the implementation block
@property (assign,nonatomic) BOOL blendingEnabled;                                //@synthesize blendingEnabled=_blendingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(UITextView *)textView;
-(void)setSuspended:(BOOL)arg1 ;
-(id)createDrawEmitter;
-(void)endDrawEmitterEffects;
-(void)moveEmittersWithTouches:(id)arg1 ;
-(void)endTouches;
-(void)attachToBalloonView:(id)arg1 ;
-(void)detachFromBalloonView;
-(BOOL)blendingEnabled;
-(void)setBlendingEnabled:(BOOL)arg1 ;
-(void)setDustEmitterContainerLayer:(CALayer *)arg1 ;
-(CALayer *)dustEmitterContainerLayer;
-(void)setTextDrawEmitterLayer:(CAEmitterLayer *)arg1 ;
-(void)setDustDrawEmitterLayer:(CAEmitterLayer *)arg1 ;
-(CAEmitterLayer *)dustDrawEmitterLayer;
-(void)endDustEmitterLayerFingerEffects:(id)arg1 ;
-(NSArray *)dustEmitterLayers;
-(CAEmitterLayer *)textDrawEmitterLayer;
-(CKTextBalloonView *)balloonView;
-(id)dustEmitter;
-(void)setDustEmitterLayers:(NSArray *)arg1 ;
-(void)setBalloonView:(CKTextBalloonView *)arg1 ;
-(void)updateDustCellColor;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
@end

