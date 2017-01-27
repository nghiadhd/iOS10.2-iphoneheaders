/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandEncoder, MTLCommandQueue;
#import <Metal/Metal-Structs.h>
@class _MTLCommandQueue, NSError, NSString, NSDictionary, NSMutableDictionary;

@interface _MTLCommandBuffer : NSObject {

	id<MTLCommandEncoder> _currentCommandEncoder;
	_MTLCommandQueue*<MTLCommandQueue> _queue;
	MTLDispatch* _scheduledDispatchList;
	MTLDispatch* _scheduledDispatchListTail;
	MTLDispatch* _completedDispatchList;
	MTLDispatch* _completedDispatchListTail;
	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _cond;
	unsigned long long _creationTime;
	unsigned long long _enqueueTime;
	unsigned long long _commitTime;
	unsigned long long _submitToKernelTime;
	unsigned long long _submitToHardwareTime;
	unsigned long long _completionInterruptTime;
	unsigned long long _completionHandlerEnqueueTime;
	unsigned long long _completionHandlerExecutionTime;
	unsigned long long _status;
	NSError* _error;
	NSString* _label;
	BOOL _skipRender;
	BOOL _profilingEnabled;
	BOOL _scheduledCallbacksDone;
	BOOL _completedCallbacksDone;
	BOOL _strongObjectReferences;
	NSDictionary* _profilingResults;
	BOOL _retainedReferences;
	BOOL _synchronousDebugMode;
	NSMutableDictionary* _userDictionary;
	unsigned long long _kernelStartTime;
	unsigned long long _kernelEndTime;
	unsigned long long _gpuStartTime;
	unsigned long long _gpuEndTime;
	unsigned long long _numEncoders;
	unsigned long long _numThisCommandBuffer;
	unsigned long long _listIndex;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	BOOL _StatEnabled;
	/*^block*/id _perfSampleHandlerBlock;

}

@property (readonly) BOOL retainedReferences;                                                      //@synthesize retainedReferences=_retainedReferences - In the implementation block
@property (readonly) BOOL synchronousDebugMode;                                                    //@synthesize synchronousDebugMode=_synchronousDebugMode - In the implementation block
@property (readonly) id<MTLCommandQueue> commandQueue;                                             //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long status;                                                    //@synthesize status=_status - In the implementation block
@property (copy) NSString * label;                                                                 //@synthesize label=_label - In the implementation block
@property (readonly) NSError * error; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (readonly) unsigned long long globalTraceObjectID;                                       //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (nonatomic,readonly) double kernelStartTime; 
@property (nonatomic,readonly) double kernelEndTime; 
@property (nonatomic,readonly) double GPUStartTime; 
@property (nonatomic,readonly) double GPUEndTime; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (assign,setter=tatEnabled,getter=isStatEnabled,nonatomic) BOOL StatEnabled;              //@synthesize StatEnabled=_StatEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long numThisCommandBuffer;                              //@synthesize numThisCommandBuffer=_numThisCommandBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long numEncoders;                                       //@synthesize numEncoders=_numEncoders - In the implementation block
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex;                     //@synthesize listIndex=_listIndex - In the implementation block
+(void)initialize;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(BOOL)isProfilingEnabled;
-(void)commitAndReset;
-(BOOL)retainedReferences;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(BOOL)isStatEnabled;
-(unsigned long long)getAndIncrementNumEncoders;
-(unsigned long long)numEncoders;
-(void)setNumEncoders:(unsigned long long)arg1 ;
-(unsigned long long)numThisCommandBuffer;
-(void)setNumThisCommandBuffer:(unsigned long long)arg1 ;
-(void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(void)kernelSubmitTime;
-(unsigned long long)getListIndex;
-(void)didSchedule:(unsigned long long)arg1 error:(id)arg2 ;
-(void)runPerfCounterCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)commitAndHold;
-(NSMutableDictionary *)userDictionary;
-(BOOL)skipRender;
-(NSDictionary *)profilingResults;
-(double)kernelStartTime;
-(double)kernelEndTime;
-(BOOL)synchronousDebugMode;
-(void)setStatEnabled:(BOOL)arg1 ;
-(double)GPUEndTime;
-(double)GPUStartTime;
-(void)dealloc;
-(id)description;
-(void)commit;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setCommitted:(BOOL)arg1 ;
-(BOOL)isCommitted;
-(unsigned long long)status;
-(void)waitUntilScheduled;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(void)enqueue;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(NSError *)error;
-(void)waitUntilCompleted;
-(void)presentDrawable:(id)arg1 ;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(void)setListIndex:(unsigned long long)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
@end

