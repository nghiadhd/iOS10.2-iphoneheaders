/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSXPCConnection;

@interface MCMDMClient : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedClient;
-(void)_createAndStartMDMXPCConnection;
-(void)scheduleTokenUpdate;
-(void)simulatePush;
-(int)accessRights;
-(void)migrateMDMWithContext:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)processUserRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)authenticateWithCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 topic:(id)arg3 useDevelopmentAPNS:(BOOL)arg4 signMessage:(BOOL)arg5 outError:(id*)arg6 ;
-(BOOL)checkOutCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 topic:(id)arg3 signMessage:(BOOL)arg4 outError:(id*)arg5 ;
-(void)notifyNewConfiguration;
-(void)scheduleTokenUpdateIfNecessary;
-(void)retryNotNowResponse;
-(void)uprootMDM;
-(BOOL)isManagedByMDM;
-(BOOL)isActivationLockAllowedWhileSupervised;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end
