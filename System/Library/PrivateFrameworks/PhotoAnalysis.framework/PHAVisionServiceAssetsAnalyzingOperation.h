/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol PHAVisionServiceAssetsAnalyzingOperationDelegate, OS_dispatch_semaphore;
@class PHAVisionServiceWorker, PHAAnalysisWorkerJob, NSObject;

@interface PHAVisionServiceAssetsAnalyzingOperation : NSOperation {

	PHAVisionServiceWorker* _visionServiceWorker;
	PHAAnalysisWorkerJob* _job;
	id<PHAVisionServiceAssetsAnalyzingOperationDelegate> _delegate;
	NSObject*<OS_dispatch_semaphore> _executionCompletionSemaphore;
	int _state;

}
+(id)operationForVisionServiceWorker:(id)arg1 job:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
-(id)job;
-(id)initWithVisionServiceWorker:(id)arg1 job:(id)arg2 ;
-(id)visionServiceWorker;
-(void)cancelAndWaitForCompletion;
@end

