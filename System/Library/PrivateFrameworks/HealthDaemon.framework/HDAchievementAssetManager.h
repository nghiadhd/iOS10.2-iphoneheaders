/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDNanoSyncManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSHashTable, NSObject, NSNumber, NSString;

@interface HDAchievementAssetManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDNanoSyncManagerObserver> {

	HDProfile* _profile;
	NSHashTable* _assetObservers;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _waitingToRun;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_performActivity:(id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)nanoSyncManagerDidChangeState:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)initWithProfile:(id)arg1 backgroundTaskScheduler:(id)arg2 ;
-(void)_queue_notifyObservers;
-(void)addAssetObserver:(id)arg1 ;
-(void)_queue_setWaitingToRun:(BOOL)arg1 ;
-(void)_registerActivity;
-(BOOL)_queue_isWaitingToRun;
-(void)_performAchievementsUpdateIfWaitingWithCompletion:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)achievementsAdded:(id)arg1 ;
-(void)_checkForOSUpdate;
-(void)updateAllAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)_setLastSuccessfulUpdateDate:(id)arg1 ;
-(void)_requestNanoSyncAfterAssetUpdates;
-(void)_queue_performAchievementsUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)setServerURL:(id)arg1 ;
-(id)serverURLWithError:(id*)arg1 ;
-(void)removeAssetObserver:(id)arg1 ;
-(id)_lastSuccessfulUpdateDate;
@end

