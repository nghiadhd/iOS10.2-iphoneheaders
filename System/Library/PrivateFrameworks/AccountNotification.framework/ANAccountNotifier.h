/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ANClientCallbackProtocol.h>

@protocol ANAccountNotifierDelegate;
@class NSXPCConnection, NSXPCListener, NSString;

@interface ANAccountNotifier : NSObject <NSXPCListenerDelegate, ANClientCallbackProtocol> {

	NSXPCConnection* _daemonConnection;
	NSXPCListener* _bulletinResponseListener;
	NSString* _callbackMachService;
	id<ANAccountNotifierDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ANAccountNotifierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<ANAccountNotifierDelegate>)arg1 ;
-(void)dealloc;
-(id<ANAccountNotifierDelegate>)delegate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_daemonConnection;
-(void)_disconnectFromDaemon;
-(id)initWithCallbackMachService:(id)arg1 ;
-(void)_startNotificationCallbackListenerWithMachServiceName:(id)arg1 ;
-(void)_stopNotificationCallbackListener;
-(id)_createDaemonConnection;
-(void)_daemonConnectionWasInvalidated;
-(void)_daemonConnectionWasInterrupted;
-(void)notificationWasActivated:(id)arg1 ;
-(void)notificationWasDismissed:(id)arg1 ;
-(void)notificationWasCleared:(id)arg1 ;
-(void)removeSectionSubtypeWithDescriptor:(id)arg1 ;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(void)addSectionSubtypeWithDescriptor:(id)arg1 ;
-(void)addNotification:(id)arg1 ;
-(void)removeNotificationsWithEventIdentifier:(id)arg1 ;
@end

