/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MCProfileServiceServer, NSObject;

@interface MCBTAJobManager : NSObject {

	int _profileChangeNotificationToken;
	int _managedAppChangeNotificationToken;
	MCProfileServiceServer* _server;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (assign,nonatomic) int profileChangeNotificationToken;                  //@synthesize profileChangeNotificationToken=_profileChangeNotificationToken - In the implementation block
@property (assign,nonatomic) int managedAppChangeNotificationToken;               //@synthesize managedAppChangeNotificationToken=_managedAppChangeNotificationToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) MCProfileServiceServer * server;              //@synthesize server=_server - In the implementation block
-(void)rescheduleProfileJanitorJob;
-(void)rescheduleManagedAppValidationJob:(id)arg1 ;
-(void)rescheduleManagedAppValidationJob;
-(void)_workQueueRescheduleProfileJanitorJob;
-(void)_workQueueRescheduleManagedAppValidationJob:(id)arg1 ;
-(void)activationLockBypassCodeWasStored:(id)arg1 ;
-(int)profileChangeNotificationToken;
-(int)managedAppChangeNotificationToken;
-(void)_workQueueRescheduleActivationLockCleanupJob;
-(id)_nextRegularDate;
-(void)_workQueueRescheduleUpdateMISTrustJob:(id)arg1 ;
-(void)rescheduleActivationLockCleanupJob;
-(void)rescheduleUpdateMISTrustJob:(id)arg1 ;
-(void)setProfileChangeNotificationToken:(int)arg1 ;
-(void)setManagedAppChangeNotificationToken:(int)arg1 ;
-(MCProfileServiceServer *)server;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setServer:(MCProfileServiceServer *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

