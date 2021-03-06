/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface DMXPCConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) id interruptionHandler;                                         //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (copy) id invalidationHandler;                                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)resume;
-(NSObject*<OS_xpc_object>)connection;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
@end

