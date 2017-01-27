/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFFuture.h>

@class NSConditionLock, MFPromise;

@interface _MFLazyFuture : MFFuture {

	NSConditionLock* _stateLock;
	/*^block*/id _block;
	MFPromise* _promise;

}
-(BOOL)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(BOOL)run;
-(BOOL)isFinished;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

