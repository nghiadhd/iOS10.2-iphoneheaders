/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CARSessionObserving, OS_dispatch_queue;
@class CARSession, NSObject;

@interface CARSessionStatus : NSObject {

	id<CARSessionObserving> _sessionObserver;
	CARSession* _session;
	NSObject*<OS_dispatch_queue> _sessionUpdatesQueue;

}

@property (nonatomic,retain) CARSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sessionUpdatesQueue;              //@synthesize sessionUpdatesQueue=_sessionUpdatesQueue - In the implementation block
@property (nonatomic,readonly) CARSession * currentSession; 
@property (assign,nonatomic,__weak) id<CARSessionObserving> sessionObserver;                //@synthesize sessionObserver=_sessionObserver - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setSession:(CARSession *)arg1 ;
-(CARSession *)currentSession;
-(CARSession *)session;
-(void)_updateSession;
-(void)setSessionUpdatesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sessionUpdatesQueue;
-(void)_notifyDidConnectSession:(id)arg1 ;
-(void)_notifyDidDisconnectSession:(id)arg1 ;
-(id<CARSessionObserving>)sessionObserver;
-(void)setSessionObserver:(id<CARSessionObserving>)arg1 ;
@end

