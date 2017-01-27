/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, BKSApplicationStateMonitor, NSData, NSString;

@interface XPCClient : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _applicationState;
	long long _clientType;
	NSXPCConnection* _inputConnection;
	int _pid;
	BKSApplicationStateMonitor* _stateMonitor;
	NSObject*<OS_dispatch_queue> _xpcConnectionCreationQueue;
	NSData* _auditTokenData;
	NSString* _clientID;
	NSString* _clientVersion;
	NSXPCConnection* _outputConnection;

}

@property (nonatomic,copy) NSData * auditTokenData;                                   //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                       //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) long long clientType; 
@property (nonatomic,copy) NSString * clientVersion;                                  //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * outputConnection;                      //@synthesize outputConnection=_outputConnection - In the implementation block
+(id)clientIDForConnnection:(id)arg1 ;
+(id)_copyExecutablePathForConnection:(id)arg1 ;
+(id)_copyBundleForExecutablePath:(id)arg1 ;
-(id)initWithInputConnection:(id)arg1 ;
-(void)_createConnection:(id)arg1 ;
-(void)_destoryConnection;
-(id)_copyClientValues;
-(long long)_clientType;
-(NSData *)auditTokenData;
-(id)addClientEntityToDatabase:(id)arg1 ;
-(BOOL)canReceiveMessages;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(NSXPCConnection *)outputConnection;
-(void)setOutputConnection:(NSXPCConnection *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)_applicationStateChanged:(id)arg1 ;
-(long long)clientType;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
@end
