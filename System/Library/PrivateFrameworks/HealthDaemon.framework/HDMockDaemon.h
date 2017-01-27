/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemon.h>

@protocol HDViewOnWakeService, HDNanoAlertSuppressionService, HDSyncEngine;
@class HDAchievementAssetManager, HDAchievementDefinitionAlertManager, HDAuthorizationManager, HDDataProvenanceManager, HDNanoSyncManager, HDProcessStateManager, HDServiceConnectionManager, HDAppSubscriptionManager, HDRoutineGateway, HDMockPrimaryProfile, HDPrimaryProfile, HDCurrentActivitySummaryHelper, HDFitnessFriendsManager, HDHealthServiceManager, HDContentProtectionManager, HDBackgroundTaskScheduler, HDPluginManager, NSString, NSURL, HDDeviceManager, HDUserCharacteristicsManager, _HKBehavior;

@interface HDMockDaemon : NSObject <HDHealthDaemon> {

	HDAchievementAssetManager* achievementAssetManager;
	HDAchievementDefinitionAlertManager* achievementDefinitionAlertManager;
	HDAuthorizationManager* authorizationManager;
	HDDataProvenanceManager* dataProvenanceManager;
	HDNanoSyncManager* nanoSyncManager;
	HDProcessStateManager* processStateManager;
	HDServiceConnectionManager* serviceConnectionManager;
	HDAppSubscriptionManager* subscriptionManager;
	id<HDViewOnWakeService> viewOnWakeService;
	HDRoutineGateway* routineGateway;
	HDMockPrimaryProfile* mockPrimaryProfile;
	HDPrimaryProfile* primaryProfile;
	HDCurrentActivitySummaryHelper* currentActivitySummaryHelper;
	HDFitnessFriendsManager* fitnessFriendsManager;
	id<HDNanoAlertSuppressionService> alertSuppressionService;
	id<HDSyncEngine> _syncEngine;
	HDHealthServiceManager* _healthServiceManager;
	HDContentProtectionManager* _contentProtectionManager;
	HDBackgroundTaskScheduler* _backgroundTaskScheduler;
	HDPluginManager* _pluginManager;

}

@property (retain) id<HDSyncEngine> syncEngine;                                                                    //@synthesize syncEngine=_syncEngine - In the implementation block
@property (retain) HDHealthServiceManager * healthServiceManager;                                                  //@synthesize healthServiceManager=_healthServiceManager - In the implementation block
@property (retain) HDContentProtectionManager * contentProtectionManager;                                          //@synthesize contentProtectionManager=_contentProtectionManager - In the implementation block
@property (retain) HDBackgroundTaskScheduler * backgroundTaskScheduler;                                            //@synthesize backgroundTaskScheduler=_backgroundTaskScheduler - In the implementation block
@property (retain) HDPluginManager * pluginManager;                                                                //@synthesize pluginManager=_pluginManager - In the implementation block
@property (nonatomic,retain) HDCurrentActivitySummaryHelper * currentActivitySummaryHelper; 
@property (nonatomic,readonly) HDMockPrimaryProfile * mockPrimaryProfile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * homeDirectoryPath; 
@property (readonly) NSURL * homeDirectoryURL; 
@property (readonly) NSObject*<OS_dispatch_queue> mainQueue; 
@property (readonly) id<HDHealthDatabase> healthDatabase; 
@property (readonly) HDDeviceManager * healthDeviceManager; 
@property (readonly) HDUserCharacteristicsManager * userCharacteristicsManager; 
@property (readonly) HDProcessStateManager * processStateManager; 
@property (readonly) HDDataProvenanceManager * dataProvenanceManager; 
@property (nonatomic,readonly) HDRoutineGateway * routineGateway; 
@property (nonatomic,readonly) HDAppSubscriptionManager * subscriptionManager; 
@property (nonatomic,readonly) HDNanoSyncManager * nanoSyncManager; 
@property (nonatomic,readonly) HDAuthorizationManager * authorizationManager; 
@property (nonatomic,retain) id<HDViewOnWakeService> viewOnWakeService; 
@property (nonatomic,readonly) HDFitnessFriendsManager * fitnessFriendsManager; 
@property (nonatomic,readonly) HDServiceConnectionManager * serviceConnectionManager; 
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile; 
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService; 
@property (nonatomic,retain) HDAchievementAssetManager * achievementAssetManager; 
@property (nonatomic,retain) HDAchievementDefinitionAlertManager * achievementDefinitionAlertManager; 
@property (readonly) BOOL isAppleWatch; 
@property (nonatomic,readonly) _HKBehavior * behavior; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)mainQueue;
-(_HKBehavior *)behavior;
-(id<HDHealthDatabase>)healthDatabase;
-(id)healthDataManager;
-(id)healthSourceManager;
-(HDDeviceManager *)healthDeviceManager;
-(id)healthDataCollectionManager;
-(HDUserCharacteristicsManager *)userCharacteristicsManager;
-(BOOL)isAppleWatch;
-(void)registerForDaemonReady:(id)arg1 ;
-(HDDataProvenanceManager *)dataProvenanceManager;
-(HDNanoSyncManager *)nanoSyncManager;
-(id)temporaryProfile;
-(HDCurrentActivitySummaryHelper *)currentActivitySummaryHelper;
-(HDPrimaryProfile *)primaryProfile;
-(id)firstPartyWorkoutSnapshot;
-(void)pauseAllActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasAnyActiveWorkouts;
-(HDContentProtectionManager *)contentProtectionManager;
-(HDProcessStateManager *)processStateManager;
-(NSURL *)homeDirectoryURL;
-(id<HDSyncEngine>)syncEngine;
-(HDRoutineGateway *)routineGateway;
-(HDAuthorizationManager *)authorizationManager;
-(void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4 ;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(NSString *)homeDirectoryPath;
-(BOOL)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(void)registerForLaunchNotification:(const char*)arg1 ;
-(void)unregisterForLaunchNotification:(const char*)arg1 ;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(/*^block*/id)arg4 ;
-(void)didUpdateActiveWorkoutServers;
-(HDHealthServiceManager *)healthServiceManager;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(HDPluginManager *)pluginManager;
-(HDAppSubscriptionManager *)subscriptionManager;
-(id<HDViewOnWakeService>)viewOnWakeService;
-(void)setViewOnWakeService:(id<HDViewOnWakeService>)arg1 ;
-(HDFitnessFriendsManager *)fitnessFriendsManager;
-(HDServiceConnectionManager *)serviceConnectionManager;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)setAlertSuppressionService:(id<HDNanoAlertSuppressionService>)arg1 ;
-(HDAchievementAssetManager *)achievementAssetManager;
-(void)setAchievementAssetManager:(HDAchievementAssetManager *)arg1 ;
-(HDAchievementDefinitionAlertManager *)achievementDefinitionAlertManager;
-(void)setAchievementDefinitionAlertManager:(HDAchievementDefinitionAlertManager *)arg1 ;
-(void)setCurrentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 ;
-(void)setContentProtectionManager:(HDContentProtectionManager *)arg1 ;
-(HDMockPrimaryProfile *)mockPrimaryProfile;
-(void)beginTransaction:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
-(void)syncImmediatelyWithReason:(id)arg1 ;
-(void)terminate;
-(void)setSyncEngine:(id<HDSyncEngine>)arg1 ;
-(void)setHealthServiceManager:(HDHealthServiceManager *)arg1 ;
-(void)setBackgroundTaskScheduler:(HDBackgroundTaskScheduler *)arg1 ;
-(void)setPluginManager:(HDPluginManager *)arg1 ;
@end
