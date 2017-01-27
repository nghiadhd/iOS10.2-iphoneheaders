/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBMainAlertManager, SBAlert;

@interface SBUIAnimationFadeAlertToAlert : SBUIMainScreenAnimationController {

	SBMainAlertManager* _alertManager;
	SBAlert* _fromAlert;
	SBAlert* _toAlert;
	BOOL _alertIsTransparent;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(id)animationSettings;
-(double)_animationDuration;
-(void)_startAnimation;
@end
