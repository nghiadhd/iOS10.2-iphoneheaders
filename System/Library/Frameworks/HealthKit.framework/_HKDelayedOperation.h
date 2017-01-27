/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface _HKDelayedOperation : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	long long _mode;
	int _blockEnqueued;
	double _lastExecution;
	NSObject*<OS_dispatch_source> _timerSource;
	double _delay;

}
-(void)invalidate;
-(id)initWithMode:(long long)arg1 queue:(id)arg2 delay:(double)arg3 block:(/*^block*/id)arg4 ;
-(void)_queue_executeBlock;
-(void)_queue_updateLastExecution;
-(id)initWithQueue:(id)arg1 delay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)execute;
@end

