/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface VTUIStyle : NSObject {

	NSArray* _deviceStringSuffixes;
	NSArray* _deviceImageSuffixes;
	NSString* _deviceClass;
	BOOL _isIpad;
	BOOL _isLargeIpad;
	BOOL _needMoreLineSpacing;
	BOOL _isBuddy;
	BOOL _isHeySiriAlwaysOn;
	long long _enrollmentMode;

}

@property (assign,nonatomic) long long enrollmentMode;              //@synthesize enrollmentMode=_enrollmentMode - In the implementation block
@property (assign,nonatomic) BOOL isBuddy;                          //@synthesize isBuddy=_isBuddy - In the implementation block
@property (assign,nonatomic) BOOL isHeySiriAlwaysOn;                //@synthesize isHeySiriAlwaysOn=_isHeySiriAlwaysOn - In the implementation block
+(id)sharedStyle;
-(id)init;
-(void)dealloc;
-(double)horizontalPadding;
-(id)subtitleFont;
-(BOOL)isBuddy;
-(BOOL)isHeySiriAlwaysOn;
-(void)orientationChanged:(id)arg1 ;
-(void)setIsBuddy:(BOOL)arg1 ;
-(void)setEnrollmentMode:(long long)arg1 ;
-(id)headerTitleFont;
-(id)VTUIDeviceSpecificString:(id)arg1 ;
-(double)flamesHeight;
-(double)skipButtonBaselineBottomMargin;
-(double)statusLabelVerticalOffsetFromCenter;
-(double)statusLabelMinHeight;
-(double)tickMarkHorizontalSizeRatio;
-(double)radarBtnVerticalPadding;
-(double)radarBtnHorizontalPadding;
-(long long)enrollmentMode;
-(id)deviceDoneImage;
-(id)continueButtonFont;
-(BOOL)footerShouldPinToImage;
-(double)titleBaselineOffsetFromTop;
-(double)subtitle1BaselineOffset;
-(double)subtitle2BaselineOffset;
-(double)imageViewTopOffset;
-(double)continueButtonBaselineOffset;
-(double)horizontalPaddingLandscape;
-(double)horizontalPaddingPortrait;
-(double)imageViewBottomOffsetFromFooter;
-(BOOL)shouldShowFooterLine;
-(id)footerButtonFont;
-(id)footerTextColor;
-(id)footerLabelFont;
-(double)footerTextBaselineFromTop;
-(double)footerSkipButtonBaselineFromContinueButton;
-(double)footerSkipButtonBaselineFromBottom;
-(double)footerHorizontalPadding;
-(id)deviceSetupImage;
-(id)turnOnSiriContinueButtonFont;
-(double)turnOnSiriImageOffsetFromTopPortrait;
-(double)turnOnSiriHorizontalPaddingPortrait;
-(double)turnOnSiriContinueButtonWidth;
-(double)turnOnSiriContinueButtonHeight;
-(double)turnOnSiriImageOffsetFromTopLandscape;
-(double)turnOnSiriHorizontalPaddingLandscape;
-(double)headerTitleLinespacing;
-(void)_createStringSuffixesForDevice;
-(void)_createImageSuffixesForDevice;
-(id)_deviceImageForBaseImageName:(id)arg1 ;
-(double)footerContinueButtonMinBaselineFromText;
-(double)footerLabelLineHeight;
-(void)setIsHeySiriAlwaysOn:(BOOL)arg1 ;
-(id)buttonTextColor;
-(double)subtitleLineHeight;
@end

