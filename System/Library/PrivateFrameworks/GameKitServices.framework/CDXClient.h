/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDXClientDelegate, OS_dispatch_queue, OS_dispatch_source;
#import <GameKitServices/GameKitServices-Structs.h>
@class NSData, NSMutableDictionary, NSError, NSString, NSObject;

@interface CDXClient : NSObject {

	id<CDXClientDelegate> delegate_;
	long long holePunchAttemptCount_;
	NSData* preblob_;
	NSMutableDictionary* sessionLookup_;
	NSError* error_;
	int fd_;
	unsigned long long holePunchSID_;
	unsigned long long prevHolePunchSID_;
	NSString* server_;
	unsigned short port_;
	unsigned short localPort_;
	long long restartCount_;
	sockaddr_in cdxaddr_ipv4;
	addrinfo* cdxMappedIPv4Addr;
	double holePunchInterval_;
	BOOL preblobIsUpToDate_;
	BOOL willReconfigureShortly_;
	SCDynamicStoreRef scDynamicStore_;
	CFRunLoopSourceRef scDynamicStoreRunLoopSource_;
	NSObject*<OS_dispatch_queue> queue_;
	NSObject*<OS_dispatch_source> source_;
	NSObject*<OS_dispatch_source> holePunchTimer_;
	/*^block*/id preblobCallback_;
	void** padding_[10];

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id preblobCallback; 
@property (assign,nonatomic) id<CDXClientDelegate> delegate; 
@property (readonly) NSData * preblob; 
@property (nonatomic,readonly) NSError * error; 
+(id)sharedClient;
-(void)setDelegate:(id<CDXClientDelegate>)arg1 ;
-(void)dealloc;
-(id<CDXClientDelegate>)delegate;
-(void)invalidate;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)restart;
-(void)invalidateSession:(id)arg1 ;
-(BOOL)sendRaw:(id)arg1 ;
-(id)initWithOptions:(id)arg1 delegate:(id)arg2 ;
-(void)stopListeningOnSockets;
-(void)stopHolePunchTimer;
-(const sockaddr*)currentSockAddr;
-(unsigned char)currentSockAddrLen;
-(void)sendHolePunch;
-(void)setPreblob:(NSData *)arg1 ;
-(void)resetHolepunchTimer;
-(void)handleFDEvent;
-(void)mapIPv4AddrToIPv6:(sockaddr_in*)arg1 ;
-(void)startListeningOnSockets;
-(BOOL)handleHolePunchEvent;
-(NSData *)preblob;
-(void)networkDidChange;
-(id)createSessionWithTicket:(id)arg1 sessionKey:(id)arg2 ;
-(id)preblobCallback;
-(void)setPreblobCallback:(id)arg1 ;
@end

