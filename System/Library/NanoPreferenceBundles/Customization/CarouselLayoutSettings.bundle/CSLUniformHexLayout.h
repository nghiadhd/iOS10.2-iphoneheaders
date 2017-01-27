/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <CarouselLayoutSettings/CSLHexLayout.h>

@interface CSLUniformHexLayout : CSLHexLayout {

	double _diameter;
	double _hexSideSize;

}

@property (assign,nonatomic) double hexSideSize;              //@synthesize hexSideSize=_hexSideSize - In the implementation block
-(SCD_Struct_CS1)layoutAttributesForItemAtHex:(Hex)arg1 ;
-(float)hexSideSizeWithCenterDiameter:(double)arg1 ;
-(id)initWithDefaultPixelDiameter:(double)arg1 ;
-(void)setHexSideSize:(double)arg1 ;
-(double)hexSideSize;
-(Hex)hexAtPoint:(CGPoint)arg1 ;
@end

