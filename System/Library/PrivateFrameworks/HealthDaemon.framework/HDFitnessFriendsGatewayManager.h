/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDFitnessFriendsCloudKitManagerChangesObserver.h>
#import <libobjc.A.dylib/HDFitnessFriendsManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDFitnessFriendsFriendListManager, HDFitnessFriendsCloudKitManager, NSObject, NSHashTable, NSString;

@interface HDFitnessFriendsGatewayManager : NSObject <HDFitnessFriendsCloudKitManagerChangesObserver, HDFitnessFriendsManagerReadyObserver> {

	HDFitnessFriendsFriendListManager* _friendListManager;
	HDFitnessFriendsCloudKitManager* _cloudKitManager;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	BOOL _currentlyPairedWatchMeetsMinimumVersion;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL hasReachedMaximumNumberOfFriends; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)updateState;
-(void)beginObserving;
-(void)fitnessFriendsManagerReady:(id)arg1 ;
-(void)cloudKitManagerDidUpdateAccountStatus:(id)arg1 ;
-(void)_queue_notifyObservers;
-(void)gatewayStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasReachedMaximumNumberOfFriends;
-(BOOL)shouldFilterIncomingMessageFrom:(id)arg1 ;
-(BOOL)isInviteVersionCompatible:(unsigned)arg1 ;
@end

