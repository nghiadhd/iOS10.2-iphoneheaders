/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/PassesLockScreenPlugin.lockbundle/PassesLockScreenPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassesLockScreenPlugin/PassesLockScreenPlugin-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <PassesLockScreenPlugin/WLLockScreenCardViewDelegate.h>

@protocol WLLockScreenViewDataSource, WLLockScreenViewDelegate;
@class UIView, UIScrollView, UIPageControl, NSMutableSet, PKPassFooterView, PKSecureElement, NSString;

@interface WLLockScreenView : UIView <UIScrollViewDelegate, WLLockScreenCardViewDelegate> {

	UIView* _fadeView;
	UIScrollView* _verticalScrollView;
	UIScrollView* _pageScrollView;
	UIPageControl* _pageControl;
	NSMutableSet* _visiblePages;
	NSMutableSet* _recycledPages;
	PKPassFooterView* _passFooterView;
	BOOL _showingFooter;
	PKSecureElement* _secureElement;
	id<WLLockScreenViewDataSource> _dataSource;
	id<WLLockScreenViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLLockScreenViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WLLockScreenViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * translatedView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateAlphasAndBacklight;
-(void)_jumpToPage:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_configurePage:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setOffscreen:(BOOL)arg1 ;
-(BOOL)_hasVisiblePageForIndex:(unsigned long long)arg1 ;
-(void)_dismissIfAppropriate;
-(void)lockScreenCardView:(id)arg1 resizeButtonPressedForPass:(id)arg2 ;
-(void)pageChanged;
-(void)setFadeAlpha:(double)arg1 ;
-(UIView *)translatedView;
-(void)setSubviewAlpha:(double)arg1 ;
-(void)_updateNumberOfPages;
-(void)lockScreenCardView:(id)arg1 flipButtonPressedForPass:(id)arg2 ;
-(long long)_footerState;
-(void)_updatePassFooterViewIfNecessaryAnimated:(BOOL)arg1 becomeVisibleDelay:(double)arg2 ;
-(void)_updatePageScrollViewContentSize;
-(void)_handleDidReceiveSuccessfulTransaction:(id)arg1 ;
-(void)_jumpToPage:(unsigned long long)arg1 ;
-(BOOL)_canShowPassFooterForPassView:(id)arg1 ;
-(void)reloadCardAtIndex:(unsigned long long)arg1 ;
-(id)_visiblePageForIndex:(unsigned long long)arg1 ;
-(id)_dequeueRecycledPage;
-(CGRect)_footerViewFrameForPassView:(id)arg1 ;
-(void)_tilePagesEagerly:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDataSource:(id<WLLockScreenViewDataSource>)arg1 ;
-(void)setDelegate:(id<WLLockScreenViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<WLLockScreenViewDataSource>)dataSource;
-(id<WLLockScreenViewDelegate>)delegate;
-(unsigned long long)currentIndex;
-(void)willDisappear;
-(void)didAppear;
-(void)_updatePageControl;
-(void)_updatePassFooterViewAnimated:(BOOL)arg1 ;
-(void)_showPassFooterView:(BOOL)arg1 forPassView:(id)arg2 animated:(BOOL)arg3 delay:(double)arg4 completion:(/*^block*/id)arg5 ;
@end

