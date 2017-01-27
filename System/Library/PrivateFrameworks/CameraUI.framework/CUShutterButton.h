/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIButton.h>

@class CAMShutterButtonRingView, UIImageView, CAMTimelapseShutterRingView, UIView, UIActivityIndicatorView;

@interface CUShutterButton : UIButton {

	BOOL _pulsing;
	BOOL _spinning;
	BOOL _showDisabled;
	long long _layoutStyle;
	long long _mode;
	CAMShutterButtonRingView* __outerView;
	UIImageView* __outerImageView;
	CAMTimelapseShutterRingView* __timelapseOuterView;
	UIView* __innerView;
	UIActivityIndicatorView* __progressActivityIndicatorView;
	UIEdgeInsets _tappableEdgeInsets;
	CAMShutterButtonSpec _spec;

}

@property (nonatomic,readonly) CAMShutterButtonRingView * _outerView;                                 //@synthesize _outerView=__outerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outerImageView;                                         //@synthesize _outerImageView=__outerImageView - In the implementation block
@property (nonatomic,readonly) CAMTimelapseShutterRingView * _timelapseOuterView;                     //@synthesize _timelapseOuterView=__timelapseOuterView - In the implementation block
@property (nonatomic,readonly) UIView * _innerView;                                                   //@synthesize _innerView=__innerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * _progressActivityIndicatorView;              //@synthesize _progressActivityIndicatorView=__progressActivityIndicatorView - In the implementation block
@property (assign,nonatomic) CAMShutterButtonSpec spec;                                               //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                   //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long mode;                                                          //@synthesize mode=_mode - In the implementation block
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing;                                           //@synthesize pulsing=_pulsing - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning;                                         //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) BOOL showDisabled;                                                       //@synthesize showDisabled=_showDisabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                         //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(id)shutterButtonWithLayoutStyle:(long long)arg1 ;
+(id)smallShutterButtonWithLayoutStyle:(long long)arg1 ;
+(id)tinyShutterButtonWithLayoutStyle:(long long)arg1 ;
+(id)shutterButtonWithSpec:(CAMShutterButtonSpec)arg1 layoutStyle:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setSpinning:(BOOL)arg1 ;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(CAMShutterButtonSpec)spec;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)setMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setShowDisabled:(BOOL)arg1 ;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 layoutStyle:(long long)arg2 ;
-(CAMShutterButtonSpec)_specForLayoutStyle:(long long)arg1 ;
-(void)_updateOuterAndInnerLayers;
-(void)_commonCAMShutterButtonInitializationWithLayoutStyle:(long long)arg1 ;
-(CGSize)_sizeForMode:(long long)arg1 ;
-(double)_cornerRadiusForMode:(long long)arg1 ;
-(void)_performHighlightAnimation;
-(void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateSpinningAnimations;
-(double)_innerCircleDiameter;
-(BOOL)_shouldUseImageViewForMode:(long long)arg1 ;
-(id)_outerImageForMode:(long long)arg1 ;
-(BOOL)_shouldUseTimelapseOuterViewForMode:(long long)arg1 ;
-(BOOL)_shouldShowContrastBorderForMode:(long long)arg1 layoutStyle:(long long)arg2 ;
-(CAMShutterButtonRingView *)_outerView;
-(UIView *)_innerView;
-(id)_colorForMode:(long long)arg1 ;
-(BOOL)_shouldShowSpinningAnimations;
-(UIImageView *)_outerImageView;
-(CAMTimelapseShutterRingView *)_timelapseOuterView;
-(BOOL)_isStopMode:(long long)arg1 ;
-(void)setPulsing:(BOOL)arg1 ;
-(BOOL)isPulsing;
-(BOOL)showDisabled;
-(UIActivityIndicatorView *)_progressActivityIndicatorView;
-(BOOL)isSpinning;
@end

