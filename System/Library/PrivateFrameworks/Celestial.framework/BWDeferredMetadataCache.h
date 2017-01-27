/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWDeferredMetadataCache : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	OpaqueFigCaptureStreamRef _stream;
	int _numberOfExpectedSampleBuffersForEachPTS;
	BWDeferredMetadataCacheEntry* _cache[5];

}

@property (assign,nonatomic) int numberOfExpectedSampleBuffersForEachPTS; 
-(void)dealloc;
-(void)flush;
-(id)initWithCaptureStream:(OpaqueFigCaptureStreamRef)arg1 atomicTransactions:(BOOL)arg2 ;
-(void)setNumberOfExpectedSampleBuffersForEachPTS:(int)arg1 ;
-(void)addMetadataAttachmentToSampleBuffer:(opaqueCMSampleBufferRef)arg1 withDutyCycleMetadataCache:(id)arg2 ;
-(int)numberOfExpectedSampleBuffersForEachPTS;
@end
