/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OITSUWidthLimitedQueue : NSObject {

	int mReaderCount;
	int mLimit;
	NSObject*<OS_dispatch_queue> mManagerQueue;
	NSObject*<OS_dispatch_queue> mTargetQueue;
	int mSpinLock;

}
-(id)init;
-(void)dealloc;
-(void)performAsync:(/*^block*/id)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
@end

