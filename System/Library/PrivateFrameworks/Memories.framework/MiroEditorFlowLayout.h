/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, NSMapTable;

@interface MiroEditorFlowLayout : UICollectionViewFlowLayout {

	NSIndexPath* _snappedIndexPath;
	double _maximumCenterItemLoupeSpacing;
	NSIndexPath* _currentIndexPath;
	NSIndexPath* _neighboringIndexPath;
	double _transitionProgress;
	double _abscissa;
	NSMapTable* _initalIndexPathToCGRectMap;
	NSMapTable* _layoutIndexPathToCGRectMap;
	UIEdgeInsets _sectionInsets;

}

@property (assign,nonatomic,__weak) NSIndexPath * currentIndexPath;                  //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (assign,nonatomic,__weak) NSIndexPath * neighboringIndexPath;              //@synthesize neighboringIndexPath=_neighboringIndexPath - In the implementation block
@property (assign,nonatomic) double transitionProgress;                              //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) double abscissa;                                        //@synthesize abscissa=_abscissa - In the implementation block
@property (nonatomic,retain) NSMapTable * initalIndexPathToCGRectMap;                //@synthesize initalIndexPathToCGRectMap=_initalIndexPathToCGRectMap - In the implementation block
@property (nonatomic,retain) NSMapTable * layoutIndexPathToCGRectMap;                //@synthesize layoutIndexPathToCGRectMap=_layoutIndexPathToCGRectMap - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInsets;                             //@synthesize sectionInsets=_sectionInsets - In the implementation block
@property (nonatomic,retain) NSIndexPath * snappedIndexPath;                         //@synthesize snappedIndexPath=_snappedIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * centerCellIndexPath; 
@property (assign,nonatomic) double maximumCenterItemLoupeSpacing;                   //@synthesize maximumCenterItemLoupeSpacing=_maximumCenterItemLoupeSpacing - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayout;
-(void)setTransitionProgress:(double)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(double)transitionProgress;
-(NSIndexPath *)currentIndexPath;
-(CGSize)_sizeForItemAtIndexPath:(id)arg1 ;
-(double)maximumCenterItemLoupeSpacing;
-(CGPoint)_snappedContentOffsetForProposedContentOffset:(CGPoint)arg1 chosenLayoutAttributes:(id*)arg2 ;
-(void)setSnappedIndexPath:(NSIndexPath *)arg1 ;
-(NSMapTable *)initalIndexPathToCGRectMap;
-(NSMapTable *)layoutIndexPathToCGRectMap;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(void)setNeighboringIndexPath:(NSIndexPath *)arg1 ;
-(UIEdgeInsets)sectionInsets;
-(void)setInitalIndexPathToCGRectMap:(NSMapTable *)arg1 ;
-(void)setLayoutIndexPathToCGRectMap:(NSMapTable *)arg1 ;
-(void)setSectionInsets:(UIEdgeInsets)arg1 ;
-(CGRect)_rectForItemAtIndexPath:(id)arg1 withLoupe:(BOOL)arg2 ;
-(NSIndexPath *)centerCellIndexPath;
-(void)setAbscissa:(double)arg1 ;
-(double)abscissa;
-(double)_transitionProgressFrom:(id)arg1 abscissa:(double)arg2 outNeighborIndexPath:(id*)arg3 ;
-(BOOL)wantsLoupe;
-(NSIndexPath *)neighboringIndexPath;
-(double)_loupeAmountForIndexPath:(id)arg1 ;
-(double)_horizontalOffsetForIndexPath:(id)arg1 ;
-(NSIndexPath *)snappedIndexPath;
-(CGPoint)contentOffsetForScrollingToIndexPath:(id)arg1 transitionProgress:(double)arg2 ;
-(void)setMaximumCenterItemLoupeSpacing:(double)arg1 ;
@end

