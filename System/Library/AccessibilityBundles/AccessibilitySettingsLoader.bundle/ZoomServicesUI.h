/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:53:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface ZoomServicesUI : NSObject {

	BOOL _registeredForAppNotifications;

}

@property (assign,getter=isRegisteredForAppNotifications,nonatomic) BOOL registeredForAppNotifications;              //@synthesize registeredForAppNotifications=_registeredForAppNotifications - In the implementation block
+(void)enableZoomServices;
+(void)disableZoomServices;
-(id)init;
-(void)dealloc;
-(Class)_accessibilityBundlePrincipalClass;
-(void)_handleKeyboardWillShowNotification:(id)arg1 ;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)_handleZoomEnabledStatusDidChangeNotification:(id)arg1 ;
-(void)_updateForCurrentZoomStatus;
-(void)_unregisterForAppNotifications;
-(void)_installZoomUISafeCategoriesIfNeeded;
-(void)_registerForAppNotifications;
-(BOOL)isRegisteredForAppNotifications;
-(void)_handleRegisterZoomConflictNotification:(id)arg1 ;
-(void)_handleZoomFocusDidChangeNotification:(id)arg1 ;
-(void)_handleFirstResponderDidChangeNotification:(id)arg1 ;
-(void)_handleAlertWillAppearNotification:(id)arg1 ;
-(void)_handleLockButtonWasPressedNotification:(id)arg1 ;
-(void)_handleAppSwitcherWillBeginRevealNotification:(id)arg1 ;
-(void)_handleAppDidBecomeActiveNotification:(id)arg1 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(CGRect)_keyboardFrameInScreenCoordinates;
@end

