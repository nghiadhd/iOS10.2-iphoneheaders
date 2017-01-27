/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoDataOutputInternal, NSDictionary, NSArray;

@interface AVCaptureVideoDataOutput : AVCaptureOutput {

	AVCaptureVideoDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSArray * availableVideoCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
@property (assign,nonatomic) SCD_Struct_AV2 minFrameDuration; 
@property (assign,nonatomic) BOOL alwaysDiscardsLateVideoFrames; 
+(void)initialize;
+(id)supportedVideoSettingsKeys;
-(int)outputFormat;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SCD_Struct_AV2)minFrameDuration;
-(id)supportedAssetWriterOutputFileTypes;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(id)connectionMediaTypes;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)alwaysDiscardsLateVideoFrames;
-(BOOL)usesPreviewSizedBuffers;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(NSArray *)availableVideoCodecTypes;
-(BOOL)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(unsigned)requiredOutputFormatForConnection:(id)arg1 ;
-(id)outputScalingModeForSourceFormat:(id)arg1 ;
-(id)vettedVideoSettingsForSettingsDictionary:(id)arg1 ;
-(NSArray *)availableVideoCVPixelFormatTypes;
-(void)_setMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(void)setMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(NSDictionary *)videoSettings;
-(void)removeConnection:(id)arg1 ;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setVideoSettings:(NSDictionary *)arg1 ;
-(void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1 ;
@end

