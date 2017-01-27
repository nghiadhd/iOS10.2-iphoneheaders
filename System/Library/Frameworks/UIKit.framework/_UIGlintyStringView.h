/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _UIGlintyStringViewDelegate;
@class NSString, UIFont, _UILegibilitySettings, _UIVibrantSettings, UIView, UIColor, UILabel, UIImage, NSMutableSet;

@interface _UIGlintyStringView : UIView {

	BOOL _animationRepeats;
	BOOL _adjustsFontSizeToFitWidth;
	BOOL _hasCustomBackgroundColor;
	BOOL _highlight;
	BOOL _allowsLuminanceAdjustments;
	BOOL _usesBackgroundDimming;
	BOOL _needsTextUpdate;
	BOOL _animating;
	BOOL _fading;
	BOOL _showing;
	int _textIndex;
	id<_UIGlintyStringViewDelegate> _delegate;
	NSString* _text;
	UIFont* _font;
	NSString* _textLanguage;
	_UILegibilitySettings* _legibilitySettings;
	_UIVibrantSettings* _vibrantSettings;
	UIView* _backgroundView;
	UIColor* _backgroundColor;
	UIColor* _chevronBackgroundColor;
	long long _chevronStyle;
	double _horizontalPadding;
	UILabel* _label;
	UIView* _spotlightView;
	UIImage* _chevron;
	UIView* _highlightView;
	UIView* _effectView;
	UIView* _blurView;
	UIView* _shimmerImageView;
	UIView* _reflectionImageView;
	double _blurAlpha;
	NSMutableSet* _blurHiddenRequesters;
	CGSize _labelSize;
	CGRect _chevronFrame;

}

@property (assign,nonatomic) BOOL needsTextUpdate;                                    //@synthesize needsTextUpdate=_needsTextUpdate - In the implementation block
@property (nonatomic,retain) UILabel * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) CGSize labelSize;                                        //@synthesize labelSize=_labelSize - In the implementation block
@property (nonatomic,retain) UIView * spotlightView;                                  //@synthesize spotlightView=_spotlightView - In the implementation block
@property (assign,nonatomic) int textIndex;                                           //@synthesize textIndex=_textIndex - In the implementation block
@property (nonatomic,retain) UIImage * chevron;                                       //@synthesize chevron=_chevron - In the implementation block
@property (assign,nonatomic) CGRect chevronFrame;                                     //@synthesize chevronFrame=_chevronFrame - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                  //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) BOOL animating;                                          //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) BOOL fading;                                             //@synthesize fading=_fading - In the implementation block
@property (assign,nonatomic) BOOL showing;                                            //@synthesize showing=_showing - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                     //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * blurView;                                       //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * shimmerImageView;                               //@synthesize shimmerImageView=_shimmerImageView - In the implementation block
@property (nonatomic,retain) UIView * reflectionImageView;                            //@synthesize reflectionImageView=_reflectionImageView - In the implementation block
@property (assign,nonatomic) double blurAlpha;                                        //@synthesize blurAlpha=_blurAlpha - In the implementation block
@property (nonatomic,retain) NSMutableSet * blurHiddenRequesters;                     //@synthesize blurHiddenRequesters=_blurHiddenRequesters - In the implementation block
@property (assign,nonatomic) id<_UIGlintyStringViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSString * textLanguage;                                   //@synthesize textLanguage=_textLanguage - In the implementation block
@property (nonatomic,readonly) CGRect labelFrame; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) _UIVibrantSettings * vibrantSettings;                    //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * chevronBackgroundColor;                        //@synthesize chevronBackgroundColor=_chevronBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL animationRepeats;                                   //@synthesize animationRepeats=_animationRepeats - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;                          //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) BOOL hasCustomBackgroundColor;                           //@synthesize hasCustomBackgroundColor=_hasCustomBackgroundColor - In the implementation block
@property (assign,nonatomic) long long chevronStyle;                                  //@synthesize chevronStyle=_chevronStyle - In the implementation block
@property (assign,nonatomic) double horizontalPadding;                                //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) BOOL highlight;                                          //@synthesize highlight=_highlight - In the implementation block
@property (assign,nonatomic) BOOL allowsLuminanceAdjustments;                         //@synthesize allowsLuminanceAdjustments=_allowsLuminanceAdjustments - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundDimming;                              //@synthesize usesBackgroundDimming=_usesBackgroundDimming - In the implementation block
-(void)layoutSubviews;
-(void)hide;
-(BOOL)showing;
-(void)show;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<_UIGlintyStringViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_highlightColor;
-(id<_UIGlintyStringViewDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIFont *)font;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIView *)effectView;
-(void)fadeOutWithDuration:(double)arg1 ;
-(BOOL)animating;
-(void)setEffectView:(UIView *)arg1 ;
-(void)setChevronStyle:(long long)arg1 ;
-(void)updateText;
-(void)setNeedsTextUpdate:(BOOL)arg1 ;
-(BOOL)hasCustomBackgroundColor;
-(void)setBlurAlpha:(double)arg1 ;
-(UIView *)blurView;
-(void)updateBlurForHiddenRequesters;
-(BOOL)fading;
-(void)addGlintyAnimations;
-(void)removeGlintyAnimations;
-(void)hideEffects;
-(void)hideBlur;
-(void)setShowing:(BOOL)arg1 ;
-(void)showEffects;
-(void)showBlur;
-(void)setFading:(BOOL)arg1 ;
-(void)fadeInWithDuration:(double)arg1 ;
-(id)_chevronImageForStyle:(long long)arg1 ;
-(void)setChevron:(UIImage *)arg1 ;
-(void)updateTextWithBounds:(CGRect)arg1 ;
-(double)_chevronWidthWithPadding;
-(double)_chevronWidthWithPaddingCompression:(double)arg1 ;
-(double)_chevronHeightWithMaxOffset;
-(void)_updateLabelWithFrame:(CGRect)arg1 ;
-(double)_chevronVerticalOffset;
-(BOOL)allowsLuminanceAdjustments;
-(_UIVibrantSettings *)vibrantSettings;
-(UIImage *)chevron;
-(id)shapeViewForCharactersInString:(id)arg1 withFont:(id)arg2 centeredInFrame:(CGRect)arg3 ;
-(void)setShimmerImageView:(UIView *)arg1 ;
-(void)setReflectionImageView:(UIView *)arg1 ;
-(BOOL)usesBackgroundDimming;
-(void)setBlurView:(UIView *)arg1 ;
-(double)blurAlpha;
-(UIView *)shimmerImageView;
-(UIView *)reflectionImageView;
-(void)addShimmerAnimationToLayer:(id)arg1 ;
-(void)addReflectionAnimationToLayer:(id)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(id)_highlightCompositingFilter;
-(BOOL)needsTextUpdate;
-(CGSize)_labelSizeThatFits:(CGSize)arg1 ;
-(double)_chevronPadding;
-(double)baselineOffsetFromBottomWithSize:(CGSize)arg1 ;
-(id)initWithText:(id)arg1 andFont:(id)arg2 ;
-(void)setTextLanguage:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setVibrantSettings:(_UIVibrantSettings *)arg1 ;
-(void)setBlurHidden:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)fadeOut;
-(void)fadeIn;
-(void)setHighlight:(BOOL)arg1 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(void)_updateHighlight;
-(CGRect)labelFrame;
-(CGRect)chevronFrame;
-(double)baselineOffsetFromBottom;
-(NSString *)textLanguage;
-(_UILegibilitySettings *)legibilitySettings;
-(UIColor *)chevronBackgroundColor;
-(void)setChevronBackgroundColor:(UIColor *)arg1 ;
-(BOOL)animationRepeats;
-(void)setAnimationRepeats:(BOOL)arg1 ;
-(void)setHasCustomBackgroundColor:(BOOL)arg1 ;
-(long long)chevronStyle;
-(double)horizontalPadding;
-(BOOL)highlight;
-(void)setAllowsLuminanceAdjustments:(BOOL)arg1 ;
-(void)setUsesBackgroundDimming:(BOOL)arg1 ;
-(CGSize)labelSize;
-(void)setLabelSize:(CGSize)arg1 ;
-(UIView *)spotlightView;
-(void)setSpotlightView:(UIView *)arg1 ;
-(int)textIndex;
-(void)setTextIndex:(int)arg1 ;
-(void)setChevronFrame:(CGRect)arg1 ;
-(UIView *)highlightView;
-(NSMutableSet *)blurHiddenRequesters;
-(void)setBlurHiddenRequesters:(NSMutableSet *)arg1 ;
@end

