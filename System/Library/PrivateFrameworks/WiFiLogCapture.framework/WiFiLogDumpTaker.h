/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WiFiLogCapture.framework/WiFiLogCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface WiFiLogDumpTaker : NSObject {

	NSObject*<OS_dispatch_queue> event_queue;
	NSObject*<OS_xpc_object> xpc_connection;
	BOOL _didLastCaptureFallback;

}

@property (nonatomic,readonly) BOOL didLastCaptureFallback;              //@synthesize didLastCaptureFallback=_didLastCaptureFallback - In the implementation block
-(id)init;
-(void)handleConnection:(id)arg1 ;
-(void)takeWiFiDiagnosticsDumpWithPath:(const char*)arg1 reason:(const char*)arg2 shouldTryFallback:(BOOL)arg3 callback:(/*^block*/id)arg4 ;
-(id)XPCConnection:(const char*)arg1 ;
-(void)takeWiFiCoreCaptureDumpWithReason:(const char*)arg1 callback:(/*^block*/id)arg2 ;
-(void)takeWiFiDiagnosticsDumpWithPath:(const char*)arg1 reason:(const char*)arg2 callback:(/*^block*/id)arg3 ;
-(void)takeWiFiDiagnosticsDumpWithPathAndReason:(/*^block*/id)arg1 :(const char*)arg2 :(const char*)arg3 ;
-(BOOL)didLastCaptureFallback;
@end

