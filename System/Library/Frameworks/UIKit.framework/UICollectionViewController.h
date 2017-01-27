/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIKeyboardAutoRespondingScrollViewController.h>
#import <UIKit/UICollectionViewFocusDelegate_Legacy.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionViewLayout, UICollectionView, UILongPressGestureRecognizer, UIAutoRespondingScrollViewControllerKeyboardSupport, NSString;

@interface UICollectionViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UICollectionViewFocusDelegate_Legacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionViewLayout* _layout;
	UICollectionView* _collectionView;
	UILongPressGestureRecognizer* _reorderingGesture;
	UIAutoRespondingScrollViewControllerKeyboardSupport* _keyboardSupport;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned useLayoutToLayoutNavigationTransitions : 1;
		unsigned installsStandardReorderingGesture : 1;
	}  _collectionViewControllerFlags;

}

@property (nonatomic,retain) UICollectionView * collectionView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear; 
@property (assign,nonatomic) BOOL useLayoutToLayoutNavigationTransitions; 
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout; 
@property (assign,nonatomic) BOOL installsStandardGestureForInteractiveMovement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_scrollView,nonatomic,retain,readonly) UIScrollView*<_UIKeyboardAutoRespondingScrollView> scrollView; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)dataSource;
-(id)delegate;
-(UICollectionViewLayout *)collectionViewLayout;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_scrollView;
-(UICollectionView *)collectionView;
-(id)contentScrollView;
-(void)viewWillUnload;
-(void)__viewDidAppear:(BOOL)arg1 ;
-(void)__viewWillAppear:(BOOL)arg1 ;
-(id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(BOOL)useLayoutToLayoutNavigationTransitions;
-(id)_uiCollectionView;
-(void)_clearSharedView;
-(void)_setSharedCollectionView:(id)arg1 ;
-(void)_setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 withCheck:(BOOL)arg2 ;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(BOOL)_shouldRespondToPreviewingMethods;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forPosition:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)previewViewControllerForItemAtIndexPath:(id)arg1 ;
-(void)_updateCollectionViewLayoutAndDelegate:(id)arg1 ;
-(id)_wrappingView;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)_installReorderingGestureIfNecessary;
-(void)willPresentPreviewViewController:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)_handleReorderingGesture:(id)arg1 ;
-(BOOL)shouldCrossFadeNavigationBar;
-(BOOL)shouldCrossFadeBottomBars;
-(void)setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 ;
-(BOOL)installsStandardGestureForInteractiveMovement;
-(void)setInstallsStandardGestureForInteractiveMovement:(BOOL)arg1 ;
@end

