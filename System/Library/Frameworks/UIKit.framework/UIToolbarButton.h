/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UILabel, UIColor;

@interface UIToolbarButton : UIControl {

	CGRect _hitRect;
	UIView* _info;
	UILabel* _label;
	long long _barStyle;
	long long _style;
	UIEdgeInsets _glowAdjust;
	BOOL _onState;
	BOOL _barHeight;
	BOOL _bezel;
	double _minimumWidth;
	double _maximumWidth;
	double _labelHeight;
	UIEdgeInsets _infoInsets;
	UIColor* _toolbarTintColor;
	id _appearanceStorage;
	BOOL _isInTopBar;
	Class _appearanceGuideClass;
	UIEdgeInsets __additionalSelectionInsets;

}

@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;                               //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (assign,setter=_setCreatedByBarButtonItem:,nonatomic) BOOL _createdByBarButtonItem; 
@property (assign,setter=_setAdditionalSelectionInsets:,nonatomic) UIEdgeInsets _additionalSelectionInsets;              //@synthesize _additionalSelectionInsets=__additionalSelectionInsets - In the implementation block
+(id)defaultButtonFont;
+(id)_defaultLabelFont;
+(id)_defaultLabelColor;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(Class)_appearanceGuideClass;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(BOOL)_wantsAccessibilityButtonShapes;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(id)_defaultTitleColorForState:(unsigned long long)arg1 ;
-(CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1 ;
-(id)_defaultTitleShadowColorForState:(unsigned long long)arg1 ;
-(void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIColor *)_tintColor;
-(id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(BOOL)arg3 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setWantsLetterpressContent;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(BOOL)_createdByBarButtonItem;
-(void)_setCreatedByBarButtonItem:(BOOL)arg1 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(UIEdgeInsets)_additionalSelectionInsets;
-(void)_setAdditionalSelectionInsets:(UIEdgeInsets)arg1 ;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_info;
-(void)setToolbarTintColor:(id)arg1 ;
-(BOOL)_infoIsButton;
-(BOOL)_isBordered;
-(BOOL)_canGetPadding;
-(double)_paddingForLeft:(BOOL)arg1 ;
-(BOOL)_useBarHeight;
-(void)_setInTopBar:(BOOL)arg1 ;
-(BOOL)_isBorderedOtherThanAccessibility;
-(void)_setButtonBarHitRect:(CGRect)arg1 ;
-(void)_setPressed:(BOOL)arg1 ;
-(void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3 ;
-(id)_newButton;
-(void)_adjustPushButtonForMiniBar:(BOOL)arg1 isChangingBarHeight:(BOOL)arg2 ;
-(void)_adjustToolbarButtonInfo;
-(BOOL)_shouldApplyPadding;
-(BOOL)_useSilverLook;
-(void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)arg1 ;
-(void)_updateInfoTextColorsForState:(unsigned long long)arg1 ;
-(id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(double)arg4 withBarStyle:(long long)arg5 withStyle:(long long)arg6 withInsets:(UIEdgeInsets)arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(BOOL)arg11 imageInsets:(UIEdgeInsets)arg12 glowInsets:(UIEdgeInsets)arg13 landscape:(BOOL)arg14 ;
-(CGRect)_buttonBarHitRect;
-(void)setUseSelectedImage:(BOOL)arg1 ;
-(void)_setInfoWidth:(float)arg1 ;
-(void)_setInfoExtremityWidth:(float)arg1 isMin:(BOOL)arg2 ;
-(void)_setInfoFlexibleWidth:(BOOL)arg1 ;
-(void)_setBarHeight:(float)arg1 ;
@end

