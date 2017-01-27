/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class _UIBackdropView, UIView, NCMaterialSettings, NSString;

@interface NCMaterialView : UIView <_UISettingsKeyObserver> {

	unsigned long long _styleOptions;
	_UIBackdropView* _backdropView;
	UIView* _lightOverlayView;
	UIView* _whiteOverlayView;
	UIView* _cutoutOverlayView;
	NCMaterialSettings* _settings;
	BOOL _cornerRadiusIsContinuous;
	BOOL _captureOnly;
	double _subviewsContinuousCornerRadius;

}

@property (assign,setter=_setSubviewsContinuousCornerRadius:,getter=_subviewsContinuousCornerRadius,nonatomic) double subviewsContinuousCornerRadius;              //@synthesize subviewsContinuousCornerRadius=_subviewsContinuousCornerRadius - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) double grayscaleValue; 
@property (assign,nonatomic) double cornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)materialViewWithStyleOptions:(unsigned long long)arg1 ;
+(id)materialViewWithStyleOptions:(unsigned long long)arg1 materialSettings:(id)arg2 captureOnly:(BOOL)arg3 ;
+(id)materialViewWithStyleOptions:(unsigned long long)arg1 materialSettings:(id)arg2 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)dealloc;
-(double)_continuousCornerRadius;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)initWithStyleOptions:(unsigned long long)arg1 materialSettings:(id)arg2 captureOnly:(BOOL)arg3 ;
-(void)_configureIfNecessary;
-(void)_reduceTransparencyStatusDidChange;
-(void)_configureBackdropViewIfNecessary;
-(void)_configureLightOverlayViewIfNecessary;
-(void)_configureWhiteOverlayViewIfNecessary;
-(void)_configureCutoutOverlayViewIfNecessary;
-(void)_setSubviewsContinuousCornerRadius:(double)arg1 ;
-(double)grayscaleValue;
-(void)setGrayscaleValue:(double)arg1 ;
-(double)_subviewsContinuousCornerRadius;
@end

