/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

@interface CILocalLightFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputGuideImage;
	NSData* inputLightMap;
	NSNumber* inputLightMapWidth;
	NSNumber* inputLightMapHeight;
	NSNumber* inputLocalLight;

}
+(id)customAttributes;
-(id)_polyKernel;
-(id)outputImage;
@end

