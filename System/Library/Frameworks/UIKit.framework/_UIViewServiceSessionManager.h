/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {

	os_unfair_lock_s _lock;
	NSXPCListener* _listener;
	NSMutableArray* _sessions;
	int _connectionNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasActiveSessions;
+(void)startViewServiceSessionManagerAsPlugin:(BOOL)arg1 ;
+(id)__serviceSessionManager;
-(id)init;
-(void)dealloc;
-(id)_initAsPlugIn:(BOOL)arg1 ;
-(BOOL)_hasActiveSessions;
-(void)_startListener;
-(void)_startListenerWithName:(id)arg1 ;
-(void)_registerSessionForDefaultDeputies:(id)arg1 ;
-(void)_startOrStopSystemsForBackgroundRunning;
-(void)_configureSessionForConnection:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

