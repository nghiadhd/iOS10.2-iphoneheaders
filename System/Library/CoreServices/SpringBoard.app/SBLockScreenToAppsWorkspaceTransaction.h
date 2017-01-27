/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAlertToAppsWorkspaceTransaction.h>

@class SBFAuthenticationAssertion, SBLockScreenViewControllerBase;

@interface SBLockScreenToAppsWorkspaceTransaction : SBAlertToAppsWorkspaceTransaction {

	SBFAuthenticationAssertion* _siriAuthenticationAssertion;
	SBLockScreenViewControllerBase* _lockScreenViewController;
	BOOL _hidKeyboardForTransition;
	BOOL _updateStatusBarForLockTeardown;
	BOOL _disabledAutorotationForUnlockToApp;

}
-(id)initWithTransitionRequest:(id)arg1 ;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_beginTransition;
-(BOOL)_hasPreAnimationTasks;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldAnimateTransition;
-(id)_animationToSpringBoard;
-(id)_animationToApplications;
-(void)_prepareApplicationsForActivationAnimated:(BOOL)arg1 ;
-(BOOL)_shouldUpdateUnderLockStateForForegroundScenes;
-(void)dealloc;
-(id)debugDescription;
-(void)_didComplete;
-(void)_begin;
@end

