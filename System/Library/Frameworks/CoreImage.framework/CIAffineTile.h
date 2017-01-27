/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSValue;

@interface CIAffineTile : CIFilter {

	CIImage* inputImage;
	NSValue* inputTransform;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSValue * inputTransform; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSValue *)inputTransform;
-(void)setInputTransform:(NSValue *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

