/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface _UIKBRTTimerBlock : NSObject {

	NSObject*<OS_dispatch_queue> _selfQueue;
	NSTimer* _timer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _onTimer;
	id _owner;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> selfQueue;              //@synthesize selfQueue=_selfQueue - In the implementation block
@property (nonatomic,readonly) NSTimer * timer;                                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id onTimer;                                     //@synthesize onTimer=_onTimer - In the implementation block
@property (nonatomic,readonly) id owner;                                            //@synthesize owner=_owner - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)timerFired:(id)arg1 ;
-(id)owner;
-(NSTimer *)timer;
-(id)initWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(/*^block*/id)arg3 owner:(id)arg4 ;
-(void)fireNow;
-(NSObject*<OS_dispatch_queue>)selfQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)onTimer;
@end

