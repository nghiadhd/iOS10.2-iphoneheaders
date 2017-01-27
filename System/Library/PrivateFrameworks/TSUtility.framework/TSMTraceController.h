/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray, NSString, NSDictionary;

@interface TSMTraceController : NSObject {

	NSMutableArray* mBuffers;
	NSString* mTraceDirectory;
	long long mLastBufferID;
	NSDictionary* mBuildInfo;
	int mModuleCache[256];
	unsigned mFilterCache[256];

}

@property (nonatomic,readonly) NSString * traceDirectory; 
+(void)flushAllBuffers;
+(id)traceDirectory;
+(long long)addBufferWithTag:(id)arg1 size:(long long)arg2 synchronized:(BOOL)arg3 ;
+(void)addBuffer:(id)arg1 ;
+(id)bufferByID:(long long)arg1 ;
+(void)stopTracing;
+(void)startTracing;
+(long long)addBufferWithTag:(id)arg1 size:(long long)arg2 ;
+(void)closeBufferWithID:(long long)arg1 ;
+(void)shutdown;
+(BOOL)setup;
-(void)p_buffer:(id)arg1 changedModule:(int)arg2 toFilter:(unsigned)arg3 from:(unsigned)arg4 ;
-(void)writeTraceRecord:(TSMTraceRecord_s*)arg1 withFilter:(unsigned)arg2 ;
-(void)flushAllBuffers;
-(NSString *)traceDirectory;
-(long long)addBuffer:(id)arg1 ;
-(id)bufferByID:(long long)arg1 ;
-(void)closeBuffer:(id)arg1 ;
-(void)stopTracing;
-(void)startTracing;
-(id)p_createTraceDirectory;
-(long long)p_newBufferID;
-(void)p_writeBuildInfoToFile:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)buffers;
@end

