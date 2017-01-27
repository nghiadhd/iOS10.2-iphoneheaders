/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSystemServiceDelegate;
@class FBSSerialQueue, FBSystemServiceServer;

@interface FBSystemService : NSObject {

	FBSSerialQueue* _queue;
	int _pendingExit;
	id<FBSystemServiceDelegate> _delegate;
	FBSystemServiceServer* _server;

}

@property (nonatomic,retain) FBSystemServiceServer * server;                    //@synthesize server=_server - In the implementation block
@property (nonatomic,retain,readonly) FBSSerialQueue * queue;                   //@synthesize queue=_queue - In the implementation block
@property (getter=isPendingExit,readonly) BOOL pendingExit; 
@property (assign,nonatomic) id<FBSystemServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)setDelegate:(id<FBSystemServiceDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSystemServiceDelegate>)delegate;
-(FBSystemServiceServer *)server;
-(id)initWithQueue:(id)arg1 ;
-(FBSSerialQueue *)queue;
-(void)dataReset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isPasscodeLockedOrBlockedWithResult:(/*^block*/id)arg1 ;
-(void)canActivateApplication:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)handleActions:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)shutdownAndReboot:(BOOL)arg1 ;
-(void)shutdownWithOptions:(unsigned long long)arg1 ;
-(void)setPendingExit:(BOOL)arg1 ;
-(void)_performExitTasksForRelaunch:(BOOL)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_isTrustedRequestToOpenApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 ;
-(void)_activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(id)systemApplicationBundleIdentifier;
-(BOOL)_requireEntitlementToOpenURL:(id)arg1 ;
-(void)_reallyActivateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 isTrusted:(BOOL)arg5 sequenceNumber:(unsigned long long)arg6 cacheGUID:(id)arg7 ourSequenceNumber:(unsigned long long)arg8 ourCacheGUID:(id)arg9 withResult:(/*^block*/id)arg10 ;
-(BOOL)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4 ;
-(void)_logPendedActivationRequestForMismatchedClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4 ;
-(BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 ;
-(void)prepareForExitAndRelaunch:(BOOL)arg1 ;
-(BOOL)isPendingExit;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 ;
-(void)setServer:(FBSystemServiceServer *)arg1 ;
@end

