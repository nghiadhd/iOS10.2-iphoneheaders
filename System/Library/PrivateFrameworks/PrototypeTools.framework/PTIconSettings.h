/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface PTIconSettings : _UISettings {

	BOOL _on;
	double _alphaStrength;
	double _radiusStrength;

}

@property (assign,nonatomic) BOOL on;                            //@synthesize on=_on - In the implementation block
@property (assign,nonatomic) double alphaStrength;               //@synthesize alphaStrength=_alphaStrength - In the implementation block
@property (assign,nonatomic) double radiusStrength;              //@synthesize radiusStrength=_radiusStrength - In the implementation block
+(id)archivedSettingsGroup;
-(id)settingsHUDConfiguration;
-(void)setDefaultValues;
-(BOOL)on;
-(void)setOn:(BOOL)arg1 ;
-(void)setAlphaStrength:(double)arg1 ;
-(void)setRadiusStrength:(double)arg1 ;
-(void)settingsResetByHUD;
-(double)alphaStrength;
-(double)radiusStrength;
@end

