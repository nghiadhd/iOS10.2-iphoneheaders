/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIKaleidoscope : CIFilter {

	CIImage* inputImage;
	NSNumber* inputCount;
	CIVector* inputCenter;
	NSNumber* inputAngle;

}
+(id)customAttributes;
-(id)_kernel;
-(CGRect)_outputExtent;
-(id)outputImage;
@end

