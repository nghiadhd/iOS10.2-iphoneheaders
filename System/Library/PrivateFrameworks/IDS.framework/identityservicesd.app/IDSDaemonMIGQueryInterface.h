/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IDSDaemonMIGQueryInterface : NSObject {

	NSObject*<OS_xpc_object> _server;
	id _delegate;
	BOOL _shuttingDown;

}

@property (__weak) id<IDSDaemonMIGQueryInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)acceptIncomingGrantRequests;
-(void)denyIncomingGrantRequests;
-(void)__setupServer;
-(void)setDelegate:(id<IDSDaemonMIGQueryInterfaceDelegate>)arg1 ;
-(id<IDSDaemonMIGQueryInterfaceDelegate>)delegate;
@end

