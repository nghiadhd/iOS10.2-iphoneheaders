/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLService.h>

@class PLEntryNotificationOperatorComposition, NSDate, NSMutableDictionary, PLTimer, NSArray, NSSet, NSString, NSMutableSet, NSDictionary;

@interface PLAppTimeService : PLService {

	BOOL _displayOn;
	BOOL _isAPOn;
	BOOL _deviceIsPluggedIn;
	BOOL _inCallNow;
	BOOL _pluggedInBetweenCoalitionSBC;
	BOOL _audioPlayingNow;
	BOOL _musicPlayerForeground;
	PLEntryNotificationOperatorComposition* _coalitionCallback;
	PLEntryNotificationOperatorComposition* _screenstateCallback;
	PLEntryNotificationOperatorComposition* _applicationCallback;
	PLEntryNotificationOperatorComposition* _batteryCallback;
	PLEntryNotificationOperatorComposition* _displayCallback;
	PLEntryNotificationOperatorComposition* _InCallServiceCallback;
	PLEntryNotificationOperatorComposition* _pluginCallback;
	PLEntryNotificationOperatorComposition* _audioCallback;
	PLEntryNotificationOperatorComposition* _nowPlayingCallback;
	PLEntryNotificationOperatorComposition* _statusBarCallback;
	PLEntryNotificationOperatorComposition* _backgroundTransferCallback;
	PLEntryNotificationOperatorComposition* _canSleepEntryNotifications;
	PLEntryNotificationOperatorComposition* _wakeEntryNotifications;
	NSDate* _lastScreenOnTime;
	NSDate* _lastScreenEventAccountingTime;
	NSMutableDictionary* _inFlightBundleIDStartTime;
	PLTimer* _runTimeAggregatorTimer;
	NSArray* _lastLayoutEntries;
	NSSet* _excludedFGAppsSet;
	NSSet* _excludedBGAppsSet;
	NSDate* _lastCallTime;
	NSString* _lastCallBundleID;
	NSMutableSet* _coalitionsAppsOnScreen;
	NSMutableSet* _appsOnScreen;
	NSMutableSet* _PiPModeApps;
	NSMutableSet* _watchkitExtensions;
	NSString* _nowPlayingBundleID;
	NSString* _statusBarBundleID;
	NSDate* _lastAudioTime;
	NSDate* _lastNowPlayingTime;
	NSDate* _lastStatusBarTime;
	NSString* _aggregatedEntryKeyForAppRunTime;
	NSString* _entryKeyPLScreenStateAgentScreenState;
	NSString* _entryKeyPLCoalitionAgentEventIntervalCoalition;
	NSDictionary* _backgroundAppToBundleID;

}

@property (retain) PLEntryNotificationOperatorComposition * coalitionCallback;                         //@synthesize coalitionCallback=_coalitionCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * screenstateCallback;                       //@synthesize screenstateCallback=_screenstateCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * applicationCallback;                       //@synthesize applicationCallback=_applicationCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * batteryCallback;                           //@synthesize batteryCallback=_batteryCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * displayCallback;                           //@synthesize displayCallback=_displayCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * InCallServiceCallback;                     //@synthesize InCallServiceCallback=_InCallServiceCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * pluginCallback;                            //@synthesize pluginCallback=_pluginCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * audioCallback;                             //@synthesize audioCallback=_audioCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * nowPlayingCallback;                        //@synthesize nowPlayingCallback=_nowPlayingCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * statusBarCallback;                         //@synthesize statusBarCallback=_statusBarCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * backgroundTransferCallback;                //@synthesize backgroundTransferCallback=_backgroundTransferCallback - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * canSleepEntryNotifications;              //@synthesize canSleepEntryNotifications=_canSleepEntryNotifications - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * wakeEntryNotifications;                  //@synthesize wakeEntryNotifications=_wakeEntryNotifications - In the implementation block
@property (assign) BOOL displayOn;                                                                     //@synthesize displayOn=_displayOn - In the implementation block
@property (assign) BOOL isAPOn;                                                                        //@synthesize isAPOn=_isAPOn - In the implementation block
@property (assign) BOOL deviceIsPluggedIn;                                                             //@synthesize deviceIsPluggedIn=_deviceIsPluggedIn - In the implementation block
@property (retain) NSDate * lastScreenOnTime;                                                          //@synthesize lastScreenOnTime=_lastScreenOnTime - In the implementation block
@property (retain) NSDate * lastScreenEventAccountingTime;                                             //@synthesize lastScreenEventAccountingTime=_lastScreenEventAccountingTime - In the implementation block
@property (retain) NSMutableDictionary * inFlightBundleIDStartTime;                                    //@synthesize inFlightBundleIDStartTime=_inFlightBundleIDStartTime - In the implementation block
@property (retain) PLTimer * runTimeAggregatorTimer;                                                   //@synthesize runTimeAggregatorTimer=_runTimeAggregatorTimer - In the implementation block
@property (retain) NSArray * lastLayoutEntries;                                                        //@synthesize lastLayoutEntries=_lastLayoutEntries - In the implementation block
@property (readonly) NSSet * excludedFGAppsSet;                                                        //@synthesize excludedFGAppsSet=_excludedFGAppsSet - In the implementation block
@property (readonly) NSSet * excludedBGAppsSet;                                                        //@synthesize excludedBGAppsSet=_excludedBGAppsSet - In the implementation block
@property (assign) BOOL inCallNow;                                                                     //@synthesize inCallNow=_inCallNow - In the implementation block
@property (retain) NSDate * lastCallTime;                                                              //@synthesize lastCallTime=_lastCallTime - In the implementation block
@property (retain) NSString * lastCallBundleID;                                                        //@synthesize lastCallBundleID=_lastCallBundleID - In the implementation block
@property (retain) NSMutableSet * coalitionsAppsOnScreen;                                              //@synthesize coalitionsAppsOnScreen=_coalitionsAppsOnScreen - In the implementation block
@property (retain) NSMutableSet * appsOnScreen;                                                        //@synthesize appsOnScreen=_appsOnScreen - In the implementation block
@property (retain) NSMutableSet * PiPModeApps;                                                         //@synthesize PiPModeApps=_PiPModeApps - In the implementation block
@property (assign) BOOL pluggedInBetweenCoalitionSBC;                                                  //@synthesize pluggedInBetweenCoalitionSBC=_pluggedInBetweenCoalitionSBC - In the implementation block
@property (retain) NSMutableSet * watchkitExtensions;                                                  //@synthesize watchkitExtensions=_watchkitExtensions - In the implementation block
@property (assign) BOOL audioPlayingNow;                                                               //@synthesize audioPlayingNow=_audioPlayingNow - In the implementation block
@property (retain) NSString * nowPlayingBundleID;                                                      //@synthesize nowPlayingBundleID=_nowPlayingBundleID - In the implementation block
@property (retain) NSString * statusBarBundleID;                                                       //@synthesize statusBarBundleID=_statusBarBundleID - In the implementation block
@property (assign) BOOL musicPlayerForeground;                                                         //@synthesize musicPlayerForeground=_musicPlayerForeground - In the implementation block
@property (retain) NSDate * lastAudioTime;                                                             //@synthesize lastAudioTime=_lastAudioTime - In the implementation block
@property (retain) NSDate * lastNowPlayingTime;                                                        //@synthesize lastNowPlayingTime=_lastNowPlayingTime - In the implementation block
@property (retain) NSDate * lastStatusBarTime;                                                         //@synthesize lastStatusBarTime=_lastStatusBarTime - In the implementation block
@property (retain) NSString * aggregatedEntryKeyForAppRunTime;                                         //@synthesize aggregatedEntryKeyForAppRunTime=_aggregatedEntryKeyForAppRunTime - In the implementation block
@property (readonly) NSString * entryKeyPLScreenStateAgentScreenState;                                 //@synthesize entryKeyPLScreenStateAgentScreenState=_entryKeyPLScreenStateAgentScreenState - In the implementation block
@property (readonly) NSString * entryKeyPLCoalitionAgentEventIntervalCoalition;                        //@synthesize entryKeyPLCoalitionAgentEventIntervalCoalition=_entryKeyPLCoalitionAgentEventIntervalCoalition - In the implementation block
@property (readonly) NSDictionary * backgroundAppToBundleID;                                           //@synthesize backgroundAppToBundleID=_backgroundAppToBundleID - In the implementation block
+(void)load;
+(id)entryAggregateDefinitionAppRunTime;
+(id)entryAggregateDefinitions;
+(id)defaults;
-(id)init;
-(id)backgroundAppToBundleIDmapping;
-(void)loadWatchKitExtensionsSet;
-(void)handleCoalitionCallback:(id)arg1 ;
-(id)buildCallBack:(id)arg1 withGroup:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setCoalitionCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleScreenStateCallback:(id)arg1 ;
-(void)setScreenstateCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleApplicationCallback:(id)arg1 ;
-(void)setApplicationCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleBatteryCallback:(id)arg1 ;
-(void)setBatteryCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleDisplayCallback:(id)arg1 ;
-(void)setDisplayCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleInCallServiceCallback:(id)arg1 ;
-(void)setInCallServiceCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handlePluginCallback:(id)arg1 ;
-(void)setPluginCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleAudioCallback:(id)arg1 ;
-(void)setAudioCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleNowPlayingCallback:(id)arg1 ;
-(void)setNowPlayingCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleStatusBarCallback:(id)arg1 ;
-(void)setStatusBarCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleBackgroundTransferCallback:(id)arg1 ;
-(void)setBackgroundTransferCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleSleepCallBack:(id)arg1 ;
-(void)handleWakeCallBack:(id)arg1 ;
-(void)periodicUpdateAppRunTimeWithDate:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)displayCallback;
-(void)testService;
-(void)setIsAPOn:(BOOL)arg1 ;
-(NSString *)entryKeyPLCoalitionAgentEventIntervalCoalition;
-(void)updateBackgroundTimeForCoalitionEntries:(id)arg1 withNewCoaltionArray:(id)arg2 ;
-(void)addNowPlayingTimeAtDate:(id)arg1 ;
-(NSString *)entryKeyPLScreenStateAgentScreenState;
-(void)addForegroundTimeAtDate:(id)arg1 withNewLayoutElementsArray:(id)arg2 ;
-(void)addAudioTimeAtDate:(id)arg1 ;
-(void)updateBackgroundTimeForAppStateEntry:(id)arg1 ;
-(BOOL)deviceIsPluggedIn;
-(void)updateInCallServiceTimeAtDate:(id)arg1 ;
-(void)setDeviceIsPluggedIn:(BOOL)arg1 ;
-(void)setPluggedInBetweenCoalitionSBC:(BOOL)arg1 ;
-(void)setDisplayOn:(BOOL)arg1 ;
-(BOOL)displayOn;
-(void)setLastScreenOnTime:(NSDate *)arg1 ;
-(void)setInCallNow:(BOOL)arg1 ;
-(void)setLastCallTime:(NSDate *)arg1 ;
-(void)setLastCallBundleID:(NSString *)arg1 ;
-(NSDate *)lastCallTime;
-(void)updateInCallServiceTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3 ;
-(void)setAudioPlayingNow:(BOOL)arg1 ;
-(void)setNowPlayingBundleID:(NSString *)arg1 ;
-(void)addStatusBarTimeAtDate:(id)arg1 ;
-(void)setStatusBarBundleID:(NSString *)arg1 ;
-(id)remapCloudDocsBundleID:(id)arg1 ;
-(NSMutableSet *)coalitionsAppsOnScreen;
-(void)updateBackgroundTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3 ;
-(NSSet *)excludedBGAppsSet;
-(NSDictionary *)backgroundAppToBundleID;
-(NSMutableSet *)PiPModeApps;
-(void)updateAppRunTimeForBundleId:(id)arg1 withAppStateUpdateType:(int)arg2 withNowDate:(id)arg3 ;
-(NSMutableDictionary *)inFlightBundleIDStartTime;
-(BOOL)isAPOn;
-(NSString *)aggregatedEntryKeyForAppRunTime;
-(NSDate *)lastScreenOnTime;
-(NSDate *)lastScreenEventAccountingTime;
-(void)setLastScreenEventAccountingTime:(NSDate *)arg1 ;
-(NSMutableSet *)appsOnScreen;
-(void)updatePiPModeAppsSet:(id)arg1 withAppRole:(id)arg2 ;
-(NSArray *)lastLayoutEntries;
-(void)updateScreenOnTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3 ;
-(void)updateCoalitionsAppsOnScreenSet:(id)arg1 ;
-(void)resetLayoutElementsPLEntryArray:(id)arg1 withNowDate:(id)arg2 ;
-(NSSet *)excludedFGAppsSet;
-(void)setLastLayoutEntries:(NSArray *)arg1 ;
-(BOOL)pluggedInBetweenCoalitionSBC;
-(double)getCPUTime:(id)arg1 ;
-(double)convertCPUTimeToBackgroundTime:(double)arg1 withDuration:(double)arg2 ;
-(BOOL)inCallNow;
-(NSString *)lastCallBundleID;
-(BOOL)audioPlayingNow;
-(BOOL)musicPlayerForeground;
-(void)setLastAudioTime:(NSDate *)arg1 ;
-(NSDate *)lastAudioTime;
-(NSString *)nowPlayingBundleID;
-(void)setLastNowPlayingTime:(NSDate *)arg1 ;
-(NSDate *)lastNowPlayingTime;
-(NSString *)statusBarBundleID;
-(void)setLastStatusBarTime:(NSDate *)arg1 ;
-(NSDate *)lastStatusBarTime;
-(void)initOperatorDependancies;
-(void)debugAppTimeService;
-(PLEntryNotificationOperatorComposition *)coalitionCallback;
-(PLEntryNotificationOperatorComposition *)screenstateCallback;
-(PLEntryNotificationOperatorComposition *)applicationCallback;
-(PLEntryNotificationOperatorComposition *)batteryCallback;
-(PLEntryNotificationOperatorComposition *)InCallServiceCallback;
-(PLEntryNotificationOperatorComposition *)pluginCallback;
-(PLEntryNotificationOperatorComposition *)audioCallback;
-(PLEntryNotificationOperatorComposition *)nowPlayingCallback;
-(PLEntryNotificationOperatorComposition *)statusBarCallback;
-(PLEntryNotificationOperatorComposition *)backgroundTransferCallback;
-(PLEntryNotificationOperatorComposition *)canSleepEntryNotifications;
-(PLEntryNotificationOperatorComposition *)wakeEntryNotifications;
-(void)setInFlightBundleIDStartTime:(NSMutableDictionary *)arg1 ;
-(PLTimer *)runTimeAggregatorTimer;
-(void)setRunTimeAggregatorTimer:(PLTimer *)arg1 ;
-(void)setCoalitionsAppsOnScreen:(NSMutableSet *)arg1 ;
-(void)setAppsOnScreen:(NSMutableSet *)arg1 ;
-(void)setPiPModeApps:(NSMutableSet *)arg1 ;
-(NSMutableSet *)watchkitExtensions;
-(void)setWatchkitExtensions:(NSMutableSet *)arg1 ;
-(void)setMusicPlayerForeground:(BOOL)arg1 ;
-(void)setAggregatedEntryKeyForAppRunTime:(NSString *)arg1 ;
@end

