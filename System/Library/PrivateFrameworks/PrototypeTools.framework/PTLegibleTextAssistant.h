/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrototypeTools/PrototypeTools-Structs.h>
@class PTLegibleTextAssistantSettings;

@interface PTLegibleTextAssistant : NSObject {

	BOOL _effectsDisabled;
	PTLegibleTextAssistantSettings* _settings;
	double _alphaStrength;
	double _radiusStrength;
	double _largestShadowRadius;
	SCD_Struct_PT1 _imageStatistics;

}

@property (assign,nonatomic) SCD_Struct_PT1 imageStatistics;                         //@synthesize imageStatistics=_imageStatistics - In the implementation block
@property (nonatomic,retain) PTLegibleTextAssistantSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double largestShadowRadius;                             //@synthesize largestShadowRadius=_largestShadowRadius - In the implementation block
@property (assign,nonatomic) double alphaStrength;                                   //@synthesize alphaStrength=_alphaStrength - In the implementation block
@property (assign,nonatomic) double radiusStrength;                                  //@synthesize radiusStrength=_radiusStrength - In the implementation block
@property (assign,nonatomic) BOOL effectsDisabled;                                   //@synthesize effectsDisabled=_effectsDisabled - In the implementation block
-(PTLegibleTextAssistantSettings *)settings;
-(void)setSettings:(PTLegibleTextAssistantSettings *)arg1 ;
-(void)setAlphaStrength:(double)arg1 ;
-(void)setRadiusStrength:(double)arg1 ;
-(double)alphaStrength;
-(double)radiusStrength;
-(void)setImageStatistics:(SCD_Struct_PT1)arg1 ;
-(double)largestShadowRadius;
-(void)setLargestShadowRadius:(double)arg1 ;
-(CGRect)legibleTextAssistantViewFrameForText:(id)arg1 font:(id)arg2 ;
-(BOOL)effectsDisabled;
-(id)generateForegroundImageForText:(id)arg1 font:(id)arg2 imageSize:(CGSize)arg3 ;
-(id)generateTextAssistantImageForText:(id)arg1 font:(id)arg2 imageSize:(CGSize)arg3 ;
-(id)initWithImageStatistics:(SCD_Struct_PT1)arg1 ;
-(id)legibleTextAssistantViewForText:(id)arg1 font:(id)arg2 ;
-(SCD_Struct_PT1)imageStatistics;
-(void)setEffectsDisabled:(BOOL)arg1 ;
@end

