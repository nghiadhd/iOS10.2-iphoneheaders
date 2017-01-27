/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIKBRenderConfig : NSObject <NSCopying> {

	BOOL _useEmojiStyles;
	BOOL _lightKeyboard;
	long long _forceQuality;
	double _blurRadius;
	double _blurSaturation;
	double _keycapOpacity;
	double _lightKeycapOpacity;

}

@property (assign,nonatomic) BOOL lightKeyboard;                     //@synthesize lightKeyboard=_lightKeyboard - In the implementation block
@property (assign,nonatomic) long long forceQuality;                 //@synthesize forceQuality=_forceQuality - In the implementation block
@property (assign,nonatomic) double blurRadius;                      //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double blurSaturation;                  //@synthesize blurSaturation=_blurSaturation - In the implementation block
@property (assign,nonatomic) double keycapOpacity;                   //@synthesize keycapOpacity=_keycapOpacity - In the implementation block
@property (assign,nonatomic) double lightKeycapOpacity;              //@synthesize lightKeycapOpacity=_lightKeycapOpacity - In the implementation block
@property (nonatomic,readonly) BOOL whiteText; 
@property (nonatomic,readonly) long long backdropStyle; 
+(long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2 ;
+(id)defaultConfig;
+(id)defaultEmojiConfig;
+(id)darkConfig;
+(id)configForAppearance:(long long)arg1 inputMode:(id)arg2 ;
+(id)lowQualityDarkConfig;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)whiteText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)backdropStyle;
-(void)setBlurSaturation:(double)arg1 ;
-(void)setLightKeyboard:(BOOL)arg1 ;
-(void)setKeycapOpacity:(double)arg1 ;
-(void)setLightKeycapOpacity:(double)arg1 ;
-(BOOL)lightKeyboard;
-(double)keycapOpacity;
-(double)lightKeycapOpacity;
-(long long)forceQuality;
-(double)blurSaturation;
-(void)setForceQuality:(long long)arg1 ;
@end

