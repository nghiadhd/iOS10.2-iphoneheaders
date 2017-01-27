/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIFullscreenAlertController.h>

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController {

	UIView* _topBar;
	UIView* _bottomBar;
	BOOL _animatingIn;
	BOOL _animatingOut;

}

@property (nonatomic,readonly) UIView * topBar;                 //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,readonly) UIView * bottomBar;              //@synthesize bottomBar=_bottomBar - In the implementation block
-(id)backgroundView;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)viewDidLoad;
-(BOOL)isSlidingViewController;
-(void)finishedAnimatingIn;
-(void)viewWillAnimateIn;
-(void)viewWillAnimateOut;
-(void)animateViewIn;
-(void)animateViewOut;
-(BOOL)viewIsReadyToBeRemoved;
-(BOOL)hasTranslucentBackground;
-(id)newTopBar;
-(id)newBottomBar;
-(BOOL)isShowingWallpaper;
-(BOOL)shouldShowBottomBar;
-(void)_performAnimateDisplayIn;
-(double)_slideOutAnimationDelay;
-(double)_slideOutAnimationDuration;
-(void)_viewAnimatedOut;
-(BOOL)_animatingToHomescreenWallpaper;
-(double)_animationDelayForOthersActivation;
-(void)updateSpringBoardInPreparationForTransparentDismiss;
-(UIView *)bottomBar;
-(UIView *)topBar;
@end

