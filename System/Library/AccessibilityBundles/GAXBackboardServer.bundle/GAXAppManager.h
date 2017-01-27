/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GAXBackboardServer/_GAXAppRepresentationDelegate.h>

@protocol GAXAppManagerDelegate, OS_dispatch_source;
@class _GAXAppRepresentation, NSString, NSMutableSet, FBSDisplayLayoutMonitor, AXAccessQueueTimer, NSObject;

@interface GAXAppManager : NSObject <_GAXAppRepresentationDelegate> {

	_GAXAppRepresentation* _lastKnownEffectiveApp;
	id<GAXAppManagerDelegate> _delegate;
	NSString* _sessionAppBundleIdentifier;
	NSMutableSet* _managedApps;
	FBSDisplayLayoutMonitor* _appLayoutMonitor;
	AXAccessQueueTimer* _resetRelaunchAttemptsTimer;
	NSObject*<OS_dispatch_source> _purpleBuddyPIDMonitor;

}

@property (nonatomic,retain) NSMutableSet * managedApps;                                       //@synthesize managedApps=_managedApps - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * appLayoutMonitor;                       //@synthesize appLayoutMonitor=_appLayoutMonitor - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * resetRelaunchAttemptsTimer;                  //@synthesize resetRelaunchAttemptsTimer=_resetRelaunchAttemptsTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> purpleBuddyPIDMonitor;              //@synthesize purpleBuddyPIDMonitor=_purpleBuddyPIDMonitor - In the implementation block
@property (nonatomic,copy) NSString * sessionAppBundleIdentifier;                              //@synthesize sessionAppBundleIdentifier=_sessionAppBundleIdentifier - In the implementation block
@property (nonatomic,retain) _GAXAppRepresentation * lastKnownEffectiveApp;                    //@synthesize lastKnownEffectiveApp=_lastKnownEffectiveApp - In the implementation block
@property (assign,nonatomic) id<GAXAppManagerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL appLayoutIsMultiApp; 
@property (nonatomic,readonly) NSString * effectiveAppBundleIdentifier; 
@property (nonatomic,readonly) BOOL effectiveAppIsPurpleBuddy; 
@property (nonatomic,readonly) BOOL effectiveAppIsPreferences; 
@property (assign,nonatomic) BOOL effectiveAppWasPlayingMedia; 
@property (nonatomic,readonly) BOOL sessionAppIsPurpleBuddy; 
@property (nonatomic,readonly) BOOL sessionAppIsPreferences; 
@property (nonatomic,readonly) unsigned long long sessionAppRelaunchAttempts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_GAXAppRepresentation *)lastKnownEffectiveApp;
-(void)_updateGAXApp:(id)arg1 fromAXApp:(id)arg2 ;
-(FBSDisplayLayoutMonitor *)appLayoutMonitor;
-(NSObject*<OS_dispatch_source>)purpleBuddyPIDMonitor;
-(void)resumeEffectiveApp;
-(void)setPurpleBuddyPIDMonitor:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setResetRelaunchAttemptsTimer:(AXAccessQueueTimer *)arg1 ;
-(void)gaxAppDidGoInvalid:(id)arg1 ;
-(AXAccessQueueTimer *)resetRelaunchAttemptsTimer;
-(id)_appWithBundleIdentifier:(id)arg1 ;
-(BOOL)_axAppIsValidGAXApp:(id)arg1 ;
-(void)setSessionAppBundleIdentifier:(NSString *)arg1 ;
-(id)_makeGAXAppFromAXApp:(id)arg1 ;
-(void)setLastKnownEffectiveApp:(_GAXAppRepresentation *)arg1 ;
-(void)setAppLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)setEffectiveAppWasPlayingMedia:(BOOL)arg1 ;
-(void)suspendEffectiveApp;
-(BOOL)sessionAppIsPreferences;
-(BOOL)effectiveAppIsPreferences;
-(void)resetRelaunchAttempts;
-(BOOL)sessionAppIsEffectiveApp;
-(unsigned long long)sessionAppRelaunchAttempts;
-(void)updateManagedAppState:(BOOL)arg1 ;
-(void)terminateEffectiveApp;
-(void)scheduleResetLaunchAttempts;
-(NSString *)sessionAppBundleIdentifier;
-(BOOL)appLayoutIsMultiApp;
-(BOOL)sessionAppIsPurpleBuddy;
-(void)monitorForPurpleBuddyDeath;
-(NSString *)effectiveAppBundleIdentifier;
-(BOOL)effectiveAppWasPlayingMedia;
-(void)gaxClientDidLoad:(id)arg1 pid:(int)arg2 ;
-(BOOL)effectiveAppIsPurpleBuddy;
-(BOOL)sessionAppGAXClientDidCheckIn;
-(void)updateSessionAppBundleIdentifier:(id)arg1 ;
-(void)settingsDidChangeWithServerMode:(unsigned)arg1 allowsMotion:(BOOL)arg2 allowsKeyboardTextInput:(BOOL)arg3 ;
-(void)appWithBundleIdentifier:(id)arg1 becameActiveWithPid:(int)arg2 ;
-(id)effectiveAppContainedViewsForArchivedFingerPath:(id)arg1 ;
-(void)incrementSessionAppRelaunchAttempts;
-(BOOL)effectiveAppIsAcceptableForSessionApp;
-(BOOL)sessionAppIsHostedByTheSystemApp;
-(BOOL)effectiveAppPrepareForTransitionToWorkspaceAndRetrieveRestrictionsInformation:(id*)arg1 ;
-(BOOL)effectiveAppIsHostedByTheSystemApp;
-(void)effectiveAppRestrictionWithIdentifier:(id)arg1 didChangeState:(long long)arg2 ;
-(id)effectiveAppRestrictionIdentifiers;
-(void)setManagedApps:(NSMutableSet *)arg1 ;
-(id)_effectiveApp;
-(NSMutableSet *)managedApps;
-(id)_sessionApp;
-(id)init;
-(void)setDelegate:(id<GAXAppManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<GAXAppManagerDelegate>)delegate;
@end

