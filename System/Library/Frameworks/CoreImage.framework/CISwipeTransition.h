/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, CIColor, NSNumber;

@interface CISwipeTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputOpacity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputOpacity; 
+(id)customAttributes;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputAngle;
-(NSNumber *)inputWidth;
-(CIImage *)inputTargetImage;
-(NSNumber *)inputTime;
-(id)_kernel;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputOpacity;
-(void)setInputOpacity:(NSNumber *)arg1 ;
-(void)setInputTime:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

