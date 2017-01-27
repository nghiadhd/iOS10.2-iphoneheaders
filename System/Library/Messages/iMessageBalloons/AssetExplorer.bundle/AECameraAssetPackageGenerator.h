/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AECameraAssetPackageGenerator : NSObject {

	NSObject*<OS_dispatch_queue> __generationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _generationQueue;              //@synthesize _generationQueue=__generationQueue - In the implementation block
-(void)generatePackageFromReviewAsset:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_populatePackage:(id)arg1 fromReviewAsset:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_generationQueue;
@end

