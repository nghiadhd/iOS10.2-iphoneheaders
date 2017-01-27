/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKUtilityComplicationFactoryDelegate;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@interface NTKUtilityComplicationFactory : NSObject {

	BOOL _accommodatesTwoTopComplications;
	id<NTKUtilityComplicationFactoryDelegate> _delegate;
	double _normalSidePadding;
	double _normalVerticalPadding;
	double _normalCircularPadding;
	double _deselectedKeylineSideInnerPadding;
	double _deselectedKeylineVerticalInnerPadding;
	double _deselectedKeylineCircularInnerPadding;
	double _selectedKeylineSideInnerPadding;
	double _selectedKeylineHeight;
	double _foregroundAlpha;
	double _foregroundImageAlpha;
	double _dateKeylineMaxWidth;
	double _dateHorizontalCenterOffset;
	double _dateVerticalCenterOffset;
	long long _bottomCenterLayout;

}

@property (assign,nonatomic,__weak) id<NTKUtilityComplicationFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL accommodatesTwoTopComplications;                                   //@synthesize accommodatesTwoTopComplications=_accommodatesTwoTopComplications - In the implementation block
@property (assign,nonatomic) double normalSidePadding;                                               //@synthesize normalSidePadding=_normalSidePadding - In the implementation block
@property (assign,nonatomic) double normalVerticalPadding;                                           //@synthesize normalVerticalPadding=_normalVerticalPadding - In the implementation block
@property (assign,nonatomic) double normalCircularPadding;                                           //@synthesize normalCircularPadding=_normalCircularPadding - In the implementation block
@property (assign,nonatomic) double deselectedKeylineSideInnerPadding;                               //@synthesize deselectedKeylineSideInnerPadding=_deselectedKeylineSideInnerPadding - In the implementation block
@property (assign,nonatomic) double deselectedKeylineVerticalInnerPadding;                           //@synthesize deselectedKeylineVerticalInnerPadding=_deselectedKeylineVerticalInnerPadding - In the implementation block
@property (assign,nonatomic) double deselectedKeylineCircularInnerPadding;                           //@synthesize deselectedKeylineCircularInnerPadding=_deselectedKeylineCircularInnerPadding - In the implementation block
@property (assign,nonatomic) double selectedKeylineSideInnerPadding;                                 //@synthesize selectedKeylineSideInnerPadding=_selectedKeylineSideInnerPadding - In the implementation block
@property (assign,nonatomic) double selectedKeylineHeight;                                           //@synthesize selectedKeylineHeight=_selectedKeylineHeight - In the implementation block
@property (assign,nonatomic) double foregroundAlpha;                                                 //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) double foregroundImageAlpha;                                            //@synthesize foregroundImageAlpha=_foregroundImageAlpha - In the implementation block
@property (assign,nonatomic) double dateKeylineMaxWidth;                                             //@synthesize dateKeylineMaxWidth=_dateKeylineMaxWidth - In the implementation block
@property (assign,nonatomic) double dateHorizontalCenterOffset;                                      //@synthesize dateHorizontalCenterOffset=_dateHorizontalCenterOffset - In the implementation block
@property (assign,nonatomic) double dateVerticalCenterOffset;                                        //@synthesize dateVerticalCenterOffset=_dateVerticalCenterOffset - In the implementation block
@property (assign,nonatomic) long long bottomCenterLayout;                                           //@synthesize bottomCenterLayout=_bottomCenterLayout - In the implementation block
+(unsigned long long)placementForSlot:(long long)arg1 ;
-(id)init;
-(void)setDelegate:(id<NTKUtilityComplicationFactoryDelegate>)arg1 ;
-(id<NTKUtilityComplicationFactoryDelegate>)delegate;
-(double)foregroundAlpha;
-(void)setForegroundAlpha:(double)arg1 ;
-(void)configureComplicationLayout:(id)arg1 forSlot:(long long)arg2 withBounds:(CGRect)arg3 ;
-(id)newViewForComplication:(id)arg1 family:(long long)arg2 forSlot:(long long)arg3 ;
-(double)foregroundAlphaForEditing:(BOOL)arg1 ;
-(double)foregroundImageAlphaForEditing:(BOOL)arg1 ;
-(void)setForegroundImageAlpha:(double)arg1 ;
-(double)foregroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(double)foregroundImageAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(unsigned long long)keylineLabelAlignmentForSlot:(long long)arg1 ;
-(double)keylineCornerRadiusForSlot:(long long)arg1 ;
-(void)setBottomCenterLayout:(long long)arg1 ;
-(long long)layoutOverrideForComplicationType:(unsigned long long)arg1 inSlot:(long long)arg2 ;
-(id)_viewForDateComplication:(id)arg1 ;
-(void)_configureTopLeftLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureTopRightLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomLeftLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomRightLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureTopRightAboveLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomRightAboveLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureTopRightBelowLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomRightBelowLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomRightLongLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomCenterLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureDateLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(double)_maxTopCornerWidthLeavingRoomForKeylines:(CGRect)arg1 ;
-(void)_configureLayout:(id)arg1 withNormalSize:(CGSize)arg2 editingSize:(CGSize)arg3 addCircleOverrides:(BOOL)arg4 makeRuleBlock:(/*^block*/id)arg5 ;
-(double)_maxBottomCornerWidthLeavingRoomForKeylines:(CGRect)arg1 ;
-(double)_maxBottomCenterWidthLeavingRoomForKeylines:(CGRect)arg1 ;
-(double)_maxDateWidthLeavingRoomForKeylines;
-(double)_maxWidthForKeylineAndPadding;
-(BOOL)accommodatesTwoTopComplications;
-(void)setAccommodatesTwoTopComplications:(BOOL)arg1 ;
-(double)normalSidePadding;
-(void)setNormalSidePadding:(double)arg1 ;
-(double)normalVerticalPadding;
-(void)setNormalVerticalPadding:(double)arg1 ;
-(double)normalCircularPadding;
-(void)setNormalCircularPadding:(double)arg1 ;
-(double)deselectedKeylineSideInnerPadding;
-(void)setDeselectedKeylineSideInnerPadding:(double)arg1 ;
-(double)deselectedKeylineVerticalInnerPadding;
-(void)setDeselectedKeylineVerticalInnerPadding:(double)arg1 ;
-(double)deselectedKeylineCircularInnerPadding;
-(void)setDeselectedKeylineCircularInnerPadding:(double)arg1 ;
-(double)selectedKeylineSideInnerPadding;
-(void)setSelectedKeylineSideInnerPadding:(double)arg1 ;
-(double)selectedKeylineHeight;
-(void)setSelectedKeylineHeight:(double)arg1 ;
-(double)foregroundImageAlpha;
-(double)dateKeylineMaxWidth;
-(void)setDateKeylineMaxWidth:(double)arg1 ;
-(double)dateHorizontalCenterOffset;
-(void)setDateHorizontalCenterOffset:(double)arg1 ;
-(double)dateVerticalCenterOffset;
-(void)setDateVerticalCenterOffset:(double)arg1 ;
-(long long)bottomCenterLayout;
@end

