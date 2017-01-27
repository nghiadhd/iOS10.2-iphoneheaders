/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <QuartzCore/CALayer.h>
#import <IMSharedUI/IMTypingIndicatorLayerProtocol.h>

@class CALayer, CAReplicatorLayer, UIColor, NSString;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol> {

	BOOL _hasDarkBackground;
	id _iconImage;
	double _bubbleOpacity;
	UIColor* _customBubbleColor;
	CALayer* _bubbleContainer;
	CALayer* _smallBubble;
	CALayer* _mediumBubble;
	CALayer* _largeBubble;
	CALayer* _thinkingDotContainer;
	CALayer* _thinkingDot;
	CAReplicatorLayer* _thinkingDots;
	CALayer* _iconImageLayer;

}

@property (nonatomic,retain) CALayer * bubbleContainer;                     //@synthesize bubbleContainer=_bubbleContainer - In the implementation block
@property (nonatomic,retain) CALayer * smallBubble;                         //@synthesize smallBubble=_smallBubble - In the implementation block
@property (nonatomic,retain) CALayer * mediumBubble;                        //@synthesize mediumBubble=_mediumBubble - In the implementation block
@property (nonatomic,retain) CALayer * largeBubble;                         //@synthesize largeBubble=_largeBubble - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDotContainer;                //@synthesize thinkingDotContainer=_thinkingDotContainer - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDot;                         //@synthesize thinkingDot=_thinkingDot - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * thinkingDots;              //@synthesize thinkingDots=_thinkingDots - In the implementation block
@property (nonatomic,retain) CALayer * iconImageLayer;                      //@synthesize iconImageLayer=_iconImageLayer - In the implementation block
@property (nonatomic,readonly) UIColor * bubbleColor; 
@property (nonatomic,retain) id iconImage;                                  //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) double bubbleOpacity;                          //@synthesize bubbleOpacity=_bubbleOpacity - In the implementation block
@property (nonatomic,copy) UIColor * customBubbleColor;                     //@synthesize customBubbleColor=_customBubbleColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDarkBackground;                        //@synthesize hasDarkBackground=_hasDarkBackground - In the implementation block
+(CGSize)defaultSize;
+(BOOL)supportsTypingIndicatorAnimation;
+(double)iconImageLeadingSpace;
+(CGRect)iconImageFrame;
+(UIColor*)defaultBubbleColor;
+(UIColor*)defaultThinkingDotColor;
+(CGRect)smallBubbleFrame;
+(UIColor*)darkBackgroundThinkingDotColor;
+(CGRect)mediumBubbleFrame;
+(CGRect)largeBubbleFrame;
+(double)thinkingDotDiameter;
+(CGPoint)thinkingDotsOffset;
+(double)thinkingDotSpace;
+(CGPoint)smallBubbleGrowOffset;
+(CGPoint)mediumBubbleGrowOffset;
+(CGPoint)largeBubbleGrowOffset;
-(id)init;
-(void)stopAnimation;
-(id)iconImage;
-(void)_setup;
-(void)setIconImage:(id)arg1 ;
-(void)setHasDarkBackground:(BOOL)arg1 ;
-(BOOL)hasDarkBackground;
-(void)_updateForImage;
-(void)setSmallBubble:(CALayer *)arg1 ;
-(CALayer *)smallBubble;
-(void)setMediumBubble:(CALayer *)arg1 ;
-(CALayer *)mediumBubble;
-(void)setLargeBubble:(CALayer *)arg1 ;
-(CALayer *)largeBubble;
-(void)_buildIconImage;
-(void)_buildThinkingDots;
-(void)setThinkingDot:(CALayer *)arg1 ;
-(CALayer *)thinkingDot;
-(void)setThinkingDots:(CAReplicatorLayer *)arg1 ;
-(CAReplicatorLayer *)thinkingDots;
-(double)convertedCurrentMediaTime;
-(id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(void)stopPulseAnimation;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(CALayer *)iconImageLayer;
-(void)setIconImageLayer:(CALayer *)arg1 ;
-(void)_updateBubbleColors;
-(CALayer *)bubbleContainer;
-(UIColor *)customBubbleColor;
-(double)bubbleOpacity;
-(UIColor *)bubbleColor;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCustomBubbleColor:(UIColor *)arg1 ;
-(void)setBubbleOpacity:(double)arg1 ;
-(void)setBubbleContainer:(CALayer *)arg1 ;
-(CALayer *)thinkingDotContainer;
-(void)setThinkingDotContainer:(CALayer *)arg1 ;
@end

