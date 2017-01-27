/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <FrontBoardServices/FrontBoardServices-Structs.h>
@class NSObject, NSMutableArray, NSArray, NSMutableSet;

@interface FBSSerialQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _blocks;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSArray* _mainRunLoopModes;
	CFRunLoopSourceRef _runLoopSource;
	BOOL _runLoopSourceHandlingBlock;
	NSMutableSet* _enqueueSemaphores;

}
+(id)queueWithMainRunLoopModes:(id)arg1 ;
+(id)queueWithDispatchQueue:(id)arg1 ;
-(void)_registerEnqueueSemaphore:(id)arg1 ;
-(BOOL)_hasNext;
-(BOOL)_performNext;
-(void)_deregisterEnqueueSemaphore:(id)arg1 ;
-(id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2 ;
-(void)_queue_performAsync:(/*^block*/id)arg1 ;
-(void)_performNextFromRunLoopSource;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)assertOnQueue;
-(void)performAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
@end

