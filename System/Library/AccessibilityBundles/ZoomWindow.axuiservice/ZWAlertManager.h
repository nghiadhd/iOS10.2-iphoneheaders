/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ZWAlertManager : NSObject {

	NSString* _currentAlertID;

}

@property (nonatomic,retain) NSString * currentAlertID;              //@synthesize currentAlertID=_currentAlertID - In the implementation block
-(void)showOrbZoomToggleOn;
-(void)showOrbZoomToggleOff;
-(BOOL)_shouldShowZoomAlert;
-(void)setCurrentAlertID:(NSString *)arg1 ;
-(NSString *)currentAlertID;
-(void)showZoomEnabledAlertIfAppropriate;
-(void)showZoomDisabledAlertIfAppropriate;
@end

