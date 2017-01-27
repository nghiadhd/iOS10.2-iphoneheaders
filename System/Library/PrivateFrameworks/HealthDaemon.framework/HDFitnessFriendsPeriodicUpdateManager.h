/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDFitnessFriendsManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDFitnessFriendsActivityDataManager, HDFitnessFriendsCloudKitManager, HDFitnessFriendsFriendListManager, HDFitnessFriendsRelationshipManager, NSObject, NSString;

@interface HDFitnessFriendsPeriodicUpdateManager : NSObject <HDFitnessFriendsManagerReadyObserver> {

	HDFitnessFriendsActivityDataManager* _activityDataManager;
	HDFitnessFriendsCloudKitManager* _cloudKitManager;
	HDFitnessFriendsFriendListManager* _friendListManager;
	HDFitnessFriendsRelationshipManager* _relationshipManager;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _isWatch;
	BOOL _hasRegisteredForUpdates;

}

@property (nonatomic,readonly) BOOL hasRegisteredForUpdates;              //@synthesize hasRegisteredForUpdates=_hasRegisteredForUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithIsWatch:(BOOL)arg1 ;
-(void)beginPeriodicUpdates;
-(void)fitnessFriendsManagerReady:(id)arg1 ;
-(void)_queue_performUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)endPeriodicUpdates;
-(void)requestImmediateUpdate;
-(BOOL)hasRegisteredForUpdates;
@end

