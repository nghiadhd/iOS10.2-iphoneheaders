/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenViewControllerBase, UIView, SBFakeStatusBarView, SBDisableAppStatusBarAlphaChangesAssertion, SBAppStatusBarSettingsAssertion;

@interface SBLockScreenClippedSlideController : NSObject {

	SBLockScreenViewControllerBase* _lockscreenVC;
	UIView* _clippingView;
	UIView* _viewToClip;
	UIView* _statusBarContainer;
	BOOL _wantsFakeStatusBar;
	BOOL _shouldSlideLockScreenView;
	BOOL _cleanupManually;
	BOOL _needsCleanup;
	BOOL _hidesSpringBoardStatusBarInitially;
	SBFakeStatusBarView* _fakeStatusBar;
	SBDisableAppStatusBarAlphaChangesAssertion* _statusBarAssertion;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;

}

@property (nonatomic,retain) UIView * viewToClip;                                  //@synthesize viewToClip=_viewToClip - In the implementation block
@property (assign,nonatomic) BOOL wantsFakeStatusBar;                              //@synthesize wantsFakeStatusBar=_wantsFakeStatusBar - In the implementation block
@property (assign,nonatomic) BOOL hidesSpringBoardStatusBarInitially;              //@synthesize hidesSpringBoardStatusBarInitially=_hidesSpringBoardStatusBarInitially - In the implementation block
@property (assign,nonatomic) BOOL shouldSlideLockScreenView;                       //@synthesize shouldSlideLockScreenView=_shouldSlideLockScreenView - In the implementation block
@property (assign,nonatomic) BOOL cleanupManually;                                 //@synthesize cleanupManually=_cleanupManually - In the implementation block
-(id)initWithLockScreenViewController:(id)arg1 ;
-(void)_setupAndAddFakeStatusBarIfNecessary;
-(/*^block*/id)_stepperForTransition:(int)arg1 ;
-(/*^block*/id)_completionForTransition:(int)arg1 ;
-(void)performTransition:(int)arg1 withAnimator:(/*^block*/id)arg2 ;
-(void)setViewToClip:(UIView *)arg1 ;
-(void)performTransition:(int)arg1 duration:(double)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)cleanupIfNecessary;
-(UIView *)viewToClip;
-(BOOL)cleanupManually;
-(void)setCleanupManually:(BOOL)arg1 ;
-(BOOL)wantsFakeStatusBar;
-(void)setWantsFakeStatusBar:(BOOL)arg1 ;
-(BOOL)shouldSlideLockScreenView;
-(void)setShouldSlideLockScreenView:(BOOL)arg1 ;
-(BOOL)hidesSpringBoardStatusBarInitially;
-(void)setHidesSpringBoardStatusBarInitially:(BOOL)arg1 ;
-(void)dealloc;
-(void)_cleanup;
@end

