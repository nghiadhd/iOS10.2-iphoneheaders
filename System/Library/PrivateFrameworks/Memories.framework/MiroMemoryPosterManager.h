/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class MiroMemoryPosterGenerator, MiroMemoryPosterStore, NSObject;

@interface MiroMemoryPosterManager : NSObject {

	MiroMemoryPosterGenerator* _generator;
	MiroMemoryPosterStore* _storage;
	NSObject*<OS_dispatch_queue> _storageSerializationQueue;
	NSObject*<OS_dispatch_queue> _decodeSerializationQueue;

}
+(id)sharedManager;
+(id)bestImageGenerationInfoSearch;
-(id)init;
-(void)resumePosterGenerator;
-(void)posterForMemory:(id)arg1 options:(id)arg2 schedulingPriority:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)suspendPosterGenerator;
-(id)prepPosterInputForKeyAsset:(id)arg1 ;
-(id)encodePosterImageToJPEG:(id)arg1 ;
-(void)posterImageForTitle:(id)arg1 subtitle:(id)arg2 effectID:(id)arg3 parametersDictionary:(id)arg4 moodID:(id)arg5 inputImage:(id)arg6 outputSize:(CGSize)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)cleanCaches;
-(BOOL)_bestPosterExists:(id)arg1 isActualPoster:(BOOL*)arg2 ;
-(id)_getBestPoster:(id)arg1 isActualPoster:(BOOL*)arg2 ;
-(void)deletePosterStoreForMemory:(id)arg1 ;
-(void)_forceJPEGDecode:(id)arg1 callUserHandler:(/*^block*/id)arg2 withMemory:(id)arg3 finishOnStorageSerialization:(/*^block*/id)arg4 ;
-(void)_requestPosterGeneration:(id)arg1 schedulingPriority:(long long)arg2 managerCompletionHandler:(/*^block*/id)arg3 options:(id)arg4 ;
-(void)_runCompletionHandlerMainThread:(/*^block*/id)arg1 withPoster:(id)arg2 forMemory:(id)arg3 finishOnStorageSerialization:(/*^block*/id)arg4 ;
-(void)_savePosterToDisk:(id)arg1 memory:(id)arg2 generationInfo:(id)arg3 ;
-(void)_clearOldPosters:(id)arg1 ;
-(BOOL)posterImageExists:(id)arg1 ;
-(id)loadPosterImageForMemory:(id)arg1 ;
-(BOOL)generatorIsBusy;
-(void)cancelAllGenerationRequests;
-(void)cancelRequestsForMemory:(id)arg1 forAllRequests:(BOOL)arg2 ;
-(void)preloadTitleEffectPool;
@end

