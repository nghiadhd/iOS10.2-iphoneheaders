/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject {

	NSOperationQueue* _serviceThrottlingOperationQueue;
	NSXPCConnection* _serverConnection;

}

@property (nonatomic,retain) NSOperationQueue * serviceThrottlingOperationQueue;              //@synthesize serviceThrottlingOperationQueue=_serviceThrottlingOperationQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                              //@synthesize serverConnection=_serverConnection - In the implementation block
+(id)sharedService;
-(id)init;
-(void)dealloc;
-(void)setServiceThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serviceThrottlingOperationQueue;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
@end

