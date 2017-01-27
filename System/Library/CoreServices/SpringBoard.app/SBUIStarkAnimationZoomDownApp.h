/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class SBAlert, UIView;

@interface SBUIStarkAnimationZoomDownApp : SBUIStarkScreenAnimationController {

	SBAlert* _alertImpersonator;
	UIView* _viewToAnimate;

}
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(double)animationDelay;
-(id)initWithDeactivatingApp:(id)arg1 withAlertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(BOOL)prefersLayerHostSnapshot;
-(id)initWithDeactivatingApp:(id)arg1 starkScreenController:(id)arg2 ;
-(void)dealloc;
-(id)animationSettings;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(double)animationDuration;
-(double)animationStartTime;
-(void)_startAnimation;
@end

