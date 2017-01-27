/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFHTTPServerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDHTTPServerMessageTransportDelegate, OS_dispatch_queue;
@class NSMutableArray, HMFHTTPServer, NSUUID, NSObject, NSArray, NSDictionary, NSString;

@interface HMDHTTPServerMessageTransport : NSObject <HMFHTTPServerDelegate, HMFTimerDelegate> {

	NSMutableArray* _clientConnections;
	HMFHTTPServer* _server;
	id<HMDHTTPServerMessageTransportDelegate> _delegate;
	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMFHTTPServer * server;                                  //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) NSArray * clientConnections; 
@property (__weak) id<HMDHTTPServerMessageTransportDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy,readonly) NSDictionary * TXTRecord; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(id)init;
-(void)setDelegate:(id<HMDHTTPServerMessageTransportDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDHTTPServerMessageTransportDelegate>)delegate;
-(NSUUID *)identifier;
-(HMFHTTPServer *)server;
-(void)stop;
-(id)shortDescription;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)devices;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)sendMessage:(id)arg1 toDevices:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setTXTRecordValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeTXTRecordValueForKey:(id)arg1 ;
-(id)initWithServerIdentifier:(id)arg1 ;
-(NSDictionary *)TXTRecord;
-(void)confirmDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)server:(id)arg1 didStopWithError:(id)arg2 ;
-(void)__registerReceiveMessageHandler;
-(void)__registerSendResponseHandler;
-(void)__registerSendMessageHandler;
-(void)__registerPingHandler;
-(NSArray *)clientConnections;
-(void)_stopWithError:(id)arg1 ;
-(void)removeAllClientConnections;
-(id)_clientConnectionForDevice:(id)arg1 ;
-(void)addClientConnection:(id)arg1 ;
-(void)removeClientConnection:(id)arg1 ;
-(BOOL)server:(id)arg1 shouldAcceptConnection:(id)arg2 ;
-(void)server:(id)arg1 didOpenConnection:(id)arg2 ;
-(void)server:(id)arg1 didCloseConnection:(id)arg2 ;
@end

