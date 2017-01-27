/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXActionDelegate.h>
#import <libobjc.A.dylib/CXProviderVendorProtocol.h>

@protocol CXProviderDelegate, OS_dispatch_queue;
@class CXProviderConfiguration, NSObject, NSMutableArray, NSArray, NSString;

@interface CXProvider : NSObject <CXActionDelegate, CXProviderVendorProtocol> {

	CXProviderConfiguration* _configuration;
	id<CXProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSMutableArray* _mutablePendingTransactions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<CXProviderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CXProviderDelegatePrivate> privateDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                   //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutablePendingTransactions;                    //@synthesize mutablePendingTransactions=_mutablePendingTransactions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<CXProviderHostProtocol> hostProtocolDelegate; 
@property (nonatomic,readonly) BOOL requiresProxyingAVAudioSessionState; 
@property (nonatomic,copy) CXProviderConfiguration * configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingTransactions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)performCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDelegate:(id<CXProviderDelegate>)arg1 ;
-(id<CXProviderDelegate>)delegate;
-(void)invalidate;
-(void)setConfiguration:(CXProviderConfiguration *)arg1 ;
-(CXProviderConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CXProviderDelegatePrivate>)privateDelegate;
-(oneway void)commitTransaction:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)pendingTransactions;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)actionCompleted:(id)arg1 ;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(oneway void)handleActionTimeout:(id)arg1 ;
-(oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1 ;
-(void)reportCallWithUUID:(id)arg1 updated:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 ;
-(void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 ;
-(void)reportAudioFinishedForCallWithUUID:(id)arg1 ;
-(void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 ;
-(void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 ;
-(void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleConnectionInterruption;
-(void)registerCurrentConfiguration;
-(void)sendProviderDidBegin;
-(id<CXProviderHostProtocol>)hostProtocolDelegate;
-(BOOL)requiresProxyingAVAudioSessionState;
-(void)handleMediaServicesWereResetNotification:(id)arg1 ;
-(NSMutableArray *)mutablePendingTransactions;
-(id)pendingCallActionsOfClass:(Class)arg1 withCallUUID:(id)arg2 ;
-(void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 ;
-(void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3 ;
-(void)reportCallWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3 ;
-(void)outgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 ;
-(id)_pendingActionWithUUID:(id)arg1 ;
-(void)_updatePendingTransactions;
-(id)pendingActionsOfClass:(Class)arg1 withCallUUID:(id)arg2 ;
-(void)addIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)callWithUUID:(id)arg1 updated:(id)arg2 ;
-(void)callWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3 ;
-(void)callWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 ;
-(void)callWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3 ;
-(void)outgoingCallWithUUID:(id)arg1 startedOutgoingAtDate:(id)arg2 ;
-(void)callWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 ;
-(void)callWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 ;
-(void)outgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 ;
-(void)outgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 ;
-(void)setMutablePendingTransactions:(NSMutableArray *)arg1 ;
@end

