/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSMTraceBuffer, NSURL, NSString;

@interface TSCHTracingManager : NSObject {

	BOOL mTraceLevelSet;
	unsigned mTraceLevel;
	BOOL mBufferSizeSet;
	unsigned long long mBufferSize;
	TSMTraceBuffer* mBuffer;
	NSURL* mLastTraceFileURL;
	NSString* mTag;

}

@property (assign) unsigned traceLevel; 
@property (assign) unsigned long long bufferSize; 
@property (readonly) NSURL * lastTraceFileURL; 
@property (copy) NSString * tag; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
+(id)_singletonAlloc;
-(unsigned)traceLevel;
-(void)setTraceLevel:(unsigned)arg1 ;
-(NSURL *)lastTraceFileURL;
-(id)init;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)teardown;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(unsigned long long)bufferSize;
-(void)setup;
@end

