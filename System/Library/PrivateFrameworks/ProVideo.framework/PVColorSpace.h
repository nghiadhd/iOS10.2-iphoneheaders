/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVColorSpace : NSObject {

	int _type;

}
+(id)extendedSRGBColorSpace;
+(id)pvColorSpaceFromCGColorSpace:(CGColorSpaceRef)arg1 ;
+(id)p3d65GammaColorSpace;
+(id)sRGBColorSpace;
+(id)rec601GammaColorSpace;
+(id)rec601LinearColorSpace;
+(id)rec709GammaColorSpace;
+(id)rec709LinearColorSpace;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithType:(int)arg1 ;
-(CGColorSpaceRef)cgColorSpace;
-(BOOL)isWideGamutSpace;
-(BOOL)isExtendedSRGBColorSpace;
-(BOOL)isSRGBColorSpace;
-(BOOL)isEqualToCGColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)isP3d65GammaColorSpace;
-(BOOL)isRec601GammaColorSpace;
-(BOOL)isRec601LinearColorSpace;
-(BOOL)isRec709GammaColorSpace;
-(BOOL)isRec709LinearColorSpace;
@end

