/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener, NSString, NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject {

	NSXPCListener* _accountStoreConnectionListener;
	NSXPCListener* _oauthSignerConnectionListener;
	NSXPCListener* _authenticationDialogConnectionListener;
	NSString* _storePath;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteAccountStoreEndpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteOAuthSignerEndpoint; 
+(id)testServer;
-(id)_pseudoUniqueDatabasePath;
-(void)startTestServer;
-(void)stopTestServer;
-(NSXPCListenerEndpoint *)remoteAccountStoreEndpoint;
-(NSXPCListenerEndpoint *)remoteOAuthSignerEndpoint;
@end

