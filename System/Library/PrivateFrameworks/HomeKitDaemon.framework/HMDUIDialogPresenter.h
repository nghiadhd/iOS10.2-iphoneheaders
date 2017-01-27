/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
@class NSObject, NSMutableArray;

@interface HMDUIDialogPresenter : NSObject {

	BOOL _selectedByPeerDevice;
	BOOL _peerDeviceAcceptedSelection;
	NSObject*<OS_dispatch_queue> _workQueue;
	CFUserNotificationRef _currentNotification;
	id _currentContext;
	NSMutableArray* _pendingContexts;
	NSObject*<OS_dispatch_semaphore> _notificationSem;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef currentNotification;                     //@synthesize currentNotification=_currentNotification - In the implementation block
@property (nonatomic,retain) id currentContext;                                             //@synthesize currentContext=_currentContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingContexts;                              //@synthesize pendingContexts=_pendingContexts - In the implementation block
@property (assign,nonatomic) BOOL selectedByPeerDevice;                                     //@synthesize selectedByPeerDevice=_selectedByPeerDevice - In the implementation block
@property (assign,nonatomic) BOOL peerDeviceAcceptedSelection;                              //@synthesize peerDeviceAcceptedSelection=_peerDeviceAcceptedSelection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> notificationSem;              //@synthesize notificationSem=_notificationSem - In the implementation block
+(id)sharedUIDialogPresenter;
-(id)init;
-(void)setCurrentContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)currentContext;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 bridge:(id)arg3 withContext:(id)arg4 queue:(id)arg5 numeric:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)confirmAddUser:(id)arg1 toHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)confirmRemoveUser:(id)arg1 fromHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_semaphore>)notificationSem;
-(CFUserNotificationRef)currentNotification;
-(NSMutableArray *)pendingContexts;
-(void)setSelectedByPeerDevice:(BOOL)arg1 ;
-(void)setPeerDeviceAcceptedSelection:(BOOL)arg1 ;
-(void)setCurrentNotification:(CFUserNotificationRef)arg1 ;
-(BOOL)selectedByPeerDevice;
-(BOOL)peerDeviceAcceptedSelection;
-(BOOL)_addToPendingContext:(id)arg1 ;
-(void)_requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 bridge:(id)arg3 withContext:(id)arg4 queue:(id)arg5 numeric:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(BOOL)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 textField:(id*)arg3 withContext:(id)arg4 ;
-(void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_confirmAddUser:(id)arg1 toHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_confirmRemoveUser:(id)arg1 fromHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_displayInternalErrorWithContext:(id)arg1 message:(id)arg2 ;
-(BOOL)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id*)arg4 withContext:(id)arg5 ;
-(BOOL)_addCurrentNotification:(CFUserNotificationRef)arg1 withContext:(id)arg2 ;
-(BOOL)_removeCurrentNotification:(CFUserNotificationRef)arg1 currentSelection:(BOOL)arg2 selectedByPeerDevice:(BOOL*)arg3 andContext:(id)arg4 ;
-(BOOL)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id*)arg4 withContext:(id)arg5 selectedByPeerDevice:(BOOL*)arg6 timeout:(double)arg7 ;
-(void)dismissPendingDialogWithContext:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dismissPendingDialogDueToPeerDeviceSelection:(BOOL)arg1 context:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_isPendingContext:(id)arg1 ;
-(void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)displayInternalErrorWithContext:(id)arg1 message:(id)arg2 ;
-(void)confirmReportAccessory:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)displayExecutionErrorOfTrigger:(id)arg1 partialSuccess:(BOOL)arg2 context:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setPendingContexts:(NSMutableArray *)arg1 ;
-(void)setNotificationSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

