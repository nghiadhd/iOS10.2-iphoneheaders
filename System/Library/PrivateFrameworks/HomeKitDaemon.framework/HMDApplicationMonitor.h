/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDApplicationMonitorDelegate, OS_dispatch_queue;
@class NSObject, NSMutableSet, BKSApplicationStateMonitor, HMDApplicationRegistry, HMFTimer, NSSet, NSString;

@interface HMDApplicationMonitor : NSObject <HMFTimerDelegate> {

	BOOL _sendHomeUIServiceTerminatedNotification;
	id<HMDApplicationMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableSet* _processes;
	BKSApplicationStateMonitor* _monitor;
	HMDApplicationRegistry* _appRegistry;
	HMFTimer* _homeUIServiceTerminationDelayTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * processes;                                     //@synthesize processes=_processes - In the implementation block
@property (nonatomic,readonly) BKSApplicationStateMonitor * monitor;                         //@synthesize monitor=_monitor - In the implementation block
@property (assign,nonatomic,__weak) HMDApplicationRegistry * appRegistry;                    //@synthesize appRegistry=_appRegistry - In the implementation block
@property (nonatomic,retain) HMFTimer * homeUIServiceTerminationDelayTimer;                  //@synthesize homeUIServiceTerminationDelayTimer=_homeUIServiceTerminationDelayTimer - In the implementation block
@property (assign,nonatomic) BOOL sendHomeUIServiceTerminatedNotification;                   //@synthesize sendHomeUIServiceTerminatedNotification=_sendHomeUIServiceTerminatedNotification - In the implementation block
@property (nonatomic,readonly) NSSet * foregroundApps; 
@property (nonatomic,readonly) NSSet * backgroundApps; 
@property (nonatomic,readonly) BOOL activeHomeKitApps; 
@property (assign,nonatomic,__weak) id<HMDApplicationMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicationStateDescription:(unsigned long long)arg1 ;
-(id)init;
-(void)setDelegate:(id<HMDApplicationMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<HMDApplicationMonitorDelegate>)delegate;
-(void)start;
-(BKSApplicationStateMonitor *)monitor;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDApplicationRegistry *)appRegistry;
-(void)timerDidFire:(id)arg1 ;
-(id)activeRequests;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
-(NSMutableSet *)processes;
-(void)_handleAppStateChangedInfo:(id)arg1 ;
-(unsigned long long)_translateApplicationState:(unsigned)arg1 ;
-(BOOL)infoIsForViewService:(id)arg1 ;
-(id)processInfoForPID:(int)arg1 ;
-(void)_updateProcessInfo:(id)arg1 info:(id)arg2 ;
-(void)_callAppStateChangeDelegate:(id)arg1 ;
-(void)setSendHomeUIServiceTerminatedNotification:(BOOL)arg1 ;
-(HMFTimer *)homeUIServiceTerminationDelayTimer;
-(void)setHomeUIServiceTerminationDelayTimer:(HMFTimer *)arg1 ;
-(void)_postAppTerminatedNotification:(id)arg1 ;
-(void)removeProcess:(id)arg1 ;
-(BOOL)activeHomeKitApps;
-(unsigned long long)translateApplicationStateForInfo:(id)arg1 processInfo:(id)arg2 ;
-(id)foregroundAppIdentifiers;
-(void)_callActiveHomeKitAppDelegate:(BOOL)arg1 ;
-(BOOL)_delegateConformsAndRespondsToSelector:(SEL)arg1 ;
-(NSSet *)foregroundApps;
-(id)backgroundToForegroundApps;
-(BOOL)sendHomeUIServiceTerminatedNotification;
-(void)addProcess:(id)arg1 ;
-(id)applicationInfoForApplication:(id)arg1 ;
-(id)applicationInfoForPID:(int)arg1 ;
-(NSSet *)backgroundApps;
@end

