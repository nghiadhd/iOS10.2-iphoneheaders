/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKit/UISlider.h>

@class UIImageView;

@interface CCUIControlCenterSlider : UISlider {

	UIImageView* _minValueHighlightedImageView;
	UIImageView* _maxValueHighlightedImageView;
	BOOL _adjusting;

}

@property (assign,getter=isAdjusting,nonatomic) BOOL adjusting;              //@synthesize adjusting=_adjusting - In the implementation block
+(id)_trackImage;
+(id)_knobImage;
+(UIEdgeInsets)_edgeInsetsForSliderKnob;
+(id)_resizableTrackImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(void)setMinimumValueImage:(id)arg1 ;
-(void)setMaximumValueImage:(id)arg1 ;
-(void)_updateEffects;
-(BOOL)ccuiSupportsDelayedTouchesByContainingScrollViewForGesture:(id)arg1 ;
-(void)_setTrackImage:(id)arg1 ;
-(void)setAdjusting:(BOOL)arg1 ;
-(void)setMinimumValueImage:(id)arg1 cacheKey:(id)arg2 ;
-(void)setMaximumValueImage:(id)arg1 cacheKey:(id)arg2 ;
-(double)leftValueImageOriginForBounds:(CGRect)arg1 andSize:(CGSize)arg2 ;
-(double)rightValueImageOriginForBounds:(CGRect)arg1 andSize:(CGSize)arg2 ;
-(void)_configureHighlightedValueImagesLikeRegularValueImages;
-(BOOL)isAdjusting;
@end

