/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object, FBWorkspaceServerDelegate;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface FBWorkspaceServer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	NSMutableArray* _messagesQueuedForSend;
	BOOL _invalidated;
	BOOL _receivedEvent;
	NSMutableDictionary* _sceneIDToSceneHandlerMap;
	id<FBWorkspaceServerDelegate> _delegate;
	unsigned long long _transactionBlockDepth;
	BOOL _triedToSendMessageInTransaction;

}

@property (nonatomic,readonly) id<FBWorkspaceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<FBWorkspaceServerDelegate>)delegate;
-(void)invalidate;
-(id)_queue;
-(void)beginTransaction;
-(void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(/*^block*/id)arg3 ofType:(Class)arg4 ;
-(void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 ;
-(BOOL)_queue_handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)sendActionsEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2 ;
-(void)unregisterSceneEventHandler:(id)arg1 forSceneID:(id)arg2 ;
-(void)sendCreateSceneEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendSceneUpdateEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendDestroySceneEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendMessageEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendSceneActionsEvent:(id)arg1 ;
-(void)_queue_clientExited;
-(void)_queue_handleMessage:(id)arg1 ;
-(void)_queue_sendMessage:(long long)arg1 withMessagePacker:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 ;
-(void)_queue_handleConnect:(id)arg1 ;
-(void)_queue_handleCreateSceneRequest:(id)arg1 ;
-(void)_queue_handleDestroySceneRequest:(id)arg1 ;
-(void)_queue_handleSceneDidUpdateClientSettings:(id)arg1 ;
-(void)_queue_handleSceneDidReceiveActions:(id)arg1 ;
-(void)_queue_handleSceneDidReceiveMessage:(id)arg1 ;
-(void)_queue_handleSceneAttachLayer:(id)arg1 ;
-(void)_queue_handleSceneUpdateLayer:(id)arg1 ;
-(void)_queue_handleSceneDetachLayer:(id)arg1 ;
-(void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2 ;
-(void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withHandlerBlock:(/*^block*/id)arg3 ;
-(void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withSceneHandlerBlock:(/*^block*/id)arg3 ;
-(id)_handlerForSceneID:(id)arg1 ;
-(void)_queue_setXPCConnection:(id)arg1 ;
-(void)endTransaction;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

