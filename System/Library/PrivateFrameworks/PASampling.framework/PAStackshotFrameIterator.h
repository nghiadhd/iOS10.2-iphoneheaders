/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@interface PAStackshotFrameIterator : NSObject {

	const void* curFrame;
	const void* topFrame;
	thread_snapshot* snap;
	unsigned curIndex;
	BOOL currentFrameIsKernel;

}
-(const void*)firstValidUserFrame;
-(BOOL)is64bit;
-(id)initWithThreadSnapshot:(thread_snapshot*)arg1 frameStart:(const void*)arg2 ;
-(void)getCurrentFrame:(pa_stack_frame*)arg1 ;
-(BOOL)moveToNextFrame;
@end

