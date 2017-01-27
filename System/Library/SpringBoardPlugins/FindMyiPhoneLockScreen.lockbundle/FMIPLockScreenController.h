/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/FindMyiPhoneLockScreen.lockbundle/FindMyiPhoneLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBLockScreenPluginController.h>

@protocol SBLockScreenPluginAgent;
@class SBLockScreenPluginAction, UIStoryboard, FMIPLockScreenViewController, NSString, _UILegibilitySettings;

@interface FMIPLockScreenController : NSObject <SBLockScreenPluginController> {

	id<SBLockScreenPluginAgent> pluginAgent;
	UIStoryboard* __mainStoryboard;
	FMIPLockScreenViewController* __mainViewController;

}

@property (nonatomic,retain) UIStoryboard * _mainStoryboard;                                                          //@synthesize _mainStoryboard=__mainStoryboard - In the implementation block
@property (nonatomic,retain) FMIPLockScreenViewController * _mainViewController;                                      //@synthesize _mainViewController=__mainViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent; 
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
-(void)stopAlarm;
-(void)set_mainViewController:(FMIPLockScreenViewController *)arg1 ;
-(FMIPLockScreenViewController *)_mainViewController;
-(UIStoryboard *)_mainStoryboard;
-(void)set_mainStoryboard:(UIStoryboard *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)mainViewController;
-(void)setPluginAgent:(id<SBLockScreenPluginAgent>)arg1 ;
-(BOOL)pluginAnimatesAppearanceTransition:(BOOL)arg1 ;
-(void)pluginWillActivateWithContext:(id)arg1 ;
-(void)pluginDidDeactivateWithContext:(id)arg1 ;
-(BOOL)pluginHandleEvent:(long long)arg1 ;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(long long)pluginPriority;
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;
-(void)_addObservers;
@end

