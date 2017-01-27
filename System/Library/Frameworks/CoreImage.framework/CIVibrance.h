/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(id)_kernelNeg;
-(id)_kernelPos;
-(id)outputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

