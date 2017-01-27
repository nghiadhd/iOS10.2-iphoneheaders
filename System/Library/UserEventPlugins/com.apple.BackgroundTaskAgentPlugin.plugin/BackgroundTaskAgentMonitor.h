/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/UserEventPlugins/com.apple.BackgroundTaskAgentPlugin.plugin/com.apple.BackgroundTaskAgentPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <com.apple.BackgroundTaskAgentPlugin/com.apple.BackgroundTaskAgentPlugin-Structs.h>
@class NSObject, NSTimer;

@interface BackgroundTaskAgentMonitor : NSObject {

	id _target;
	SEL _selector;
	NSObject*<OS_dispatch_queue> _queue;
	SCDynamicStoreRef _dynamicStore;
	int _primaryLinkQuality;
	BOOL _primaryLinkIsCellular;
	int _numNetworkJobs;
	NSTimer* _networkStabilizationTimer;
	BOOL _pendingNetworkUpdate;
	int _screenBlankedToken;
	int _numScreenBlankedJobs;
	BOOL _isScreenBlanked;
	double _lastScreenBlankedTime;
	int _powerPluggedinToken;
	int _numPowerPluggedinJobs;
	BOOL _isPowerPluggedin;
	double _lastPowerPluggedinTime;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	unsigned _batteryEntry;
	double _batteryLevel;
	double _batteryNotificationThreshold;
	int _numAdjustTimeJobs;
	double _systemToMonotonicTimeOffset;
	int _numVoiceCallJobs;
	BOOL _isInVoiceCall;
	int _numRoamJobs;
	BOOL _isRoaming;
	BOOL _roamStateChanged;
	unsigned rootDomainConnect;
	unsigned pmNotifier;
	IONotificationPortRef systemPowerPortRef;
	BOOL _systemWillSleep;
	BOOL _shouldRescheduleTimer;

}

@property (nonatomic,readonly) id target;                                       //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                    //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) NSTimer * networkStabilizationTimer;               //@synthesize networkStabilizationTimer=_networkStabilizationTimer - In the implementation block
@property (nonatomic,readonly) int numAdjustTimeJobs;                           //@synthesize numAdjustTimeJobs=_numAdjustTimeJobs - In the implementation block
@property (assign,nonatomic) double systemToMonotonicTimeOffset;                //@synthesize systemToMonotonicTimeOffset=_systemToMonotonicTimeOffset - In the implementation block
@property (assign,nonatomic) unsigned rootDomainConnect; 
@property (assign,nonatomic) BOOL systemWillSleep;                              //@synthesize systemWillSleep=_systemWillSleep - In the implementation block
@property (assign,nonatomic) BOOL shouldRescheduleTimer;                        //@synthesize shouldRescheduleTimer=_shouldRescheduleTimer - In the implementation block
@property (nonatomic,readonly) int primaryLinkQuality;                          //@synthesize primaryLinkQuality=_primaryLinkQuality - In the implementation block
@property (nonatomic,readonly) BOOL primaryLinkIsCellular;                      //@synthesize primaryLinkIsCellular=_primaryLinkIsCellular - In the implementation block
@property (nonatomic,readonly) BOOL isScreenBlanked;                            //@synthesize isScreenBlanked=_isScreenBlanked - In the implementation block
@property (nonatomic,readonly) double lastScreenBlankedTime;                    //@synthesize lastScreenBlankedTime=_lastScreenBlankedTime - In the implementation block
@property (nonatomic,readonly) BOOL isPowerPluggedin;                           //@synthesize isPowerPluggedin=_isPowerPluggedin - In the implementation block
@property (nonatomic,readonly) double lastPowerPluggedinTime;                   //@synthesize lastPowerPluggedinTime=_lastPowerPluggedinTime - In the implementation block
@property (nonatomic,readonly) double batteryLevel;                             //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) BOOL isInVoiceCall;                              //@synthesize isInVoiceCall=_isInVoiceCall - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL isRoaming;                                  //@synthesize isRoaming=_isRoaming - In the implementation block
@property (assign,nonatomic) BOOL pendingNetworkUpdate;                         //@synthesize pendingNetworkUpdate=_pendingNetworkUpdate - In the implementation block
-(void)updateRoamingState;
-(void)setSystemWillSleep:(BOOL)arg1 ;
-(double)lastScreenBlankedTime;
-(void)setNetworkStabilizationTimer:(NSTimer *)arg1 ;
-(void)incrementNumAdjustTimeJobs;
-(BOOL)isPowerPluggedin;
-(void)setIsScreenBlanked:(BOOL)arg1 ;
-(void)updatePluggedinState:(unsigned)arg1 ;
-(BOOL)shouldRescheduleTimer;
-(void)cancelNetworkStabilizationTimer;
-(BOOL)initPowerSourceMonitoring;
-(void)updateNetworkLinkQuality;
-(double)lastPowerPluggedinTime;
-(void)setShouldRescheduleTimer:(BOOL)arg1 ;
-(void)decrementNumScreenBlankedJobs;
-(void)setSystemToMonotonicTimeOffset:(double)arg1 ;
-(void)processRegistrationNotification;
-(BOOL)isScreenBlanked;
-(BOOL)primaryLinkIsCellular;
-(void)decrementNumAdjustTimeJobs;
-(void)setIsInVoiceCall:(BOOL)arg1 ;
-(void)setPendingNetworkUpdate:(BOOL)arg1 ;
-(void)incrementNumNetworkJobs;
-(void)decrementNumJobsNotAllowedDuringVoiceCall;
-(void)decrementNumJobsNotAllowedWhileRoaming;
-(int)numAdjustTimeJobs;
-(void)debugPrintMonitorStatus;
-(void)incrementNumJobsNotAllowedDuringVoiceCall;
-(void)incrementNumJobsNotAllowedWhileRoaming;
-(BOOL)isInVoiceCall;
-(BOOL)pendingNetworkUpdate;
-(BOOL)initNetworkLinkQualityMonitoring;
-(void)networkStabilizationTimerHandler;
-(void)rescheduleNetworkStabilizationTimer;
-(int)primaryLinkQuality;
-(double)getKernelMonotonicClock;
-(void)incrementNumPowerPluggedinJobs;
-(void)updateBatteryLevel:(unsigned)arg1 ;
-(void)decrementNumNetworkJobs;
-(double)systemToMonotonicTimeOffset;
-(void)incrementNumScreenBlankedJobs;
-(NSTimer *)networkStabilizationTimer;
-(void)decrementNumPowerPluggedinJobs;
-(void)updateCallState;
-(void)notifyWhenBatteryLevel:(double)arg1 ;
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(double)batteryLevel;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3 ;
-(BOOL)isRoaming;
-(BOOL)systemWillSleep;
-(unsigned)rootDomainConnect;
-(void)setRootDomainConnect:(unsigned)arg1 ;
@end

