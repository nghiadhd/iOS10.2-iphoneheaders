/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MapsTheme : NSObject {

	NSDictionary* _colorsForCurrentTheme;
	unsigned long long _currentThemeStyle;
	unsigned long long _currentVisualEffectStyle;
	BOOL _isRTL;
	BOOL _placecardShouldUseSmallFont;

}

@property (assign,nonatomic) unsigned long long mapsThemeStyle;                 //@synthesize currentThemeStyle=_currentThemeStyle - In the implementation block
@property (assign,nonatomic) BOOL placecardShouldUseSmallFont;                  //@synthesize placecardShouldUseSmallFont=_placecardShouldUseSmallFont - In the implementation block
@property (assign,nonatomic) unsigned long long visualEffectStyle;              //@synthesize currentVisualEffectStyle=_currentVisualEffectStyle - In the implementation block
+(id)themeWithMapsThemeStyle:(unsigned long long)arg1 visualEffectStyle:(unsigned long long)arg2 ;
+(BOOL)shouldApplyVisualEffectWithKey:(id)arg1 ;
+(id)globalThemes;
+(id)visualEffectViewWithKey:(id)arg1 allowingBlur:(BOOL)arg2 ;
+(Class)visualEffectViewClassWithKey:(id)arg1 allowingBlur:(BOOL)arg2 ;
+(id)sharedManager;
-(BOOL)placecardShouldUseSmallFont;
-(id)navButtonPrimaryColor;
-(id)navEndButtonColor;
-(id)navTraySecondaryTextColor;
-(id)parkedCarSectionHeaderColor;
-(id)parkedCarNotePlaceholderColor;
-(id)navTrayTitleTextColor;
-(id)blackCircleButtonBackgroundColor:(unsigned long long)arg1 ;
-(id)steppingSignButtonTitleColor;
-(id)reservationsGrayColor;
-(id)imageBorderColor;
-(id)navSignGuidanceManeuverAccentColor;
-(void)setMapsThemeStyle:(unsigned long long)arg1 ;
-(unsigned long long)infoCardThemeType;
-(id)routeOptionsBackgroundColor;
-(id)addPhotoPlaceholderBackgroundColor;
-(id)navSignGuidanceManeuverColor;
-(id)navDirectionHairlineColor;
-(id)routePlanningSectionHeaderBackgroundColor;
-(id)addPhotoPlaceholderForegroundColor;
-(id)navDirectionStepSecondaryColor;
-(id)navSignMinorTextColor;
-(id)navResumeRouteBannerBackgroundColor;
-(id)navDirectionStepPrimaryColor;
-(BOOL)updateMapsThemeStyleIfNeeded:(unsigned long long)arg1 ;
-(id)navSignPrimaryColor;
-(id)navResumeRouteBannerHighlightColor;
-(id)navSignMajorTextColor;
-(long long)blurDarkeningAppearance;
-(id)routePlanningSectionHeaderTitleColor;
-(BOOL)showLightContentForListStep;
-(id)navigationFeatureCellHighlightedOverlayColor;
-(id)vibrantTopFilter;
-(id)navigationVolumeBluetoothImage;
-(id)hairlineBorderColor;
-(id)blueButtonTitleColor:(unsigned long long)arg1 ;
-(id)orbHintPhaseBackgroundColor;
-(id)blueButtonBackgroundColor:(unsigned long long)arg1 ;
-(id)browseTitleHairlineColor;
-(id)hairlineBorderOpaqueColor;
-(unsigned long long)mapsThemeStyle;
-(id)searchBarPlaceHolderColor;
-(id)navEndButtonHighlightedColor;
-(id)vibrantBackgroundColor;
-(id)greenButtonTitleColor:(unsigned long long)arg1 ;
-(long long)selectionBackgroundAppearance;
-(id)closeXImage;
-(void)setPlacecardShouldUseSmallFont:(BOOL)arg1 ;
-(id)textFieldAtomSelectionTextColor;
-(id)browseTitleTextColor;
-(id)navigationVolumesImage;
-(id)greenButtonBackgroundColor:(unsigned long long)arg1 ;
-(id)navigationTrayOverviewImage;
-(id)topCornerRadiusHairlineImage;
-(id)navigationDetailsImage;
-(id)weatherImageForLegacyConditionCode:(long long)arg1 ;
-(unsigned long long)searchBarBackdropStyle;
-(id)vibrantBackgroundFilter;
-(id)controlTintColor;
-(void)setVisualEffectStyle:(unsigned long long)arg1 ;
-(id)disabledControlBackgroundColor;
-(id)groupTableViewCellBackgroundColor;
-(id)controlBackgroundColor;
-(id)searchClearImage;
-(id)navSignSecondaryColor;
-(id)disabledTitleColor;
-(unsigned long long)visualEffectStyle;
-(id)navigationTrayResumeImage;
-(id)_mapsThemeStyleKey:(unsigned long long)arg1 ;
-(id)navigationFeatureCellBackgroundColor;
-(id)mapAttributionTitleColor;
-(void)_updateCurrentTheme;
-(id)fullCornerRadiusHairlineImage;
-(id)textFieldAtomSelectionBackgroundColor;
-(id)imageBackgroundColor;
-(id)navEndButtonTitleColor;
-(id)colorForTag:(id)arg1 ;
-(id)closeXColor;
-(BOOL)isCurrentThemeEitherSatelliteOrNightMode;
-(id)visualEffectViewWithKey:(id)arg1 allowingBlur:(BOOL)arg2 ;
-(id)controlBackgroundColorForThemeStyle:(unsigned long long)arg1 ;
-(id)navigationFeatureCellForegroundColor;
-(id)lazyLoadingImageWithKey:(id)arg1 imageName:(id)arg2 imageColor:(id)arg3 supportRTL:(BOOL)arg4 ;
-(id)_navigationTrayImageWithImageName:(id)arg1 key:(id)arg2 ;
-(id)lazyLoadingImageWithKey:(id)arg1 factory:(/*^block*/id)arg2 ;
-(id)lazyLoadingImageWithKey:(id)arg1 imageName:(id)arg2 supportRTL:(BOOL)arg3 ;
-(id)initWithMapsThemeStyle:(unsigned long long)arg1 visualEffectStyle:(unsigned long long)arg2 ;
-(BOOL)updateVisualEffectStyleIfNeeded:(unsigned long long)arg1 ;
-(id)tableViewCellHighlightedOverlayColor;
-(id)lazyLoadingImageWithKey:(id)arg1 imageName:(id)arg2 ;
-(id)dimmingImage;
-(id)browseTitleBackgroundColor;
-(id)vibrantTopColor;
-(id)ratingsColor;
-(id)init;
-(id)dimmingColor;
-(long long)statusBarStyle;
-(id)groupTableViewBackgroundColor;
-(id)titleColor;
-(id)hairlineColor;
-(id)darkKeyColor;
-(long long)activityIndicatorStyle;
-(id)subtitleColor;
-(id)keyColor;
-(id)visualEffect;
@end

