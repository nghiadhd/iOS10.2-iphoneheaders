/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface SPXPCServer : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	NSObject*<OS_dispatch_queue> _connectionsQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	double _idleTimerInterval;
	BOOL _shutdown;
	/*^block*/id _disconnectHandler;
	/*^block*/id _defaultMessageHandler;

}

@property (nonatomic,copy) id disconnectHandler;                  //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,copy) id defaultMessageHandler;              //@synthesize defaultMessageHandler=_defaultMessageHandler - In the implementation block
-(void)dealloc;
-(void)startListening;
-(id)disconnectHandler;
-(void)setDisconnectHandler:(id)arg1 ;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultMessageHandler;
-(id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)_handleNewConnection:(id)arg1 ;
-(BOOL)shutdown;
@end

