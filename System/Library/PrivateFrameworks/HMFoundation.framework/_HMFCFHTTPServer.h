/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFLogging.h>

@protocol _HMFCFHTTPServerDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface _HMFCFHTTPServer : NSObject <HMFLogging> {

	id<_HMFCFHTTPServerDelegate> _delegate;
	unsigned long long _port;
	NSObject*<OS_dispatch_queue> _clientQueue;
	CFHTTPServerRef _internal;
	NSMutableArray* _connections;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) CFHTTPServerRef internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSMutableArray * connections;                          //@synthesize connections=_connections - In the implementation block
@property (__weak) id<_HMFCFHTTPServerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long port;                               //@synthesize port=_port - In the implementation block
@property (assign) double connectionIdleTimeout; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)setDelegate:(id<_HMFCFHTTPServerDelegate>)arg1 ;
-(void)dealloc;
-(id<_HMFCFHTTPServerDelegate>)delegate;
-(void)invalidate;
-(BOOL)isValid;
-(unsigned long long)port;
-(NSMutableArray *)connections;
-(double)watchdogTimeout;
-(CFHTTPServerRef)internal;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setConnectionIdleTimeout:(double)arg1 ;
-(id)initWithPort:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)setWatchdogTimeout:(double)arg1 ;
-(double)connectionIdleTimeout;
@end

