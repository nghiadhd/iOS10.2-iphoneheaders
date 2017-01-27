/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, _UIOrderedLayoutArrangement, _UIAlignedLayoutArrangement, NSArray;

@interface UIStackView : UIView {

	NSMutableArray* _mutableLayoutArrangements;
	_UIOrderedLayoutArrangement* _distributionArrangement;
	_UIAlignedLayoutArrangement* _alignmentArrangement;
	BOOL _didRequestTallestBaselineViewForFirst;
	BOOL _didRequestTallestBaselineViewForLast;
	BOOL _viewForFirstBaselineLayoutDidChange;
	BOOL _viewForLastBaselineLayoutDidChange;
	BOOL _layoutMarginsRelativeArrangement;

}

@property (assign,nonatomic) long long _mk_axis; 
@property (nonatomic,copy,readonly) NSArray * arrangedSubviews; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) long long distribution; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) double spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,getter=isLayoutMarginsRelativeArrangement,nonatomic) BOOL layoutMarginsRelativeArrangement;              //@synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement - In the implementation block
+(Class)layerClass;
-(long long)_mk_axis;
-(void)set_mk_axis:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(id)_mutableLayoutArrangements;
-(BOOL)_hasLayoutArrangements;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)updateConstraints;
-(long long)axis;
-(id)viewForLastBaselineLayout;
-(long long)alignment;
-(void)setAxis:(long long)arg1 ;
-(void)_vendedBaselineViewParametersDidChange;
-(void)setDistribution:(long long)arg1 ;
-(double)_calculatedIntrinsicHeight;
-(NSArray *)arrangedSubviews;
-(void)removeArrangedSubview:(id)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(long long)distribution;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(BOOL*)arg4 ;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1 ;
-(void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)setLayoutMarginsRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isLayoutMarginsRelativeArrangement;
-(BOOL)_shouldRequestTallestBaselineViewForFirst:(BOOL)arg1 ;
-(id)_baselineViewForFirst:(BOOL)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setArrangedSubviews:(NSArray *)arg1 ;
-(void)_vendedBaselineViewDidMoveForFirst:(BOOL)arg1 ;
-(BOOL)_recordBaselineLoweringInfo;
-(double)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(long long)arg2 ;
@end

