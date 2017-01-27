/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class AVAssetReader, AVAssetReaderSampleReferenceOutput, AVAsset;

@interface ISVideoAnalyzerFrameTimesOperation : NSOperation {

	AVAssetReader* _assetReader;
	AVAssetReaderSampleReferenceOutput* _assetReaderOutput;
	AVAsset* _asset;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) AVAsset * asset;                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)main;
-(AVAsset *)asset;
-(id)initWithAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)resultHandler;
-(void)_handleAssetDidLoadValues;
@end

