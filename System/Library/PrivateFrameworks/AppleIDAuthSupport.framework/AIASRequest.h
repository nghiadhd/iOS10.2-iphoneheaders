/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDAuthSupport/AppleIDAuthSupport-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableURLRequest, NSMutableData, NSObject, NSURLSession, NSURLSessionDataTask, NSError, NSString;

@interface AIASRequest : NSObject <NSURLSessionDataDelegate> {

	BOOL _done;
	BOOL _success;
	NSMutableURLRequest* _URLRequest;
	NSMutableData* _data;
	AppleIDAuthSupportDataRef _context;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	NSError* _error;

}

@property (retain) NSMutableURLRequest * URLRequest;                   //@synthesize URLRequest=_URLRequest - In the implementation block
@property (retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (assign) BOOL done;                                          //@synthesize done=_done - In the implementation block
@property (assign) BOOL success;                                       //@synthesize success=_success - In the implementation block
@property (assign) AppleIDAuthSupportDataRef context;                  //@synthesize context=_context - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> sema;              //@synthesize sema=_sema - In the implementation block
@property (retain) NSURLSession * session;                             //@synthesize session=_session - In the implementation block
@property (retain) NSURLSessionDataTask * task;                        //@synthesize task=_task - In the implementation block
@property (retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(AppleIDAuthSupportDataRef)context;
-(void)resume;
-(BOOL)done;
-(NSURLSessionDataTask *)task;
-(void)setContext:(AppleIDAuthSupportDataRef)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setDone:(BOOL)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(NSMutableURLRequest *)URLRequest;
-(NSURLSession *)session;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(void)setSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithURL:(id)arg1 data:(CFDictionaryRef)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 ;
-(NSObject*<OS_dispatch_semaphore>)sema;
-(void)setURLRequest:(NSMutableURLRequest *)arg1 ;
@end

