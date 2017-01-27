/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@interface CVMLBlurMeasure : NSObject
+(BOOL)computeBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 andWithRegionOfInterestInImageCoordinates:(CGRect)arg3 andRegionOfInterestInsetFactor:(float)arg4 error:(id*)arg5 ;
+(BOOL)computeBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 insetFactor:(float)arg3 error:(id*)arg4 ;
+(BOOL)computeBlurScore:(float*)arg1 usingBlurSignature:(id)arg2 insetFactor:(float)arg3 imageROI:(CGRect)arg4 error:(id*)arg5 ;
+(BOOL)computeEdgeWidthBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 error:(id*)arg3 ;
+(BOOL)computeApproximateBlurScore:(float*)arg1 onGrayscaleImage:(CVBufferRef)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id*)arg5 ;
+(BOOL)computeApproximateBlurScore:(float*)arg1 onRGBAImage:(CVBufferRef)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id*)arg5 ;
@end

