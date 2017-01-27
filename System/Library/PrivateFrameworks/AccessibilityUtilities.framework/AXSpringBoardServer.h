/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXServer.h>
#import <libobjc.A.dylib/AXSystemAppServer.h>

@class AXAccessQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface AXSpringBoardServer : AXServer <AXSystemAppServer> {

	AXAccessQueue* _accessQueue;
	/*^block*/id _currentAlertHandler;
	NSMutableArray* _actionHandlers;
	NSMutableDictionary* _reachabilityHandlers;

}

@property (nonatomic,retain) AXAccessQueue * accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,copy) id currentAlertHandler;                                    //@synthesize currentAlertHandler=_currentAlertHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionHandlers;                         //@synthesize actionHandlers=_actionHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reachabilityHandlers;              //@synthesize reachabilityHandlers=_reachabilityHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)appNameForDisplayID:(id)arg1 ;
-(void)gaxDisconnectAllCalls;
-(void)gaxEndRequiringWallpaper;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX8)arg1 ;
-(void)gaxFrontmostAppDidCheckIn:(id)arg1 ;
-(BOOL)gaxIsSystemAppHostingFacetimeCall:(int*)arg1 ;
-(void)gaxUpdateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactorNumber:(id)arg2 centerStringRepresentation:(id)arg3 animationDurationNumber:(id)arg4 ;
-(void)stopHostingWorkspaceApplicationImmediately;
-(BOOL)gaxLaunchApplication:(id)arg1 withConfiguration:(unsigned)arg2 appLaunchGeneration:(unsigned long long)arg3 enqueueError:(id*)arg4 ;
-(void)gaxDidChangeMode:(unsigned)arg1 shouldAcquireLockScreenAssertion:(BOOL)arg2 gaxState:(SCD_Struct_AX8)arg3 ;
-(void)gaxPrepareForTransitionToWorkspaceWithAppID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gaxGetNewPasscodeLengthWithCompletion:(/*^block*/id)arg1 ;
-(void)gaxTerminateRunningApplicationsOtherThan:(id)arg1 forReason:(id)arg2 ;
-(void)gaxGetDisplayNameForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gaxTimeRestrictionStatusDidChange;
-(BOOL)gaxIsWebAppAndForegroundRunning:(id)arg1 ;
-(void)gaxUnlockDevice;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX8)arg1 completion:(/*^block*/id)arg2 ;
-(id)_gax_axSpringBoardServerInstanceDelegate;
-(void)quitTopApplication;
-(void)updateLockAndIdleTimers;
-(void)animateWallpaperStyleToOriginal;
-(void)beginRequiringWallpaper;
-(void)animateWallpaperStyleToNormal;
-(id)mainSceneWindow;
-(id)appIconForBundleID:(id)arg1 format:(int)arg2 ;
-(id)mainScreenAlertWindow;
-(void)activateApp:(id)arg1 ;
-(id)snapshotInCallServiceRemoteView;
-(id)mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg1 ;
-(id)hostViewForApplicationContextHostManager:(id)arg1 enableAndOrderFront:(BOOL)arg2 ;
-(void)disableHostingForApplicationContextHostManager:(id)arg1 withHostView:(id)arg2 ;
-(id)appNameForDisplayID:(id)arg1 ;
-(void)gaxDisconnectAllCalls;
-(void)gaxEndRequiringWallpaper;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX8)arg1 ;
-(void)gaxFrontmostAppDidCheckIn:(id)arg1 ;
-(BOOL)gaxIsSystemAppHostingFacetimeCall:(int*)arg1 ;
-(void)gaxUpdateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactorNumber:(id)arg2 centerStringRepresentation:(id)arg3 animationDurationNumber:(id)arg4 ;
-(void)stopHostingWorkspaceApplicationImmediately;
-(BOOL)gaxLaunchApplication:(id)arg1 withConfiguration:(unsigned)arg2 appLaunchGeneration:(unsigned long long)arg3 enqueueError:(id*)arg4 ;
-(void)gaxDidChangeMode:(unsigned)arg1 shouldAcquireLockScreenAssertion:(BOOL)arg2 gaxState:(SCD_Struct_AX8)arg3 ;
-(void)gaxPrepareForTransitionToWorkspaceWithAppID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gaxGetNewPasscodeLengthWithCompletion:(/*^block*/id)arg1 ;
-(void)gaxTerminateRunningApplicationsOtherThan:(id)arg1 forReason:(id)arg2 ;
-(void)gaxGetDisplayNameForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gaxTimeRestrictionStatusDidChange;
-(BOOL)gaxIsWebAppAndForegroundRunning:(id)arg1 ;
-(void)gaxUnlockDevice;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX8)arg1 completion:(/*^block*/id)arg2 ;
-(id)_gax_axSpringBoardServerInstanceDelegate;
-(void)quitTopApplication;
-(void)updateLockAndIdleTimers;
-(void)animateWallpaperStyleToOriginal;
-(void)beginRequiringWallpaper;
-(void)animateWallpaperStyleToNormal;
-(id)mainSceneWindow;
-(id)appIconForBundleID:(id)arg1 format:(int)arg2 ;
-(id)mainScreenAlertWindow;
-(void)activateApp:(id)arg1 ;
-(id)snapshotInCallServiceRemoteView;
-(id)mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg1 ;
-(id)hostViewForApplicationContextHostManager:(id)arg1 enableAndOrderFront:(BOOL)arg2 ;
-(void)disableHostingForApplicationContextHostManager:(id)arg1 withHostView:(id)arg2 ;
-(id)appNameForDisplayID:(id)arg1 ;
-(void)gaxDisconnectAllCalls;
-(void)gaxEndRequiringWallpaper;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX8)arg1 ;
-(void)gaxFrontmostAppDidCheckIn:(id)arg1 ;
-(BOOL)gaxIsSystemAppHostingFacetimeCall:(int*)arg1 ;
-(void)gaxUpdateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactorNumber:(id)arg2 centerStringRepresentation:(id)arg3 animationDurationNumber:(id)arg4 ;
-(void)stopHostingWorkspaceApplicationImmediately;
-(BOOL)gaxLaunchApplication:(id)arg1 withConfiguration:(unsigned)arg2 appLaunchGeneration:(unsigned long long)arg3 enqueueError:(id*)arg4 ;
-(void)gaxDidChangeMode:(unsigned)arg1 shouldAcquireLockScreenAssertion:(BOOL)arg2 gaxState:(SCD_Struct_AX8)arg3 ;
-(void)gaxPrepareForTransitionToWorkspaceWithAppID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gaxGetNewPasscodeLengthWithCompletion:(/*^block*/id)arg1 ;
-(void)gaxTerminateRunningApplicationsOtherThan:(id)arg1 forReason:(id)arg2 ;
-(void)gaxGetDisplayNameForBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)gaxTimeRestrictionStatusDidChange;
-(BOOL)gaxIsWebAppAndForegroundRunning:(id)arg1 ;
-(void)gaxUnlockDevice;
-(void)gaxBackboardStateDidChange:(SCD_Struct_AX8)arg1 completion:(/*^block*/id)arg2 ;
-(id)_gax_axSpringBoardServerInstanceDelegate;
-(void)quitTopApplication;
-(void)updateLockAndIdleTimers;
-(void)animateWallpaperStyleToOriginal;
-(void)beginRequiringWallpaper;
-(void)animateWallpaperStyleToNormal;
-(id)mainSceneWindow;
-(id)appIconForBundleID:(id)arg1 format:(int)arg2 ;
-(id)mainScreenAlertWindow;
-(void)activateApp:(id)arg1 ;
-(id)snapshotInCallServiceRemoteView;
-(id)mainScreenContextHostManagerForApplicationWithIdentifier:(id)arg1 ;
-(id)hostViewForApplicationContextHostManager:(id)arg1 enableAndOrderFront:(BOOL)arg2 ;
-(void)disableHostingForApplicationContextHostManager:(id)arg1 withHostView:(id)arg2 ;
-(BOOL)_shouldValidateEntitlements;
-(id)init;
-(void)dealloc;
-(long long)activeInterfaceOrientation;
-(void)setVolume:(double)arg1 ;
-(BOOL)hasActiveCall;
-(void)unlockDevice;
-(AXAccessQueue *)accessQueue;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setActionHandlers:(NSMutableArray *)arg1 ;
-(void)setReachabilityHandlers:(NSMutableDictionary *)arg1 ;
-(void)setCurrentAlertHandler:(id)arg1 ;
-(id)currentAlertHandler;
-(NSMutableDictionary *)reachabilityHandlers;
-(NSMutableArray *)actionHandlers;
-(void)_didConnectToServer;
-(id)_handleReplyResult:(id)arg1 ;
-(id)_handleActionResult:(id)arg1 ;
-(id)_handleReachabilityResult:(id)arg1 ;
-(BOOL)_shouldValidateEntitlements;
-(void)_willClearServer;
-(void)_wasDisconnectedFromClient;
-(void)_didConnectToClient;
-(void)cleanupAlertHandler;
-(void)showAlert:(long long)arg1 withHandler:(/*^block*/id)arg2 withData:(id)arg3 ;
-(void)registerSpringBoardActionHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(void)setCancelGestureActivation:(unsigned long long)arg1 cancelEnabled:(BOOL)arg2 ;
-(void)registerReachabilityHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(id)_axSpringBoardServerInstanceDelegate;
-(id)_axSpringBoardServerInstance;
-(BOOL)_shouldDispatchLocally;
-(void)_getPasscodeStatusImmediate:(/*^block*/id)arg1 ;
-(BOOL)isMediaPlayingForApp:(id)arg1 ;
-(id)_messageForMediaPlayingQueryForBundleID:(id)arg1 ;
-(void)pauseMediaForApp:(id)arg1 ;
-(void)resumeMediaForApp:(id)arg1 ;
-(BOOL)isNotificationCenterVisible;
-(void)toggleNotificationCenter;
-(BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 ;
-(void)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isMultiTaskingActive;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)pid:(/*^block*/id)arg1 ;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1 ;
-(BOOL)openSiri;
-(BOOL)dismissSiri;
-(BOOL)isSiriVisible;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isControlCenterVisible;
-(BOOL)isSideSwitcherVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNotificationVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)isSiriTalkingOrListening;
-(BOOL)isReceivingAirPlay;
-(BOOL)isMediaPlaying;
-(void)wakeUpDeviceIfNecessary;
-(id)_serviceName;
-(void)takeScreenshot;
-(void)openAssistiveTouchCustomGestureCreation;
-(void)openSCATCustomGestureCreation;
-(void)setHearingAidControlVisible:(BOOL)arg1 ;
-(void)startHearingAidServer;
-(int)topEventPidOverride;
-(BOOL)isOrientationLocked;
-(void)setOrientationLocked:(BOOL)arg1 ;
-(void)resetDimTimer;
-(BOOL)isSideSwitchUsedForOrientation;
-(BOOL)isRingerMuted;
-(double)reachabilityOffset;
-(double)volumeLevel;
-(void)hideAlert;
-(void)showAlert:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setShowSpeechPlaybackControls:(BOOL)arg1 ;
-(void)removeActionHandler:(id)arg1 ;
-(void)cancelReachabilityDetection;
-(BOOL)toggleIncomingCall;
-(void)setReachabilityActive:(BOOL)arg1 ;
-(void)removeReachabilityHandler:(id)arg1 ;
-(BOOL)isInspectorMinimized;
-(BOOL)isPointInsideAccessibilityInspector:(id)arg1 ;
-(int)activeApplicationOrientation;
-(void)copyStringToPasteboard:(id)arg1 ;
-(void)activateSOSMode;
-(BOOL)isScreenLockedWithPasscode:(BOOL*)arg1 ;
-(void)screenLockStatus:(/*^block*/id)arg1 ;
-(BOOL)isSystemSleeping;
-(BOOL)isSyncingRestoringResettingOrUpdating;
-(BOOL)areSystemGesturesDisabledNatively;
-(BOOL)areSystemGesturesDisabledByAccessibility;
-(id)installedApps;
-(void)isMediaPlayingForApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pauseMedia;
-(void)resumeMedia;
-(BOOL)hasActiveOrPendingCall;
-(BOOL)hasActiveOrPendingCallOrFaceTime;
-(BOOL)isMakingEmergencyCall;
-(void)showNotificationCenter;
-(void)hideNotificationCenter;
-(BOOL)showNotificationCenter:(BOOL)arg1 ;
-(void)showControlCenter:(BOOL)arg1 ;
-(void)openAppSwitcher;
-(void)dismissAppSwitcher;
-(void)simulateEdgePressHaptics;
-(void)revealSpotlight;
-(BOOL)clearSideAppState;
-(void)setSiriIsTalking:(BOOL)arg1 ;
-(void)openVoiceControl;
-(BOOL)isVoiceControlRunning;
-(BOOL)isSpeakThisTemporarilyDisabled;
-(id)allowedMedusaGestures;
-(BOOL)performMedusaGesture:(unsigned long long)arg1 ;
-(void)systemAppInfoWithQuery:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSystemAppShowingAnAlert;
-(id)focusedAppPID;
-(int)purpleBuddyPID;
-(void)purpleBuddyPID:(/*^block*/id)arg1 ;
-(id)runningAppPIDs;
-(BOOL)isSystemAppFrontmost;
-(void)isSystemAppFrontmost:(/*^block*/id)arg1 ;
-(BOOL)isSystemAppFrontmostExludingSiri;
-(BOOL)isPurpleBuddyAppFrontmost;
-(BOOL)isSettingsAppFrontmost;
-(id)focusedApps;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(void)launchMagnifierApp;
-(void)isMagnifierVisibleWithCompletion:(/*^block*/id)arg1 ;
-(void)userEventOccurred;
-(void)setLockScreenDimTimerEnabled:(BOOL)arg1 ;
-(BOOL)isMagnifierVisible;
-(id)applicationWithIdentifier:(id)arg1 ;
-(id)focusedAppProcess;
-(id)runningAppProcesses;
-(id)_axSpringBoardServerInstanceIfExists;
-(int)pid;
@end

