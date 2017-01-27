/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVMLCollectionViewController.h>
#import <TVMLKit/TVShelfViewLayoutDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol __TVShelfViewControllerDelegate;
@class NSIndexPath, NSString;

@interface _TVShelfViewController : _TVMLCollectionViewController <TVShelfViewLayoutDelegate, UICollectionViewDelegateFlowLayout> {

	NSIndexPath* _pendingPreviewedIndexPath;
	NSIndexPath* _lastPreviewedIndexPath;
	double _lastPreviewDelay;
	unsigned long long _autohighlightScrollPosition;
	BOOL _centered;
	id<__TVShelfViewControllerDelegate> _delegate;
	unsigned long long _speedBumpEdges;

}

@property (assign,nonatomic,__weak) id<__TVShelfViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long speedBumpEdges;                                //@synthesize speedBumpEdges=_speedBumpEdges - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;                                  //@synthesize centered=_centered - In the implementation block
@property (assign,nonatomic) BOOL hideHeader; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<__TVShelfViewControllerDelegate>)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<__TVShelfViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)speedBumpEdges;
-(void)setSpeedBumpEdges:(unsigned long long)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setCentered:(BOOL)arg1 ;
-(BOOL)isCentered;
-(void)updateWithViewElement:(id)arg1 cellMetrics:(TVCellMetrics)arg2 ;
-(void)_delayedUpdatePreview;
-(void)_ensureScrollViewSnapsToItemForSize:(CGSize)arg1 ;
-(void)_scrollToIndexPath:(id)arg1 ;
-(void)_updatedPreviewWithItemAtIndexPath:(id)arg1 ;
-(id)_findSnappingItemFromContentOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_snapTargetContentOffset:(inout CGPoint*)arg1 toItemIndexPath:(id)arg2 atItemOffset:(CGPoint)arg3 inSize:(CGSize)arg4 ;
-(void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)makeCollectionViewWithFrame:(CGRect)arg1 ;
-(void)updateViewLayoutAnimated:(BOOL)arg1 relayout:(BOOL)arg2 ;
-(void)setHideHeader:(BOOL)arg1 ;
-(BOOL)hideHeader;
@end

