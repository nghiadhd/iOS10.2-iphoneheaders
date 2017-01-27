/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSCountedSet, CAMBurstSession, CAMPersistenceController, CAMProtectionController, CAMPowerController, CAMRemoteShutterController, NSString;

@interface CAMBurstController : NSObject {

	NSObject*<OS_dispatch_queue> __mutexQueue;
	NSMutableDictionary* __sessionsByIdentifier;
	NSCountedSet* __inflightRequestsByIdentifier;
	NSCountedSet* __requestsPendingPersistenceByIdentifier;
	NSMutableDictionary* __faceResultsByIdentifier;
	CAMBurstSession* __activeSession;
	NSObject*<OS_dispatch_queue> __analysisQueue;
	CAMPersistenceController* __persistenceController;
	CAMProtectionController* __protectionController;
	CAMPowerController* __powerController;
	CAMRemoteShutterController* __remoteShutterController;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _mutexQueue;                              //@synthesize _mutexQueue=__mutexQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionsByIdentifier;                           //@synthesize _sessionsByIdentifier=__sessionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inflightRequestsByIdentifier;                          //@synthesize _inflightRequestsByIdentifier=__inflightRequestsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _requestsPendingPersistenceByIdentifier;                //@synthesize _requestsPendingPersistenceByIdentifier=__requestsPendingPersistenceByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _faceResultsByIdentifier;                        //@synthesize _faceResultsByIdentifier=__faceResultsByIdentifier - In the implementation block
@property (setter=_setActiveSession:,nonatomic,retain) CAMBurstSession * _activeSession;              //@synthesize _activeSession=__activeSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _analysisQueue;                           //@synthesize _analysisQueue=__analysisQueue - In the implementation block
@property (nonatomic,__weak,readonly) CAMPersistenceController * _persistenceController;              //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * _protectionController;                       //@synthesize _protectionController=__protectionController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                 //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * _remoteShutterController;                 //@synthesize _remoteShutterController=__remoteShutterController - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentBurstIdentifier; 
@property (nonatomic,readonly) unsigned long long currentBurstCount; 
-(id)init;
-(CAMRemoteShutterController *)_remoteShutterController;
-(CAMPowerController *)_powerController;
-(NSObject*<OS_dispatch_queue>)_mutexQueue;
-(void)processPersistedRequest:(id)arg1 withResult:(id)arg2 ;
-(CAMProtectionController *)_protectionController;
-(unsigned long long)estimatedCountForIdentifier:(id)arg1 ;
-(NSString *)currentBurstIdentifier;
-(void)processEnqueuedRequest:(id)arg1 ;
-(unsigned long long)currentBurstCount;
-(id)startBurstCapture;
-(void)finishBurstCaptureForDevice:(long long)arg1 ;
-(void)processCapturedRequest:(id)arg1 withResult:(id)arg2 ;
-(void)processFaceResults:(id)arg1 ;
-(CAMPersistenceController *)_persistenceController;
-(id)initWithProtectionController:(id)arg1 powerController:(id)arg2 remoteShutterController:(id)arg3 ;
-(CAMBurstSession *)_activeSession;
-(void)_setActiveSession:(id)arg1 ;
-(NSMutableDictionary *)_sessionsByIdentifier;
-(NSCountedSet *)_requestsPendingPersistenceByIdentifier;
-(NSMutableDictionary *)_faceResultsByIdentifier;
-(NSObject*<OS_dispatch_queue>)_analysisQueue;
-(void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)arg1 device:(long long)arg2 ;
-(NSCountedSet *)_inflightRequestsByIdentifier;
-(void)setPersistenceController:(id)arg1 ;
-(void)cancelBurstCapture;
-(unsigned long long)inflightCountForIdentifier:(id)arg1 ;
@end

