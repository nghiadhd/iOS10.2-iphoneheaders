/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateUtilitarianSmallRingImage : CLKComplicationTemplate {

	float _fillFraction;
	CLKImageProvider* _imageProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (assign,nonatomic) float fillFraction;                          //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign,nonatomic) long long ringStyle;                         //@synthesize ringStyle=_ringStyle - In the implementation block
-(CLKImageProvider *)imageProvider;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)setFillFraction:(float)arg1 ;
-(float)fillFraction;
-(long long)ringStyle;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setRingStyle:(long long)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
@end

