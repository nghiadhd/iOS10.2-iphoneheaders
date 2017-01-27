/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/PFRWSampleBufferChannelDelegate.h>

@protocol OS_dispatch_queue, PFAVReaderWriterAdjustDelegate;
@class NSObject, AVAssetReader, AVAssetWriter, NSArray, AVAsset, NSURL, NSString;

@interface PFAVReaderWriter : NSObject <PFRWSampleBufferChannelDelegate> {

	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	AVAssetReader* assetReader;
	AVAssetWriter* assetWriter;
	NSArray* videoChannels;
	NSArray* passthroughChannels;
	BOOL cancelled;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	BOOL _writeInProgress;
	id<PFAVReaderWriterAdjustDelegate> _delegate;
	AVAsset* _asset;
	NSURL* _outputURL;
	SCD_Struct_PF1 _timeRange;

}

@property (nonatomic,copy) AVAsset * asset;                                                   //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF1 timeRange;                                        //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                                                 //@synthesize outputURL=_outputURL - In the implementation block
@property (assign,nonatomic,__weak) id<PFAVReaderWriterAdjustDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)setDelegate:(id<PFAVReaderWriterAdjustDelegate>)arg1 ;
-(id<PFAVReaderWriterAdjustDelegate>)delegate;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)writeToURL:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(opaqueCMSampleBufferRef)arg2 andMadeWriteSampleBuffer:(CVBufferRef)arg3 ;
-(void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_didLoadAVAssetValues;
-(BOOL)setUpReaderAndWriterReturningError:(id*)arg1 ;
-(BOOL)startReadingAndWritingReturningError:(id*)arg1 ;
-(void)readingAndWritingDidFinishSuccessfully:(BOOL)arg1 withError:(id)arg2 ;
-(SCD_Struct_PF1)timeRange;
-(void)setTimeRange:(SCD_Struct_PF1)arg1 ;
@end

