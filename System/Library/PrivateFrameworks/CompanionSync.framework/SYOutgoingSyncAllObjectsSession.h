/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface SYOutgoingSyncAllObjectsSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	long long _state;
	BOOL _errorIsLocal;
	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	double _sessionStartTime;
	NSMutableArray* _changesToSend;
	BOOL _cancelled;
	BOOL canRestart;
	BOOL canRollback;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(unsigned long long)protocolVersion;
-(BOOL)isResetSync;
-(void)cancelWithError:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(BOOL)isSending;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(double)remainingSessionTime;
-(BOOL)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2 ;
-(void)_sendChanges;
-(void)_sessionCompleteWithError:(id)arg1 ;
-(void)_fetchChanges;
-(void)_sessionFailed;
-(BOOL)wasCancelled;
-(id)initWithService:(id)arg1 ;
@end

