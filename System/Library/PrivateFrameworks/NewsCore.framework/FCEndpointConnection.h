/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/FCAppConfigurationObserving.h>

@protocol FCContentContext;
@class NSURL, NSURLSession, FCAsyncSerialQueue, NSString;

@interface FCEndpointConnection : NSObject <NSURLSessionDelegate, FCAppConfigurationObserving> {

	id<FCContentContext> _context;
	NSURL* _baseURL;
	NSURLSession* _session;
	FCAsyncSerialQueue* _requestSerialQueue;

}

@property (nonatomic,retain) id<FCContentContext> context;                         //@synthesize context=_context - In the implementation block
@property (copy) NSURL * baseURL;                                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * requestSerialQueue;              //@synthesize requestSerialQueue=_requestSerialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_errorByUpdatingRetryStatusForError:(id)arg1 ;
+(id)_errorForStatus:(long long)arg1 url:(id)arg2 ;
-(id<FCContentContext>)context;
-(id)initWithContext:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(NSURL *)baseURL;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSURLSession *)session;
-(void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(FCAsyncSerialQueue *)requestSerialQueue;
-(void)setRequestSerialQueue:(FCAsyncSerialQueue *)arg1 ;
@end
