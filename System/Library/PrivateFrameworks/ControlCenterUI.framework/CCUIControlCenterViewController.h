/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterContainerViewDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterPageContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterObserver.h>

@protocol CCUIControlCenterViewControllerDelegate;
@class CCUIControlCenterPageContainerViewController, NSMutableArray, NSArray, CCUISystemControlsPageViewController, CCUIControlCenterContainerView, CCUIImmediateTouchScrollView, CCUIControlCenterPageControl, UIPanGestureRecognizer, UITapGestureRecognizer, CCUIControlCenterSettings, NSString;

@interface CCUIControlCenterViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, CCUIControlCenterContainerViewDelegate, CCUIControlCenterPageContainerViewControllerDelegate, CCUIControlCenterObserver> {

	CCUIControlCenterPageContainerViewController* _selectedViewController;
	NSMutableArray* _allPageContainerViewControllers;
	NSArray* _sortedVisibleViewControllers;
	CCUISystemControlsPageViewController* _systemControlsPage;
	BOOL _needsViewControllerVisibilityUpdate;
	CCUIControlCenterContainerView* _containerView;
	CCUIImmediateTouchScrollView* _pagesScrollView;
	CCUIControlCenterPageControl* _pageControl;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _tapGesture;
	UITapGestureRecognizer* _iPadScrollToAdjacentPageGesture;
	CCUIControlCenterSettings* _settings;
	NSMutableArray* _pagingScrollViewAnimationCompletionBlocks;
	BOOL _presented;
	BOOL _transitioning;
	id<CCUIControlCenterViewControllerDelegate> _delegate;

}

@property (assign,getter=isPresented,nonatomic) BOOL presented;                                                          //@synthesize presented=_presented - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                                  //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic,__weak) CCUIControlCenterPageContainerViewController * _selectedViewController;              //@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIControlCenterViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double revealPercentage; 
@property (nonatomic,readonly) unsigned long long numberOfActivePages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)notifyControlCenterControl:(id)arg1 didActivate:(BOOL)arg2 ;
-(id)init;
-(void)setDelegate:(id<CCUIControlCenterViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<CCUIControlCenterViewControllerDelegate>)delegate;
-(id)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)isTransitioning;
-(void)viewDidLoad;
-(id)viewControllers;
-(void)_handleTap:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(long long)_currentOrientation;
-(long long)layoutStyle;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)_layoutScrollView;
-(void)_removeContentViewController:(id)arg1 ;
-(void)_addContentViewController:(id)arg1 ;
-(CCUIControlCenterPageContainerViewController *)_selectedViewController;
-(id)contentViewControllers;
-(void)_updateScrollViewContentSize;
-(BOOL)isPresented;
-(id)scrollViewForContainerView:(id)arg1 ;
-(id)pageControlForContainerView:(id)arg1 ;
-(UIEdgeInsets)pageInsetForContainerView:(id)arg1 ;
-(double)contentHeightForContainerView:(id)arg1 ;
-(UIEdgeInsets)marginInsetForContainerView:(id)arg1 ;
-(id)pagePlatterViewsForContainerView:(id)arg1 ;
-(double)revealPercentage;
-(void)setRevealPercentage:(double)arg1 ;
-(void)abortAnimatedTransition;
-(void)_dismissAirDropWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentAirDropWithCompletion:(/*^block*/id)arg1 ;
-(void)_noteControlCenterControlDidActivate:(id)arg1 ;
-(void)_noteControlCenterControlDidDeactivate:(id)arg1 ;
-(double)_scrollviewContentMaxHeight;
-(UIEdgeInsets)_marginEdgeInsets;
-(void)setPresented:(BOOL)arg1 ;
-(void)_addOrRemovePagesBasedOnVisibility;
-(id)sortedVisibleViewControllers;
-(UIEdgeInsets)_marginInsetsForContentViewController:(id)arg1 ;
-(void)_sendDidScrollToPageToContentProvidingViewControllers;
-(unsigned long long)numberOfActivePages;
-(BOOL)_contentOffset:(CGPoint*)arg1 forChildViewController:(id)arg2 ;
-(void)_removePageViewController:(id)arg1 ;
-(void)_addPageViewController:(id)arg1 ;
-(void)_loadPages;
-(void)_handleAdjacentTap:(id)arg1 ;
-(id)_contentViewControllerForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)scrollToPage:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updatePageControl;
-(CGRect)_frameForChildViewController:(id)arg1 ;
-(void)_invalidateContentLayout;
-(double)contentHeightForOrientation:(long long)arg1 ;
-(id)_selectedContentViewController;
-(void)_presentButtonActionPlatterWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissButtonActionPlatterWithCompletion:(/*^block*/id)arg1 ;
-(void)containerViewControllerWantsDismissal:(id)arg1 ;
-(void)containerViewController:(id)arg1 backdropViewDidUpdate:(id)arg2 ;
-(void)visibilityPreferenceChangedForContainerViewController:(id)arg1 ;
-(id)platterContainer;
-(void)_setContentViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)set_selectedViewController:(CCUIControlCenterPageContainerViewController *)arg1 ;
-(id)controlCenterSystemAgent;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2 ;
@end

