/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenViewControllerBase.h>
#import <SpringBoard/SBLockScreenBatteryChargingViewControllerDelegate.h>
#import <SpringBoard/SBLoginAppSceneHosterDelegate.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoard/SBLockScreenPluginManagerDelegate.h>

@protocol SBLoginAppSceneHoster;
@class SBLockScreenBatteryChargingViewController, SBLockScreenTemperatureWarningViewController, SBLoginAppContainerPluginWrapperViewController, SBAppStatusBarSettingsAssertion, NSMutableSet, SBLockScreenPluginManager, SBWallpaperController, NSHashTable, NSString;

@interface SBLoginAppContainerViewController : SBLockScreenViewControllerBase <SBLockScreenBatteryChargingViewControllerDelegate, SBLoginAppSceneHosterDelegate, SBWallpaperObserver, SBLockScreenPluginManagerDelegate> {

	id<SBLoginAppSceneHoster> _sceneHoster;
	SBLockScreenBatteryChargingViewController* _batteryChargingViewController;
	SBLockScreenTemperatureWarningViewController* _thermalWarningViewController;
	SBLoginAppContainerPluginWrapperViewController* _pluginWrapperViewController;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	NSMutableSet* _showStatusBarReasons;
	long long _idleTimerMode;
	SBLockScreenPluginManager* _pluginManager;
	SBWallpaperController* _wallpaperController;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateLegibility;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)_displayLayoutElementIdentifier;
-(BOOL)showsSpringBoardStatusBar;
-(BOOL)suppressesControlCenter;
-(BOOL)allowsStackingOfAlert:(id)arg1 ;
-(void)enableLockScreenPluginWithContext:(id)arg1 ;
-(void)disableLockScreenPluginWithContext:(id)arg1 ;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(void)chargingViewControllerFadedOutContent:(id)arg1 ;
-(void)noteDeviceBlockedStatusUpdated;
-(void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2 ;
-(void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2 ;
-(void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2 ;
-(void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2 ;
-(void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3 ;
-(BOOL)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3 ;
-(BOOL)canUIUnlockFromSource:(int)arg1 ;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(BOOL)isSystemGesturePermittedForPresentingController:(id)arg1 ;
-(BOOL)wantsLockScreenIdleTimer;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(id)_statusBarSettingsAssertion;
-(id)_hostedAppView;
-(void)addLoginObserver:(id)arg1 ;
-(void)removeLoginObserver:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 sceneHoster:(id)arg3 wallpaperController:(id)arg4 ;
-(void)_handleBacklightFadeEnded;
-(void)_reallyRelinquishStatusBarAssertion;
-(void)_showOrHideThermalTrapUIAnimated:(BOOL)arg1 ;
-(void)_updateBatteryChargingViewAnimated:(BOOL)arg1 ;
-(id)loginContainerView;
-(void)_showStatusBarForReason:(id)arg1 ;
-(void)_hideStatusBarForReason:(id)arg1 ;
-(void)_reallyAcquireStatusBarAssertionIfNecessaryInitiallyVisible:(BOOL)arg1 ;
-(void)_setupLoginScene;
-(void)_cleanupBatteryChargingViewWithAnimationDuration:(double)arg1 ;
-(void)_addBatteryChargingView;
-(void)_fadeViewsForChargingViewVisible:(BOOL)arg1 ;
-(void)_removeBatteryChargingView;
-(void)sceneDeactivatedWithError:(id)arg1 ;
-(void)sceneUpdatedIdleTimerMode:(long long)arg1 ;
-(void)sceneUpdatedStatusBarUserName:(id)arg1 ;
-(void)sceneUpdatedRotationMode:(long long)arg1 ;
-(id)_initWithSceneHoster:(id)arg1 wallpaperController:(id)arg2 ;
-(BOOL)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)prepareToEnterLostMode;
-(void)noteExitingLostMode;
-(BOOL)shouldDisableALS;
-(void)_setupLoginAppHosting;
-(void)_killLoginApp;
-(id)_hostedAppBundleID;
-(id)_hostedSceneIdentifier;
-(void)dealloc;
-(void)deactivate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)activate;
-(BOOL)hasTranslucentBackground;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)handleMenuButtonDoubleTap;
@end

