/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBActivateAppUnderLockScreenWorkspaceTransaction.h>

@class SBWorkspaceApplication;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {

	SBWorkspaceApplication* _fromApp;
	BOOL _workspaceAlreadyResumed;
	BOOL _animatedAppDeactivation;

}
-(id)initWithTransitionRequest:(id)arg1 toLockScreenController:(id)arg2 ;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_animationDidFinish;
-(id)debugDescription;
-(void)_didComplete;
-(void)_begin;
-(id)_setupAnimation;
@end

