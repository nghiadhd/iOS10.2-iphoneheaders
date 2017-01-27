/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCLifeCycle.h>
#import <libobjc.A.dylib/BRCSuspendable.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, BRCMinHeap, NSString;

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle, BRCSuspendable> {

	NSObject*<OS_dispatch_queue> _queue;
	BRCMinHeap* _minHeap;
	NSString* _name;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _delay;
	long long _leeway;
	long long _lastSchedule;
	BOOL _isResumed;
	BOOL _isCancelled;
	/*^block*/id _computeNextAdmissibleDateForScheduling;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long coalescingLeeway;                           //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id computeNextAdmissibleDateForScheduling;              //@synthesize computeNextAdmissibleDateForScheduling=_computeNextAdmissibleDateForScheduling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                                   //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)suspend;
-(BOOL)isCancelled;
-(void)resume;
-(void)close;
-(id)initWithName:(id)arg1 ;
-(void)signal;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_close;
-(void)setCoalescingLeeway:(long long)arg1 ;
-(id)initWithName:(id)arg1 targetQueue:(id)arg2 ;
-(void)setComputeNextAdmissibleDateForScheduling:(id)arg1 ;
-(void)_schedule;
-(void)_addSource:(id)arg1 deadline:(long long)arg2 ;
-(BOOL)_isSleepingRequiredForDeadline:(long long)arg1 now:(long long)arg2 ;
-(long long)coalescingLeeway;
-(id)computeNextAdmissibleDateForScheduling;
@end

