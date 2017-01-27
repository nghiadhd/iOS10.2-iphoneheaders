/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {

	BWMotionSampleRingBuffer* _motionDataRingBuffer;
	OpaqueFigSimpleMutexRef _ringMutex;
	BOOL _stationary;
	BOOL _newMotionDataAvailable;
	BOOL _robustMethodEnabled;
	BOOL _motionMetadataStatusChecked;
	BOOL _unusableMotionData;

}

@property (getter=isStationary,nonatomic,readonly) BOOL stationary; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)_detectIfStationary;
-(BOOL)isStationary;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

