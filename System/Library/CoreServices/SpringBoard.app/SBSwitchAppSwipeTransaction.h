/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>
#import <SpringBoard/SBSceneLayoutWorkspaceTransactionDelegate.h>
#import <SpringBoard/SBWorkspaceTransitionLayoutDelegate.h>

@protocol SBSwitchAppSwipeTransactionDelegate;
@class SBUISwitchAppSwipeAnimationController, SBSceneLayoutWorkspaceTransaction, NSTimer, SBWorkspaceApplicationTransitionContext, SBAutoPiPWorkspaceTransaction, NSString;

@interface SBSwitchAppSwipeTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceTransitionLayoutDelegate> {

	id<SBSwitchAppSwipeTransactionDelegate> _delegate;
	SBUISwitchAppSwipeAnimationController* _animationController;
	SBSceneLayoutWorkspaceTransaction* _sceneLayoutTransaction;
	/*^block*/id _layoutCompletion;
	/*^block*/id _layoutContinuation;
	NSTimer* _delayedAppLaunchTimer;
	BOOL _trackingGesture;
	BOOL _endLayoutTransition;
	BOOL _completingAnimation;
	double _basePercentage;
	SBWorkspaceApplicationTransitionContext* _originalTransitionContext;
	SBWorkspaceApplicationTransitionContext* _startingTransitionContext;
	SBWorkspaceApplicationTransitionContext* _nextTransitionContext;
	SBWorkspaceApplicationTransitionContext* _previousTransitionContext;
	SBWorkspaceApplicationTransitionContext* _endingTransitionContext;
	SBAutoPiPWorkspaceTransaction* _autoPiPTransaction;

}

@property (assign,nonatomic,__weak) id<SBSwitchAppSwipeTransactionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTrackingGesture,nonatomic,readonly) BOOL trackingGesture;                                  //@synthesize trackingGesture=_trackingGesture - In the implementation block
@property (getter=isFinishedAnimating,nonatomic,readonly) BOOL finishedAnimating; 
@property (nonatomic,retain) SBWorkspaceApplicationTransitionContext * nextTransitionContext;                  //@synthesize nextTransitionContext=_nextTransitionContext - In the implementation block
@property (nonatomic,retain) SBWorkspaceApplicationTransitionContext * previousTransitionContext;              //@synthesize previousTransitionContext=_previousTransitionContext - In the implementation block
@property (nonatomic,readonly) SBWorkspaceApplicationTransitionContext * endingTransitionContext;              //@synthesize endingTransitionContext=_endingTransitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(id)layoutStateForTransitionContext:(id)arg1 ;
-(id)originalLayoutStateForTransitionContext:(id)arg1 ;
-(CGRect)transitionContext:(id)arg1 referenceFrameForEntity:(id)arg2 ;
-(SBWorkspaceApplicationTransitionContext *)endingTransitionContext;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 originalTransitionContext:(id)arg2 ;
-(BOOL)isTrackingGesture;
-(void)_continueLayoutTransitionToCompletion:(BOOL)arg1 startAutoPiP:(BOOL)arg2 updateScenes:(BOOL)arg3 ;
-(void)_cancelPendingAppLaunch;
-(void)_gestureEndedWithCompletionType:(long long)arg1 ;
-(void)_gestureCancelled;
-(void)_continueLayoutTransitionWithContext:(id)arg1 toCompletion:(BOOL)arg2 startAutoPiP:(BOOL)arg3 updateScenes:(BOOL)arg4 ;
-(void)_pendingAppLaunchTimerFired;
-(void)_schedulePendingAppLaunch;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(void)startTrackingGesture:(id)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(SBWorkspaceApplicationTransitionContext *)nextTransitionContext;
-(void)setNextTransitionContext:(SBWorkspaceApplicationTransitionContext *)arg1 ;
-(SBWorkspaceApplicationTransitionContext *)previousTransitionContext;
-(void)setPreviousTransitionContext:(SBWorkspaceApplicationTransitionContext *)arg1 ;
-(void)setDelegate:(id<SBSwitchAppSwipeTransactionDelegate>)arg1 ;
-(void)dealloc;
-(id<SBSwitchAppSwipeTransactionDelegate>)delegate;
-(void)_gestureChanged:(double)arg1 ;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(BOOL)isFinishedAnimating;
@end

