/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, UIColor, RefittedFrame, NSString;

@interface GuidanceSignInstructionsLabel : UIView <CAAnimationDelegate> {

	NSArray* _textAlternatives;
	UIColor* _textColor;
	UIColor* _accentColor;
	double _maximumWidth;
	unsigned long long _maximumNumberOfLines;
	long long _textAlignment;
	RefittedFrame* _cachedFrame;
	int _variant;
	NSString* _fontName;
	double _fontSize;
	int _framing;
	NSArray* _subLayers;
	unsigned long long numberOfLinesToAnimateUp;
	double lastPositionForPercent;
	unsigned long long _animating;

}

@property (nonatomic,retain) RefittedFrame * cachedFrame;                          //@synthesize cachedFrame=_cachedFrame - In the implementation block
@property (nonatomic,copy) NSArray * textAlternatives;                             //@synthesize textAlternatives=_textAlternatives - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                  //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) double textWidth; 
@property (nonatomic,retain) UIColor * textColor;                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                                //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) int variant;                                          //@synthesize variant=_variant - In the implementation block
@property (nonatomic,copy) NSString * fontName;                                    //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                                      //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) int framing;                                          //@synthesize framing=_framing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)refittedFrameThatFitsWidth:(double)arg1 textAlternatives:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 alignment:(long long)arg4 color:(id)arg5 variant:(int)arg6 fontName:(id)arg7 fontSize:(double)arg8 ;
+(id)stringByReplacingWhitespaceToAvoidOrphanWords:(id)arg1 ;
+(id)attributedStringWithText:(id)arg1 alignment:(long long)arg2 color:(id)arg3 variant:(int)arg4 minimumLineHeight:(double*)arg5 fontName:(id)arg6 fontSize:(double)arg7 ;
+(double)heightThatFitsWidth:(double)arg1 textAlternatives:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 alignment:(long long)arg4 variant:(int)arg5 fontName:(id)arg6 fontSize:(double)arg7 ;
+(id)stringAttributesForInstructionsTextWithAlignment:(long long)arg1 color:(id)arg2 variant:(int)arg3 minimumLineHeight:(double*)arg4 fontName:(id)arg5 fontSize:(double)arg6 ;
+(double)heightThatFitsWidth:(double)arg1 text:(id)arg2 shorterAlternatives:(id)arg3 maximumNumberOfLines:(unsigned long long)arg4 alignment:(long long)arg5 variant:(int)arg6 fontName:(id)arg7 fontSize:(double)arg8 ;
-(void)updateLinePosition;
-(NSArray *)textAlternatives;
-(id)refittedFrame;
-(double)heightThatFitsWidth:(double)arg1 ;
-(void)setTextAlternatives:(NSArray *)arg1 ;
-(void)setText:(id)arg1 shorterAlternatives:(id)arg2 ;
-(void)drawSublayers;
-(int)framing;
-(void)setFraming:(int)arg1 ;
-(void)textLinesShouldAnimateFromHeight:(double)arg1 ;
-(void)transformSublayerByPercentageComplete:(double)arg1 ;
-(void)transformSublayerFromPercentageComplete:(double)arg1 toPercentageComplete:(double)arg2 animated:(BOOL)arg3 duration:(double)arg4 ;
-(void)updateLinePositionAnimated:(BOOL)arg1 fromPosition:(double)arg2 toPosition:(double)arg3 duration:(double)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)maximumWidth;
-(UIColor *)textColor;
-(long long)textAlignment;
-(NSString *)fontName;
-(void)setFontSize:(double)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(unsigned long long)maximumNumberOfLines;
-(double)textWidth;
-(void)setCachedFrame:(RefittedFrame *)arg1 ;
-(RefittedFrame *)cachedFrame;
-(void)setAccentColor:(UIColor *)arg1 ;
-(UIColor *)accentColor;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end

