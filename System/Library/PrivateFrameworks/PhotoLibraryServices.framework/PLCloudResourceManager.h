/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSDate;

@interface PLCloudResourceManager : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	PLCloudResourcePrefetchManager* _prefetchManager;
	PLCloudResourcePruneManager* _pruneManager;
	NSDate* _lastOperationDate;
	BOOL _enqueuedOperation;

}
-(id)init;
-(void)dealloc;
-(void)stop;
-(id)initWithCPLManager:(id)arg1 ;
-(void)startAutomaticPrefetchOrPruneWithTimeout:(BOOL)arg1 ;
-(id)statusForDebug:(BOOL)arg1 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
@end

