/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SBLockScreenPluginViewController.h>
#import <libobjc.A.dylib/SBLockScreenPluginController.h>

@protocol SBLockScreenPluginAgent;
@class SBLockScreenPluginAction, SBLockScreenPluginMutableAppearanceContext, NSString, _UILegibilitySettings;

@interface SBAwayViewPluginController : UIViewController <SBLockScreenPluginViewController, SBLockScreenPluginController> {

	id<SBLockScreenPluginAgent> _agent;
	SBLockScreenPluginMutableAppearanceContext* _appearance;
	BOOL _viewCanBeDisplayed;

}

@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) BOOL viewCanBeDisplayed;                                                                 //@synthesize viewCanBeDisplayed=_viewCanBeDisplayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent;                                          //@synthesize agent=_agent - In the implementation block
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
+(void)enableBundleNamed:(id)arg1 activationContext:(id)arg2 ;
+(void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
+(void)enableBundleNamed:(id)arg1 ;
+(void)disableBundleNamed:(id)arg1 ;
-(id)init;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(long long)presentationStyle;
-(id)_legibilitySettings;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_updateAppearance;
-(id)customHeaderView;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(BOOL)handleMenuButtonTap;
-(void)setActivationContext:(id)arg1 ;
-(long long)notificationBehavior;
-(BOOL)viewCanBeDisplayed;
-(BOOL)showStatusBar;
-(BOOL)showDateView;
-(BOOL)hasCustomSubtitle;
-(id)customSubtitleText;
-(id)customSubtitleColor;
-(BOOL)showDate;
-(BOOL)allowsTimer;
-(BOOL)allowsSiri;
-(BOOL)allowsLockScreenCamera;
-(BOOL)allowsUnlocking;
-(BOOL)allowsLogout;
-(BOOL)wantsMesaAutoUnlock;
-(BOOL)allowsLockScreenMediaControls;
-(BOOL)allowsControlCenter;
-(BOOL)allowsNotificationCenter;
-(long long)overlayStyle;
-(BOOL)legibilitySettingsOverridesVibrancy;
-(BOOL)isContentViewWhiteUnderSlideToUnlockText;
-(void)_updateAppearanceAndNotify:(BOOL)arg1 ;
-(void)setDeactivationContext:(id)arg1 ;
-(void)purgeView;
-(void)setPluginAgent:(id<SBLockScreenPluginAgent>)arg1 ;
-(id)slideToUnlockText;
-(id)bundleIDForUnlock;
-(unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1 ;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldDisableOnRelock;
-(/*^block*/id)enableTransitionBlock;
-(BOOL)viewWantsOverlayLayout;
-(BOOL)disablesAwayItemsCompletely;
-(BOOL)shouldAutoHideNotifications;
-(BOOL)pluginAnimatesAppearanceTransition:(BOOL)arg1 ;
-(id)pluginAnimateAppearanceTransition:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pluginWillActivateWithContext:(id)arg1 ;
-(void)pluginDidDeactivateWithContext:(id)arg1 ;
-(BOOL)pluginHandleEvent:(long long)arg1 ;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(long long)pluginPriority;
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;
-(SBLockScreenPluginAction *)pluginUnlockAction;
-(void)setViewCanBeDisplayed:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)allowsLockScreenHint;
-(BOOL)animateResumingToApplicationWithIdentifier:(id)arg1 ;
-(BOOL)showBatteryChargingText;
-(BOOL)allowsPhotoSlideshow;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)wantsMenuButtonHeldEvent;
-(BOOL)handleMenuButtonHeld;
-(void)setNeedsLegibilityAppearanceUpdate;
-(void)disable;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)handleLockButtonPressed;
@end

