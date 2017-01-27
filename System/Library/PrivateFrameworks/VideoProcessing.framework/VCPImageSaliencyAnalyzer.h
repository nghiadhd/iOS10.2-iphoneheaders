/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageSaliencyAnalyzer : VCPImageAnalyzer {

	CGRect _region;
	float _score;
	BOOL _useGPU;
	int _chunk;

}
-(id)init;
-(int)processTile:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 results:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(int)aggregateTileResults:(id)arg1 tileRect:(CGRect)arg2 imageSize:(CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 flags:(unsigned long long*)arg3 results:(id*)arg4 cancel:(/*^block*/id)arg5 ;
-(int)initializeModel:(id)arg1 ;
-(int)initializeInput:(id)arg1 withBuffer:(CVBufferRef)arg2 width:(int)arg3 height:(int)arg4 ;
-(int)generateSalientRegion:(id)arg1 ;
-(int)saliencyDetection:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 salientRegions:(id)arg3 cancel:(/*^block*/id)arg4 ;
@end

