/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UILayoutArrangement.h>
#import <UIKit/_UIOLAPropertySource.h>

@class NSMapTable, NSString, NSSet;

@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource> {

	NSMapTable* _spacingOrCenteringGuides;
	NSMapTable* _edgeToEdgeConstraints;
	NSMapTable* _relatedDimensionConstraints;
	NSMapTable* _hidingDimensionConstraints;
	NSMapTable* _multilineTextWidthDisambiguationConstraints;
	double _proportionalFillDenominator;
	BOOL _itemOrderingChanged;
	BOOL _itemFittingSizeChanged;
	BOOL _baselineRelativeArrangement;
	double _spacing;
	long long _distribution;

}

@property (assign,nonatomic) double spacing;                                                                     //@synthesize spacing=_spacing - In the implementation block
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement;              //@synthesize baselineRelativeArrangement=_baselineRelativeArrangement - In the implementation block
@property (assign,nonatomic) long long distribution;                                                             //@synthesize distribution=_distribution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (assign,setter=_setItemOrderingChanged:,nonatomic) BOOL _itemOrderingChanged;                          //@synthesize itemOrderingChanged=_itemOrderingChanged - In the implementation block
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) BOOL _itemFittingSizeChanged;                    //@synthesize itemFittingSizeChanged=_itemFittingSizeChanged - In the implementation block
+(Class)_configurationHistoryClass;
-(void)removeItem:(id)arg1 ;
-(void)_visibilityParameterChangedForItem:(id)arg1 ;
-(unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1 ;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_hasStaleConfiguration;
-(void)_updateConfigurationHistory;
-(void)_updateArrangementConstraints;
-(void)_clearAllConstraintsArrays;
-(id)_identifierForSpanningLayoutGuide;
-(void)setDistribution:(long long)arg1 ;
-(double)_calculatedIntrinsicHeight;
-(long long)distribution;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)_didEvaluateMultilineHeightForView:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForItem:(id)arg1 ;
-(id)_baselineViewVendTallest:(BOOL)arg1 forFirstBaseline:(BOOL)arg2 ;
-(BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg1 ;
-(void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1 ;
-(BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
-(void)_setItemOrderingChanged:(BOOL)arg1 ;
-(void)_setItemFittingSizeChanged:(BOOL)arg1 ;
-(BOOL)_itemOrderingChanged;
-(BOOL)_itemFittingSizeChanged;
-(id)_firstVisibleItem;
-(id)_lastVisibleItem;
-(void)_trackChangesAffectingExternalBaselineConstraints:(/*^block*/id)arg1 ;
-(id)_orderedConfigurationHistory;
-(id)_orderedPropertySource;
-(void)_notifyCanvasesBaselineParametersDidChange;
-(BOOL)_wantsProportionalDistribution;
-(void)_cleanUpGuides;
-(id)_dimensionRefItemFromConstraint:(id)arg1 ;
-(void)_cleanUpGuideAtGapFollowingItem:(id)arg1 ;
-(double)_expectedEdgeToEdgeSpacingForFirstItem:(id)arg1 secondItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4 ;
-(double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfVisibleItems:(unsigned long long)arg1 ;
-(long long)_minAttributeForGapConstraintRespectingBaselineRelative:(BOOL)arg1 ;
-(long long)_minAttributeForGapConstraint;
-(long long)_maxAttributeForGapConstraintRespectingBaselineRelative:(BOOL)arg1 ;
-(id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4 ;
-(long long)_precedingLocationAttributeForGuideConstraint;
-(void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(BOOL)arg3 isLastGap:(BOOL)arg4 ;
-(id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)arg1 ;
-(void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg1 ;
-(void)_setUpHidingDimensionConstraintForItem:(id)arg1 ;
-(BOOL)_itemCountChanged;
-(void)_cleanUpWithoutResettingKeepAliveWorkaround;
-(void)_removeGuideAndConstraintGroupsAsNecessary;
-(void)_removeIndividualGuidesAndConstraintsAsNecessary;
-(void)_adjustConstraintConstantsIfPossible;
-(void)_insertIndividualGuidesAndConstraintsAsNecessary;
-(id)_tallestItem;
-(id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)arg1 ;
@end

