/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface AVTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	double _interval;

}

@property (readonly) double interval;              //@synthesize interval=_interval - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)interval;
-(id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 repeats:(BOOL)arg4 ;
@end

