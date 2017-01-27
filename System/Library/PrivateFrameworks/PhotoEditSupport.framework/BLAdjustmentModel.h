/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class CIFilter;

@interface BLAdjustmentModel : NSObject {

	double _whiteLevel;
	double _blackLevel;
	double _brightness;
	double _contrast;
	double _autoShadowsMaxLevel;
	double _autoBlackLevelAtShadowsMaxLevel;
	long long _highlightShadowAdjustVersion;
	BOOL _hasPentaCurve;
	BOOL _reprocessPentaCurve;
	SCD_Struct_BL14 _whiteBalance;
	BOOL _hasWhiteBalance;
	BOOL _reprocessWhiteBalance;
	double _saturation;
	BOOL _useVibrancy;
	BOOL _hasSaturation;
	BOOL _reprocessSaturation;
	double _faceBalanceWarmth;
	BOOL _hasFaceBalance;
	BOOL _reprocessFaceBalance;
	double _saturationSky;
	double _saturationGrass;
	BOOL _hasSkyAndGrass;
	BOOL _reprocessSkyAndGrass;
	double _underwaterBalanceDepthStrength;
	double _underwaterBalanceWaterBlend;
	BOOL _hasUnderwaterBalance;
	BOOL _reprocessUnderwaterBalance;
	BOOL _hasColor;
	BOOL _hasExposure;
	BOOL _isChainBuilt;
	double _histogramBlackPoint;
	double _histogramWhitePoint;
	double _histogramAverageLinearRed;
	double _histogramAverageLinearGreen;
	double _histogramAverageLinearBlue;
	CIFilter* _curvesFilter;
	CIFilter* _colorFilter;
	CIFilter* _vibranceFilter;
	CIFilter* _faceBalanceFilter;
	CIFilter* _skyAndGrassFilter;
	CIFilter* _underwaterBalanceFilter;
	CIFilter* _highlightsAndShadowsFilter;
	CIFilter* _tempAndTintFilter;
	CIFilter* _colorBalanceFilter;

}

@property (nonatomic,retain) CIFilter * curvesFilter;                            //@synthesize curvesFilter=_curvesFilter - In the implementation block
@property (nonatomic,retain) CIFilter * colorFilter;                             //@synthesize colorFilter=_colorFilter - In the implementation block
@property (nonatomic,retain) CIFilter * vibranceFilter;                          //@synthesize vibranceFilter=_vibranceFilter - In the implementation block
@property (nonatomic,retain) CIFilter * faceBalanceFilter;                       //@synthesize faceBalanceFilter=_faceBalanceFilter - In the implementation block
@property (nonatomic,retain) CIFilter * skyAndGrassFilter;                       //@synthesize skyAndGrassFilter=_skyAndGrassFilter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterBalanceFilter;                 //@synthesize underwaterBalanceFilter=_underwaterBalanceFilter - In the implementation block
@property (nonatomic,retain) CIFilter * highlightsAndShadowsFilter;              //@synthesize highlightsAndShadowsFilter=_highlightsAndShadowsFilter - In the implementation block
@property (nonatomic,retain) CIFilter * tempAndTintFilter;                       //@synthesize tempAndTintFilter=_tempAndTintFilter - In the implementation block
@property (nonatomic,retain) CIFilter * colorBalanceFilter;                      //@synthesize colorBalanceFilter=_colorBalanceFilter - In the implementation block
+(id)exposureValuesForToneCurveData:(id)arg1 highlightsAndShadowsData:(id)arg2 andHistogramData:(id)arg3 ;
+(id)rampImage;
+(CGPoint)pointOnCurveFromPoint:(CGPoint)arg1 withSlope:(double)arg2 andCurveData:(double*)arg3 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(BOOL)hasColor;
-(id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ;
-(void)releaseChain;
-(BOOL)hasExposure;
-(void)buildChain;
-(id)adjustedImageFromImage:(id)arg1 ;
-(CIFilter *)underwaterBalanceFilter;
-(void)setUnderwaterBalanceFilter:(CIFilter *)arg1 ;
-(void)updateAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ;
-(void)setCurvesFilter:(CIFilter *)arg1 ;
-(void)setColorFilter:(CIFilter *)arg1 ;
-(void)setFaceBalanceFilter:(CIFilter *)arg1 ;
-(void)setVibranceFilter:(CIFilter *)arg1 ;
-(void)setSkyAndGrassFilter:(CIFilter *)arg1 ;
-(void)setHighlightsAndShadowsFilter:(CIFilter *)arg1 ;
-(void)setTempAndTintFilter:(CIFilter *)arg1 ;
-(void)setColorBalanceFilter:(CIFilter *)arg1 ;
-(CIFilter *)curvesFilter;
-(CIFilter *)highlightsAndShadowsFilter;
-(CIFilter *)colorFilter;
-(CIFilter *)vibranceFilter;
-(CIFilter *)faceBalanceFilter;
-(CIFilter *)skyAndGrassFilter;
-(CIFilter *)colorBalanceFilter;
-(CIFilter *)tempAndTintFilter;
-(BOOL)hasAdjustments;
@end

