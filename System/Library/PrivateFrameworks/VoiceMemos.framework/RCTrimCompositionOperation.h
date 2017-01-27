/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCTrimTimeRangeOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, RCTrimAudioFileOperation, NSError, RCComposition, NSURL;

@interface RCTrimCompositionOperation : RCTrimTimeRangeOperation {

	NSObject*<OS_dispatch_queue> _serialQueue;
	double _durationOfFragmentsBeingTrimmed;
	double _subTaskProgressAmounts[2];
	double _lastPostedProgress;
	NSOperationQueue* _subOperationQueue;
	RCTrimAudioFileOperation* _trimAudioFileSubOperation;
	BOOL _success;
	NSError* _error;
	double _exportedDuration;
	RCComposition* _sourceComposition;
	NSURL* _destinationComposedAVURL;

}

@property (nonatomic,copy,readonly) RCComposition * sourceComposition;              //@synthesize sourceComposition=_sourceComposition - In the implementation block
@property (nonatomic,copy,readonly) NSURL * destinationComposedAVURL;               //@synthesize destinationComposedAVURL=_destinationComposedAVURL - In the implementation block
+(id)_intermediateTrimmedAVOutputURLForFragment:(id)arg1 ;
+(id)_intermediateTrimmedWaveformURLForFragment:(id)arg1 ;
-(void)cancel;
-(double)progress;
-(void)main;
-(id)error;
-(BOOL)success;
-(double)exportedDuration;
-(id)initWithSourceComposition:(id)arg1 destinationComposedAVURL:(id)arg2 timeRange:(SCD_Struct_RC4)arg3 trimMode:(long long)arg4 ;
-(BOOL)_isSaveToCopyOperation;
-(id)performTrimOnFragmentsWithDestinationComposition:(id)arg1 ;
-(id)performTrimOnComposedAVURLWithDestinationComposition:(id)arg1 ;
-(void)_performSyncOnSerialQueue:(/*^block*/id)arg1 ;
-(RCComposition *)sourceComposition;
-(NSURL *)destinationComposedAVURL;
@end

