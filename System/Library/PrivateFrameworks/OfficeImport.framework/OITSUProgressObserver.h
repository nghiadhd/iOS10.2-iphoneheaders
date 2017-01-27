/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OITSUProgressObserver : NSObject {

	double mValueInterval;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mHandler;
	double mLastHandledValue;
	BOOL mLastHandledIndeterminate;

}

@property (nonatomic,readonly) double valueInterval; 
-(id)init;
-(void)dealloc;
-(id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3 ;
-(double)valueInterval;
@end

