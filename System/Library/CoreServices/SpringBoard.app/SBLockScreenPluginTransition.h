/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenPlugin, SBLockScreenViewControllerBase;

@interface SBLockScreenPluginTransition : NSObject {

	SBLockScreenPlugin* _fromPlugin;
	SBLockScreenPlugin* _toPlugin;
	SBLockScreenViewControllerBase* _viewController;

}

@property (nonatomic,readonly) SBLockScreenPlugin * fromPlugin;                              //@synthesize fromPlugin=_fromPlugin - In the implementation block
@property (nonatomic,readonly) SBLockScreenPlugin * toPlugin;                                //@synthesize toPlugin=_toPlugin - In the implementation block
@property (nonatomic,readonly) SBLockScreenViewControllerBase * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(id)transitionFromPlugin:(id)arg1 toPlugin:(id)arg2 viewController:(id)arg3 ;
-(id)initWithFromPlugin:(id)arg1 toPlugin:(id)arg2 viewController:(id)arg3 ;
-(void)_removeFromView;
-(void)_addToView;
-(void)_removeViewFromHierarchy:(id)arg1 ;
-(SBLockScreenPlugin *)fromPlugin;
-(SBLockScreenPlugin *)toPlugin;
-(SBLockScreenViewControllerBase *)viewController;
-(void)beginTransition;
@end

