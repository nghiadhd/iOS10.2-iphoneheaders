/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <libobjc.A.dylib/SYServiceDelegate.h>
#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/NPHVMSessionDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction, OS_dispatch_semaphore;
@class NPSDomainAccessor, NSObject, NSMutableArray, PSYSyncCoordinator, NPHVMSyncSessionManager, PSYServiceSyncSession, VMVoicemailManager, SYService, NSString;

@interface VoicemailCompanionReplication : NSObject <SYServiceDelegate, PSYSyncCoordinatorDelegate, NPHVMSessionDelegate> {

	NPSDomainAccessor* _domainAccessor;
	opaque_pthread_mutex_t _domainAccessorMutexLock;
	NSObject*<OS_dispatch_queue> _companionSyncQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSObject*<OS_dispatch_queue> _vmSyncServiceQueue;
	NSMutableArray* _vmAfterSyncComplete;
	PSYSyncCoordinator* _coordinator;
	NPHVMSyncSessionManager* _vmSyncSessionManager;
	PSYServiceSyncSession* _vmServiceSyncSession;
	opaque_pthread_mutex_t _syncTransactionMutex;
	NSObject*<OS_os_transaction> _syncTransaction;
	VMVoicemailManager* _voicemailManager;
	NSObject*<OS_dispatch_semaphore> _deltaSyncInProgress;
	BOOL _deltaSyncSuccessful;
	NSObject*<OS_dispatch_semaphore> waitForFirstSyncRestrictionSemaphore;
	BOOL _didSuspendCompanionSyncQueue;
	NSObject*<OS_dispatch_semaphore> vmdIsReadySemaphore;
	BOOL _syncRestrictionsAtStartup;
	BOOL _sigtermCalled;
	SYService* _vmSyncService;

}

@property (assign) BOOL sigtermCalled;                               //@synthesize sigtermCalled=_sigtermCalled - In the implementation block
@property (nonatomic,retain) SYService * vmSyncService;              //@synthesize vmSyncService=_vmSyncService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_registerForNotifications;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3 ;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3 ;
-(void)serviceDidPairDevice:(id)arg1 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(void)reportProgress:(double)arg1 ;
-(void)_handleVoicemailsChangedNotification:(id)arg1 ;
-(void)_deltaSyncIsReunion:(BOOL)arg1 ;
-(void)_performAfterFirstDeviceUnlockAndSyncRestrictionNone:(/*^block*/id)arg1 ;
-(id)listOfVoicemailsToSync;
-(id)voicemailChangeSetFrom:(id)arg1 ;
-(void)setRemoteVoicemails:(id)arg1 ;
-(void)_initializeDomainAccessor;
-(void)removeFromRemoteVoicemails:(id)arg1 ;
-(id)remoteVoicemails;
-(id)changeSetForRemoteVoicemails:(id)arg1 fromVMVoicemails:(id)arg2 ;
-(void)_handleVoicemailSubscriptionStateStatusChanged:(id)arg1 ;
-(void)waitForVMDToBeUpAndRunning;
-(void)_enqueueAllVoicemailsAndLockSyncTransactionMutex;
-(long long)indexOfVoicemail:(id)arg1 inArray:(id)arg2 ;
-(long long)maxVoicemailCount;
-(long long)maxVoicemailTotalBytes;
-(void)handleSIGTERM;
-(SYService *)vmSyncService;
-(void)setVmSyncService:(SYService *)arg1 ;
-(BOOL)sigtermCalled;
-(void)setSigtermCalled:(BOOL)arg1 ;
@end

