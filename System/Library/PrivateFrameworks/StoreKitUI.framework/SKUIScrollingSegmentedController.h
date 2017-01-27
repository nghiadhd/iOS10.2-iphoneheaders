/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingSegmentedControllerCollectionViewDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingSegmentedControllerItemContextDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingTabAppearanceStatusObserver.h>
#import <libobjc.A.dylib/SKUIScrollingTabNestedPagedScrolling.h>
#import <libobjc.A.dylib/SKUIViewControllerWithFocusedViewController.h>

@protocol SKUIScrollingSegmentedControllerDelegate;
@class UIViewController, SKUIScrollingSegmentedControllerCollectionView, SKUIScrollingSegmentedControllerNavigationBarTitleView, SKUIProxyScrollView, NSMutableArray, SKUIInteractiveSegmentedControl, NSMapTable, NSArray, NSString, UIScrollView;

@interface SKUIScrollingSegmentedController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollingSegmentedControllerCollectionViewDelegate, SKUIScrollingSegmentedControllerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIViewControllerWithFocusedViewController> {

	CGSize _contentCollectionViewItemSize;
	SKUIScrollingSegmentedControllerCollectionView* _contentCollectionView;
	SKUIScrollingSegmentedControllerNavigationBarTitleView* _navigationBarTitleView;
	SKUIProxyScrollView* _proxyScrollView;
	UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
	SCD_Struct_SK8 _scrollingTabAppearanceStatus;
	NSMutableArray* _titleObservingViewControllers;
	SKUIInteractiveSegmentedControl* _titlesSegmentedControl;
	BOOL _viewBackgroundIsWhite;
	NSMapTable* _viewControllerToItemContext;
	BOOL _scrollEnabled;
	BOOL _wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
	BOOL _wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
	id<SKUIScrollingSegmentedControllerDelegate> _delegate;
	double _maximumContentWidth;
	NSArray* _viewControllers;
	unsigned long long _focusedViewControllerIndex;

}

@property (getter=_titlesSegmentedControl,nonatomic,readonly) SKUIInteractiveSegmentedControl * titlesSegmentedControl;              //@synthesize titlesSegmentedControl=_titlesSegmentedControl - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIScrollingSegmentedControllerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double maximumContentWidth;                                                                             //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                                                                                //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic) BOOL scrollEnabled;                                                                                     //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets segmentedControlContentEdgeInsets; 
@property (assign,nonatomic) double segmentedControlHeight; 
@property (assign,nonatomic) long long segmentedControlLayoutStyle; 
@property (nonatomic,readonly) unsigned long long focusedViewControllerIndex;                                                        //@synthesize focusedViewControllerIndex=_focusedViewControllerIndex - In the implementation block
@property (nonatomic,readonly) SKUIScrollingSegmentedControllerNavigationBarTitleView * navigationBarTitleView;                      //@synthesize navigationBarTitleView=_navigationBarTitleView - In the implementation block
@property (assign,nonatomic) BOOL wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;                                                    //@synthesize wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing=_wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing - In the implementation block
@property (assign,nonatomic) BOOL wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;                                                   //@synthesize wantsWhiteBackgroundBeyondRightEdgeWhenBouncing=_wantsWhiteBackgroundBeyondRightEdgeWhenBouncing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollingTabNestedPagingScrollView; 
@property (nonatomic,readonly) UIViewController * focusedViewController; 
-(id)music_reportingFeatureName;
-(id)music_reportingRecommendationData;
-(void)setDelegate:(id<SKUIScrollingSegmentedControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<SKUIScrollingSegmentedControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setMaximumContentWidth:(double)arg1 ;
-(double)maximumContentWidth;
-(void)setClientContext:(id)arg1 ;
-(BOOL)scrollEnabled;
-(void)selectViewControllerAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(SCD_Struct_SK8)arg1 ;
-(UIScrollView *)scrollingTabNestedPagingScrollView;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1 ;
-(SKUIScrollingSegmentedControllerNavigationBarTitleView *)navigationBarTitleView;
-(void)replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2 ;
-(void)_updateScrollViewContentOffsetsToTargetContentOffsets;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(void)scrollViewDidMoveToWindow:(id)arg1 ;
-(void)_titlesSegmentedControlValueChangeAction:(id)arg1 ;
-(void)_updateViewBackgroundColor;
-(void)_reloadTitleSegments;
-(void)_updateTitlesSelectionProgress;
-(unsigned long long)focusedViewControllerIndex;
-(BOOL)_configureSegment:(id)arg1 forViewController:(id)arg2 ;
-(UIEdgeInsets)_viewControllerContentScrollViewContentInset;
-(id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(BOOL)arg1 ;
-(void)_setViewControllers:(id)arg1 viewUpdatesHandler:(/*^block*/id)arg2 ;
-(void)_scrollToTitlesSelectionProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateTitleValueObservation;
-(void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)arg1 ;
-(void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)arg1 ;
-(UIViewController *)focusedViewController;
-(UIEdgeInsets)segmentedControlContentEdgeInsets;
-(void)setSegmentedControlContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)segmentedControlHeight;
-(void)setSegmentedControlHeight:(double)arg1 ;
-(long long)segmentedControlLayoutStyle;
-(void)setSegmentedControlLayoutStyle:(long long)arg1 ;
-(void)setWantsWhiteBackgroundBeyondLeftEdgeWhenBouncing:(BOOL)arg1 ;
-(void)setWantsWhiteBackgroundBeyondRightEdgeWhenBouncing:(BOOL)arg1 ;
-(void)_viewControllerNeedsContentScrollViewUpdates:(id)arg1 ;
-(BOOL)wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
-(BOOL)wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
-(id)_titlesSegmentedControl;
@end

