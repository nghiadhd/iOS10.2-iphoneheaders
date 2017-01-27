/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, HDDeviceManager, HDHealthServiceManager, HDUserCharacteristicsManager, HDContentProtectionManager, HDBackgroundTaskScheduler, HDProcessStateManager, HDPluginManager, HDDataProvenanceManager, HDRoutineGateway, HDAppSubscriptionManager, HDNanoSyncManager, HDAuthorizationManager, HDFitnessFriendsManager, HDServiceConnectionManager, HDPrimaryProfile, HDCurrentActivitySummaryHelper, HDAchievementAssetManager, HDAchievementDefinitionAlertManager, _HKBehavior;


@protocol HDHealthDaemon <NSObject>
@property (readonly) NSString * homeDirectoryPath; 
@property (readonly) NSURL * homeDirectoryURL; 
@property (readonly) NSObject*<OS_dispatch_queue> mainQueue; 
@property (readonly) id<HDHealthDatabase> healthDatabase; 
@property (readonly) HDDeviceManager * healthDeviceManager; 
@property (readonly) HDHealthServiceManager * healthServiceManager; 
@property (readonly) HDUserCharacteristicsManager * userCharacteristicsManager; 
@property (readonly) HDContentProtectionManager * contentProtectionManager; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDProcessStateManager * processStateManager; 
@property (readonly) HDPluginManager * pluginManager; 
@property (readonly) HDDataProvenanceManager * dataProvenanceManager; 
@property (nonatomic,readonly) HDRoutineGateway * routineGateway; 
@property (nonatomic,readonly) HDAppSubscriptionManager * subscriptionManager; 
@property (nonatomic,readonly) HDNanoSyncManager * nanoSyncManager; 
@property (nonatomic,readonly) HDAuthorizationManager * authorizationManager; 
@property (nonatomic,retain) id<HDViewOnWakeService> viewOnWakeService; 
@property (nonatomic,readonly) HDFitnessFriendsManager * fitnessFriendsManager; 
@property (nonatomic,readonly) HDServiceConnectionManager * serviceConnectionManager; 
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile; 
@property (nonatomic,readonly) HDCurrentActivitySummaryHelper * currentActivitySummaryHelper; 
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService; 
@property (nonatomic,retain) HDAchievementAssetManager * achievementAssetManager; 
@property (nonatomic,retain) HDAchievementDefinitionAlertManager * achievementDefinitionAlertManager; 
@property (readonly) BOOL isAppleWatch; 
@property (nonatomic,readonly) _HKBehavior * behavior; 
@required
-(NSObject*<OS_dispatch_queue>)mainQueue;
-(_HKBehavior *)behavior;
-(id<HDHealthDatabase>)healthDatabase;
-(HDDeviceManager *)healthDeviceManager;
-(HDUserCharacteristicsManager *)userCharacteristicsManager;
-(BOOL)isAppleWatch;
-(void)registerForDaemonReady:(id)arg1;
-(HDDataProvenanceManager *)dataProvenanceManager;
-(HDNanoSyncManager *)nanoSyncManager;
-(id)temporaryProfile;
-(HDCurrentActivitySummaryHelper *)currentActivitySummaryHelper;
-(HDPrimaryProfile *)primaryProfile;
-(id)firstPartyWorkoutSnapshot;
-(void)pauseAllActiveWorkoutsWithCompletion:(/*^block*/id)arg1;
-(BOOL)hasAnyActiveWorkouts;
-(HDContentProtectionManager *)contentProtectionManager;
-(HDProcessStateManager *)processStateManager;
-(NSURL *)homeDirectoryURL;
-(HDRoutineGateway *)routineGateway;
-(HDAuthorizationManager *)authorizationManager;
-(void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id*)arg3;
-(NSString *)homeDirectoryPath;
-(BOOL)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id*)arg3;
-(void)registerForLaunchNotification:(const char*)arg1;
-(void)unregisterForLaunchNotification:(const char*)arg1;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(/*^block*/id)arg4;
-(void)didUpdateActiveWorkoutServers;
-(HDHealthServiceManager *)healthServiceManager;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(HDPluginManager *)pluginManager;
-(HDAppSubscriptionManager *)subscriptionManager;
-(id<HDViewOnWakeService>)viewOnWakeService;
-(void)setViewOnWakeService:(id)arg1;
-(HDFitnessFriendsManager *)fitnessFriendsManager;
-(HDServiceConnectionManager *)serviceConnectionManager;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)setAlertSuppressionService:(id)arg1;
-(HDAchievementAssetManager *)achievementAssetManager;
-(void)setAchievementAssetManager:(id)arg1;
-(HDAchievementDefinitionAlertManager *)achievementDefinitionAlertManager;
-(void)setAchievementDefinitionAlertManager:(id)arg1;

@end

