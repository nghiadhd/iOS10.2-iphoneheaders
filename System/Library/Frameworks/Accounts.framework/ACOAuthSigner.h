/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDOAuthSignerProtocol;
@class NSXPCConnection, ACAccount;

@interface ACOAuthSigner : NSObject {

	NSXPCConnection* _connection;
	ACAccount* _account;
	id<ACDOAuthSignerProtocol> _proxyShim;
	BOOL _shouldIncludeAppIdInRequest;

}

@property (assign,nonatomic) BOOL shouldIncludeAppIdInRequest;              //@synthesize shouldIncludeAppIdInRequest=_shouldIncludeAppIdInRequest - In the implementation block
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2 ;
-(void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1 ;
-(void)disconnectFromRemoteOAuthSigner;
-(id)signedURLRequestWithURLRequest:(id)arg1 ;
-(BOOL)shouldIncludeAppIdInRequest;
-(void)dealloc;
-(id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(id)initWithAccount:(id)arg1 ;
@end

