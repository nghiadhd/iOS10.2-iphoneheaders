/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroTitleColorConfiguration;
@class NSDictionary, NSArray, MiroBlueprint, UIColor, NSMutableArray;

@interface MiroColorSelectionController : NSObject {

	BOOL _hasWarnedOnceNilTitleID;
	int _titleSnapshotAspect;
	NSDictionary* _colorTitlePresets;
	NSArray* _safeColorRanges;
	NSArray* _presetBackgroundColors;
	NSArray* _presetTextOnBlackColors;
	NSArray* _presetTextOnWhiteColors;
	NSArray* _presetTextOverImageColors;
	MiroBlueprint* _blueprint;
	UIColor* _backgroundColor;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _gapColor;
	NSArray* _randomNumbers;
	NSDictionary* _colorAnalysis;
	unsigned long long _analysisRegion;
	NSArray* _accentColors;
	NSArray* _safeAccentColors;
	NSArray* _imageDominantColors;
	NSArray* _centerDominantColors;
	NSArray* _lowerThirdDominantColors;
	id<MiroTitleColorConfiguration> _debugTitleConfiguration;
	NSMutableArray* _debugSafeAccentRanges;
	NSMutableArray* _debugFilteredImageDominantRanges;

}

@property (nonatomic,retain) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                                               //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                             //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) UIColor * gapColor;                                                   //@synthesize gapColor=_gapColor - In the implementation block
@property (nonatomic,retain) NSArray * randomNumbers;                                              //@synthesize randomNumbers=_randomNumbers - In the implementation block
@property (nonatomic,readonly) NSDictionary * colorTitlePresets;                                   //@synthesize colorTitlePresets=_colorTitlePresets - In the implementation block
@property (nonatomic,readonly) NSArray * presetBackgroundColors;                                   //@synthesize presetBackgroundColors=_presetBackgroundColors - In the implementation block
@property (nonatomic,readonly) NSArray * presetTextOnBlackColors;                                  //@synthesize presetTextOnBlackColors=_presetTextOnBlackColors - In the implementation block
@property (nonatomic,readonly) NSArray * presetTextOnWhiteColors;                                  //@synthesize presetTextOnWhiteColors=_presetTextOnWhiteColors - In the implementation block
@property (nonatomic,readonly) NSArray * presetTextOverImageColors;                                //@synthesize presetTextOverImageColors=_presetTextOverImageColors - In the implementation block
@property (nonatomic,readonly) NSArray * safeColorRanges;                                          //@synthesize safeColorRanges=_safeColorRanges - In the implementation block
@property (nonatomic,retain) NSDictionary * colorAnalysis;                                         //@synthesize colorAnalysis=_colorAnalysis - In the implementation block
@property (assign,nonatomic) unsigned long long analysisRegion;                                    //@synthesize analysisRegion=_analysisRegion - In the implementation block
@property (nonatomic,retain) NSArray * accentColors;                                               //@synthesize accentColors=_accentColors - In the implementation block
@property (nonatomic,retain) NSArray * safeAccentColors;                                           //@synthesize safeAccentColors=_safeAccentColors - In the implementation block
@property (nonatomic,retain) NSArray * imageDominantColors;                                        //@synthesize imageDominantColors=_imageDominantColors - In the implementation block
@property (nonatomic,retain) NSArray * centerDominantColors;                                       //@synthesize centerDominantColors=_centerDominantColors - In the implementation block
@property (nonatomic,retain) NSArray * lowerThirdDominantColors;                                   //@synthesize lowerThirdDominantColors=_lowerThirdDominantColors - In the implementation block
@property (assign,nonatomic) BOOL hasWarnedOnceNilTitleID;                                         //@synthesize hasWarnedOnceNilTitleID=_hasWarnedOnceNilTitleID - In the implementation block
@property (nonatomic,retain) id<MiroTitleColorConfiguration> debugTitleConfiguration;              //@synthesize debugTitleConfiguration=_debugTitleConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableArray * debugSafeAccentRanges;                               //@synthesize debugSafeAccentRanges=_debugSafeAccentRanges - In the implementation block
@property (nonatomic,retain) NSMutableArray * debugFilteredImageDominantRanges;                    //@synthesize debugFilteredImageDominantRanges=_debugFilteredImageDominantRanges - In the implementation block
@property (nonatomic,retain) MiroBlueprint * blueprint;                                            //@synthesize blueprint=_blueprint - In the implementation block
@property (assign,nonatomic) int titleSnapshotAspect;                                              //@synthesize titleSnapshotAspect=_titleSnapshotAspect - In the implementation block
+(void)fetchColorAnalysisForAsset:(id)arg1 atTime:(int)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)colorIsDark:(id)arg1 ;
+(BOOL)colorIsLight:(id)arg1 ;
+(void)_fetchColorAnalysisDictionaryForAsset:(id)arg1 startTime:(int)arg2 completion:(/*^block*/id)arg3 ;
+(id)_colorAnalysisForStartTime:(int)arg1 asset:(id)arg2 ;
+(BOOL)colorIsSaturated:(id)arg1 ;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(MiroBlueprint *)blueprint;
-(void)setBlueprint:(MiroBlueprint *)arg1 ;
-(id)debugImageDominantColors;
-(id)debugCenterDominantColors;
-(id)debugLowerThirdDominantColors;
-(id)debugAccentColors;
-(id)debugBackgroundColor;
-(id)debugPrimaryColor;
-(id)debugSecondaryColor;
-(id<MiroTitleColorConfiguration>)debugTitleConfiguration;
-(NSArray *)safeAccentColors;
-(NSMutableArray *)debugSafeAccentRanges;
-(id)debugFilteredImageDominantColors;
-(NSMutableArray *)debugFilteredImageDominantRanges;
-(void)setColorAnalysis:(NSDictionary *)arg1 ;
-(id)initWithColorAnalysis:(id)arg1 ;
-(void)setTitleSnapshotAspect:(int)arg1 ;
-(void)_generateRandomNumbersForRandomizerSeed:(unsigned*)arg1 ;
-(void)_invalidateColors;
-(void)_setupColorsIfNecessary;
-(id)_randomPresetBackgroundColor;
-(id)_dominantColorsForAnalysisRegion:(unsigned long long)arg1 ;
-(id)_analysisColorsForKey:(id)arg1 ;
-(NSArray *)accentColors;
-(id)_filterDominantColorsForAnalysisRegion:(unsigned long long)arg1 ;
-(id)_presetColorsForKey:(id)arg1 ;
-(void)setRandomNumbers:(NSArray *)arg1 ;
-(NSDictionary *)colorAnalysis;
-(int)titleSnapshotAspect;
-(NSArray *)randomNumbers;
-(void)setDebugTitleConfiguration:(id<MiroTitleColorConfiguration>)arg1 ;
-(void)setAnalysisRegion:(unsigned long long)arg1 ;
-(id)_selectSafeDominantColorForAnalysisRegion:(unsigned long long)arg1 ;
-(id)_selectSafeAccentColor;
-(id)_randomPresetColorOverWhiteColor;
-(id)_randomPresetColorOverBlackColor;
-(id)_selectSafeTextColorOverImageForAnalysisRegion:(unsigned long long)arg1 ;
-(NSDictionary *)colorTitlePresets;
-(id)_presetHSVValuesForKey:(id)arg1 ;
-(NSArray *)presetBackgroundColors;
-(id)_colorsWithSimilarHue:(double)arg1 fromPresets:(id)arg2 usingHSVValues:(id)arg3 ;
-(NSArray *)presetTextOverImageColors;
-(void)setDebugFilteredImageDominantRanges:(NSMutableArray *)arg1 ;
-(id)_filterSafeBackgroundColorsForColors:(id)arg1 withDebugArray:(id)arg2 ;
-(void)setDebugSafeAccentRanges:(NSMutableArray *)arg1 ;
-(NSArray *)safeColorRanges;
-(NSArray *)presetTextOnWhiteColors;
-(NSArray *)presetTextOnBlackColors;
-(id)_presetBackgroundColorWithSimilarHueForColor:(id)arg1 ;
-(id)_analysisHSVValuesForAnalysisRegion:(unsigned long long)arg1 ;
-(id)_presetTextOverImageColorWithSimilarHue:(double)arg1 ;
-(UIColor *)gapColor;
-(void)setGapColor:(UIColor *)arg1 ;
-(unsigned long long)analysisRegion;
-(void)setAccentColors:(NSArray *)arg1 ;
-(void)setSafeAccentColors:(NSArray *)arg1 ;
-(NSArray *)imageDominantColors;
-(void)setImageDominantColors:(NSArray *)arg1 ;
-(NSArray *)centerDominantColors;
-(void)setCenterDominantColors:(NSArray *)arg1 ;
-(NSArray *)lowerThirdDominantColors;
-(void)setLowerThirdDominantColors:(NSArray *)arg1 ;
-(BOOL)hasWarnedOnceNilTitleID;
-(void)setHasWarnedOnceNilTitleID:(BOOL)arg1 ;
@end

