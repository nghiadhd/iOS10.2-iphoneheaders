/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDFitnessFriendsServerInterface.h>

@class NSString;

@interface HDFitnessFriendsServer : HDSubserver <HDFitnessFriendsServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_fitnessFriendsManger;
-(void)remote_sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_removeFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_pushFakeDataWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAllDataWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fitnessFriendsCloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_clearFriendListWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

