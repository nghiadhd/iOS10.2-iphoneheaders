/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol OS_xpc_object, WebBookmarksXPCConnectionDelegate;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {

	NSObject*<OS_xpc_object> _listenerConnection;
	NSMutableArray* _clientConnections;
	NSMutableDictionary* _messageHandlers;
	id<WebBookmarksXPCConnectionDelegate> _delegate;

}

@property (assign,nonatomic) id<WebBookmarksXPCConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WebBookmarksXPCConnectionDelegate>)arg1 ;
-(id<WebBookmarksXPCConnectionDelegate>)delegate;
-(void)setHandler:(/*^block*/id)arg1 forMessageNamed:(const char*)arg2 ;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setMessageHandlers:(id)arg1 ;
-(void)_handleIncomingConnection:(id)arg1 ;
-(id)initListenerForMachService:(const char*)arg1 ;
@end

