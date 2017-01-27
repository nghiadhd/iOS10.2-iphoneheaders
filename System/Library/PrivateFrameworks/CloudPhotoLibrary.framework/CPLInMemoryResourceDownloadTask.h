/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportTask;
@class NSObject;

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportTask> _transportTask;
	/*^block*/id _launchHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) id launchHandler;                  //@synthesize launchHandler=_launchHandler - In the implementation block
@property (nonatomic,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)launch;
-(id)completionHandler;
-(id)launchHandler;
-(void)finishWithData:(id)arg1 error:(id)arg2 ;
-(id)initWithLaunchHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)launchTransportTask:(id)arg1 ;
-(void)cancelTask;
@end

