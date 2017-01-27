/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CITileFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAngle;
	NSNumber* inputWidth;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(NSNumber *)inputAngle;
-(NSNumber *)inputWidth;
-(id)_kernel;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)_kernel_source;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(id)_kernel_name;
-(id)_croppedCenterPixelImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

