/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MCJobQueue, NSObject, MCUserNotificationManager, NSString, MCTimerContext;

@interface MCAirPlayManager : NSObject {

	MCJobQueue* _jobQueue;
	NSObject*<OS_dispatch_queue> _executionQueue;
	MCUserNotificationManager* _userNotificationManager;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSString* _memberQueueCurrentlyJoiningDestinationName;
	NSString* _memberQueueCurrentlyJoiningDestinationDeviceID;
	/*^block*/id _executionQueueBonjourWaitContinuation;
	MCTimerContext* _executionQueueBonjourWaitTimerContext;

}

@property (nonatomic,retain) MCJobQueue * jobQueue;                                                  //@synthesize jobQueue=_jobQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;                            //@synthesize executionQueue=_executionQueue - In the implementation block
@property (nonatomic,retain) MCUserNotificationManager * userNotificationManager;                    //@synthesize userNotificationManager=_userNotificationManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                               //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSString * memberQueueCurrentlyJoiningDestinationName;                  //@synthesize memberQueueCurrentlyJoiningDestinationName=_memberQueueCurrentlyJoiningDestinationName - In the implementation block
@property (nonatomic,retain) NSString * memberQueueCurrentlyJoiningDestinationDeviceID;              //@synthesize memberQueueCurrentlyJoiningDestinationDeviceID=_memberQueueCurrentlyJoiningDestinationDeviceID - In the implementation block
@property (nonatomic,copy) id executionQueueBonjourWaitContinuation;                                 //@synthesize executionQueueBonjourWaitContinuation=_executionQueueBonjourWaitContinuation - In the implementation block
@property (nonatomic,retain) MCTimerContext * executionQueueBonjourWaitTimerContext;                 //@synthesize executionQueueBonjourWaitTimerContext=_executionQueueBonjourWaitTimerContext - In the implementation block
+(id)sharedManager;
-(MCJobQueue *)jobQueue;
-(void)setJobQueue:(MCJobQueue *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(void)requestMirroringWithDestinationName:(id)arg1 destinationDeviceID:(id)arg2 password:(id)arg3 scanWaitTime:(double)arg4 assertion:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)stopMirroringWithAssertion:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSString *)memberQueueCurrentlyJoiningDestinationName;
-(NSString *)memberQueueCurrentlyJoiningDestinationDeviceID;
-(id)pickableMirroringRouteWithName:(id)arg1 deviceID:(id)arg2 fromRoutes:(id)arg3 ;
-(void)setMemberQueueCurrentlyJoiningDestinationName:(NSString *)arg1 ;
-(void)setMemberQueueCurrentlyJoiningDestinationDeviceID:(NSString *)arg1 ;
-(void)_stopMediaRemoteNotifications;
-(void)postIsPromptingStatusDidChangeNotification;
-(MCUserNotificationManager *)userNotificationManager;
-(id)executionQueueBonjourWaitContinuation;
-(MCTimerContext *)executionQueueBonjourWaitTimerContext;
-(void)setExecutionQueueBonjourWaitTimerContext:(MCTimerContext *)arg1 ;
-(void)setExecutionQueueBonjourWaitContinuation:(id)arg1 ;
-(void)executionQueueCancelBonjourWait;
-(void)promptUserToMirrorWithRoute:(id)arg1 name:(id)arg2 deviceID:(id)arg3 password:(id)arg4 assertion:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_executionQueueStopBonjourWait;
-(void)setUserNotificationManager:(MCUserNotificationManager *)arg1 ;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

