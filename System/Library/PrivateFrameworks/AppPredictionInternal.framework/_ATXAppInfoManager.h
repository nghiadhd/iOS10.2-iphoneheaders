/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _ATXDataStore, NSMutableDictionary, NSString, NSDate, NSMutableArray, _ATXInternalInstallNotification, _ATXInternalUninstallNotification;

@interface _ATXAppInfoManager : NSObject {

	_ATXDataStore* _dataStore;
	NSMutableDictionary* _appInfo;
	NSString* _lastLaunch;
	NSDate* _lastLaunchDate;
	long long _spotlightLaunchCount;
	long long _launchCount;
	NSMutableArray* _installDeltaLog;
	_ATXInternalInstallNotification* _installNotificationListener;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	opaque_pthread_rwlock_t _rwlock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)initWithDataStore:(id)arg1 ;
-(id)allAppsWithInstallDate;
-(void)unregisterFromRestoreStartedNotificationsFrom:(id)arg1 ;
-(id)lastAppLaunchDate;
-(void)addScreenLockAtDate:(id)arg1 ;
-(void)clearAppLaunchInfo;
-(id)lastAppLaunch;
-(void)addLaunchForBundleId:(id)arg1 withDate:(id)arg2 ;
-(void)addSpotlightLaunchForBundleId:(id)arg1 withDate:(id)arg2 ;
-(id)appInfoForBundleId:(id)arg1 ;
-(void)removeAppInfoForBundleId:(id)arg1 ;
-(void)removeAppLaunchesForBundleId:(id)arg1 ;
-(void)clearAppInstallInfo;
-(long long)launchedAppCount;
-(void)setupInMemoryCache;
-(void)registerForRestoreStartedNotificationsFrom:(id)arg1 ;
-(void)registerForRestoreCompletionNotificationsFrom:(id)arg1 ;
-(void)addInstallForBundleToDateMap:(id)arg1 ;
-(void)removeAppInfoForBundleIds:(id)arg1 ;
-(void)unregisterFromRestoreCompletionNotificationsFrom:(id)arg1 ;
-(void)setupInMemoryCacheWithAppInfoMapLocked:(id)arg1 ;
-(id)lastAppLaunchWithHistory:(id)arg1 ;
-(void)receivedDataStoreStartedNotification:(id)arg1 ;
-(void)receivedDataStoreCompletedNotification:(id)arg1 ;
-(id)_getInfoOrCreateForBundleId:(id)arg1 ;
-(BOOL)_hasBeenLaunchedForBundleId:(id)arg1 ;
-(void)_addLaunchInfoForBundle:(id)arg1 withDate:(id)arg2 updateLaunchBlock:(/*^block*/id)arg3 ;
-(void)addInstallForBundleId:(id)arg1 withDate:(id)arg2 ;
-(void)startInstallDeltaRecording;
-(id)stopInstallDeltaRecording;
-(id)initWithInMemoryStore;
@end

