/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSObject, NSMutableDictionary, NSString;

@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSMutableDictionary* _tasksByIdentifier;
	BOOL __usesAppleIDContext;

}

@property (assign,nonatomic) BOOL _usesAppleIDContext;              //@synthesize _usesAppleIDContext=__usesAppleIDContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAnisetteFreeURLSession;
+(id)sharedURLSession;
-(id)init;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)set_usesAppleIDContext:(BOOL)arg1 ;
-(void)_unsafe_completeTask:(id)arg1 withError:(id)arg2 ;
-(BOOL)_usesAppleIDContext;
-(void)cancelDataTask:(id)arg1 ;
-(id)beginDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_URLSession;
-(BOOL)_isRecoverableError:(id)arg1 ;
-(BOOL)_unsafe_retryTaskIfPossible:(id)arg1 ;
@end

