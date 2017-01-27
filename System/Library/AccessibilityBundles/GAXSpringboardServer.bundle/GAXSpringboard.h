/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GAXSpringboardServer/GAXSpringboardServer-Structs.h>
@class NSObject, AXAccessQueueTimer, UIWindow, UIView, NSString, AXIPCServer, AXIPCClient, AXAccessQueue, GAXSpringBoardOverrideHandler, SBUILockScreenDisableAssertion;

@interface GAXSpringboard : NSObject {

	SCD_Struct_GA0 _reflectedBackboardState;
	NSObject*<OS_dispatch_queue> _gaxStateAccessQueue;
	BOOL _requiringWallpaper;
	AXAccessQueueTimer* _didEndRequiringWallpaperCheckTimer;
	id _contextHostWrapper;
	UIWindow* _hostedApplicationWindow;
	UIView* _hostedApplicationView;
	NSString* _frontmostAppIdentifier;
	AXIPCServer* _springboardServer;
	AXIPCClient* _backboardClient;
	AXAccessQueue* _backboardMessageQueue;
	GAXSpringBoardOverrideHandler* _springboardOverrideHandler;
	AXAccessQueue* _applicationLaunchingQueue;
	SBUILockScreenDisableAssertion* _lockScreenDisableAssertion;

}

@property (nonatomic,retain) AXIPCServer * springboardServer;                                          //@synthesize springboardServer=_springboardServer - In the implementation block
@property (nonatomic,retain) AXIPCClient * backboardClient;                                            //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXAccessQueue * backboardMessageQueue;                                    //@synthesize backboardMessageQueue=_backboardMessageQueue - In the implementation block
@property (assign,getter=isRequiringWallpaper,nonatomic) BOOL requiringWallpaper;                      //@synthesize requiringWallpaper=_requiringWallpaper - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * didEndRequiringWallpaperCheckTimer;                  //@synthesize didEndRequiringWallpaperCheckTimer=_didEndRequiringWallpaperCheckTimer - In the implementation block
@property (nonatomic,retain) id contextHostWrapper;                                                    //@synthesize contextHostWrapper=_contextHostWrapper - In the implementation block
@property (nonatomic,retain) UIWindow * hostedApplicationWindow;                                       //@synthesize hostedApplicationWindow=_hostedApplicationWindow - In the implementation block
@property (nonatomic,retain) UIView * hostedApplicationView;                                           //@synthesize hostedApplicationView=_hostedApplicationView - In the implementation block
@property (nonatomic,copy) NSString * frontmostAppIdentifier;                                          //@synthesize frontmostAppIdentifier=_frontmostAppIdentifier - In the implementation block
@property (nonatomic,retain) GAXSpringBoardOverrideHandler * springboardOverrideHandler;               //@synthesize springboardOverrideHandler=_springboardOverrideHandler - In the implementation block
@property (nonatomic,retain) AXAccessQueue * applicationLaunchingQueue;                                //@synthesize applicationLaunchingQueue=_applicationLaunchingQueue - In the implementation block
@property (nonatomic,retain) SBUILockScreenDisableAssertion * lockScreenDisableAssertion;              //@synthesize lockScreenDisableAssertion=_lockScreenDisableAssertion - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isInWorkspace; 
@property (nonatomic,readonly) BOOL isInactive; 
@property (nonatomic,readonly) unsigned profileConfiguration; 
@property (nonatomic,readonly) BOOL allowsTouch; 
@property (nonatomic,readonly) BOOL allowsLockButton; 
@property (nonatomic,readonly) BOOL allowsMotion; 
@property (nonatomic,readonly) BOOL allowsAutolock; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)_extendAXSpringServerInstanceIfExists:(id)arg1 ;
-(AXIPCServer *)springboardServer;
-(void)setFrontmostAppIdentifier:(NSString *)arg1 ;
-(GAXSpringBoardOverrideHandler *)springboardOverrideHandler;
-(NSString *)frontmostAppIdentifier;
-(void)setHostedApplicationView:(UIView *)arg1 ;
-(BOOL)shouldAllowMedusaGestures;
-(id)_handleLaunchApplication:(id)arg1 ;
-(SBUILockScreenDisableAssertion *)lockScreenDisableAssertion;
-(void)setRequiringWallpaper:(BOOL)arg1 ;
-(id)contextHostWrapper;
-(AXAccessQueue *)applicationLaunchingQueue;
-(BOOL)isRequiringWallpaper;
-(void)setHostedApplicationWindow:(UIWindow *)arg1 ;
-(id)_handleEndRequiringWallpaper:(id)arg1 ;
-(BOOL)wantsAppSelfLockMode;
-(id)_debugGAXDescription;
-(BOOL)wantsSingleAppMode;
-(void)systemDidRestartDueToLowBattery;
-(BOOL)wantsSingleAppModeOrAppSelfLockMode;
-(BOOL)isInWorkspace;
-(BOOL)allowsMotion;
-(void)setBackboardMessageQueue:(AXAccessQueue *)arg1 ;
-(void)setLockScreenDisableAssertion:(SBUILockScreenDisableAssertion *)arg1 ;
-(AXAccessQueue *)backboardMessageQueue;
-(void)_handleAXSpringBoardServerDidInit:(id)arg1 ;
-(void)_handleDidShowTripleClickAlertNotification:(id)arg1 ;
-(void)setBackboardClient:(AXIPCClient *)arg1 ;
-(void)_updateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactor:(double)arg2 center:(CGPoint)arg3 animationDuration:(double)arg4 ;
-(void)setDidEndRequiringWallpaperCheckTimer:(AXAccessQueueTimer *)arg1 ;
-(id)_gaxHandleFrontmostAppDidCheckIn:(id)arg1 ;
-(id)_handleServerModeTransitionDidComplete:(id)arg1 ;
-(id)_handleIsWebApplicationAndForegroundRunning:(id)arg1 ;
-(id)_handleIsSystemAppHostingFacetimeCall:(id)arg1 ;
-(id)_handlePrepareTransitionToWorkspace:(id)arg1 ;
-(id)_handleUpdateHostedApplicationState:(id)arg1 ;
-(id)_handleTerminateApplications:(id)arg1 ;
-(id)_handleStopHostingWorkspaceAppImmediately:(id)arg1 ;
-(id)_handleTimeRestrictionStatusDidChange:(id)arg1 ;
-(id)_handleGetDisplayNameForBundleID:(id)arg1 ;
-(void)_sendSimpleMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 description:(id)arg3 ;
-(void)_prepareTransitionToWorkspaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(AXAccessQueueTimer *)didEndRequiringWallpaperCheckTimer;
-(void)_releaseLockScreenDisableAssertion;
-(void)_acquireLockScreenDisableAssertion;
-(BOOL)_applicationWithIdentifierIsWebApplicationAndForegroundRunning:(id)arg1 ;
-(void)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 description:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(BOOL)_sendReplayableSimpleMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 description:(id)arg3 error:(id*)arg4 ;
-(void)_endHostingApplicationImmediately;
-(BOOL)allowsTouch;
-(void)setSpringboardOverrideHandler:(GAXSpringBoardOverrideHandler *)arg1 ;
-(id)_handleDisconnectAllCalls:(id)arg1 ;
-(id)_handleGetNewPasscodeLength:(id)arg1 ;
-(AXIPCClient *)backboardClient;
-(UIView *)hostedApplicationView;
-(void)notifyBackboardIsMakingEmergencyCall:(BOOL)arg1 ;
-(void)notifyBackboardSBMiniAlertIsShowing:(BOOL)arg1 ;
-(void)notifyBackboardShowingWhitelistedLockscreenUI:(BOOL)arg1 withIdentifier:(id)arg2 ;
-(void)notifyBackboardLockscreenUIIsShowing:(BOOL)arg1 ;
-(void)setApplicationLaunchingQueue:(AXAccessQueue *)arg1 ;
-(void)_handleDeviceWasLockedNotification:(id)arg1 ;
-(BOOL)allowsLockButton;
-(UIWindow *)hostedApplicationWindow;
-(unsigned)profileConfiguration;
-(void)setContextHostWrapper:(id)arg1 ;
-(void)setSpringboardServer:(AXIPCServer *)arg1 ;
-(void)deviceWasUnlocked;
-(id)_handleUpdateGAXBackboardState:(id)arg1 ;
-(BOOL)allowsAutolock;
-(void)_handleDidShowVoiceOverItemChooserNotification:(id)arg1 ;
-(id)_handleUnlockDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(BOOL)isEnabled;
-(BOOL)isInactive;
@end

