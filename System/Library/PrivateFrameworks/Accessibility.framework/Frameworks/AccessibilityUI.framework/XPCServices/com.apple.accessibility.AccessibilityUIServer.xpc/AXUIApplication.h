/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/XPCServices/com.apple.accessibility.AccessibilityUIServer.xpc/com.apple.accessibility.AccessibilityUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.accessibility.AccessibilityUIServer/com.apple.accessibility.AccessibilityUIServer-Structs.h>
#import <UIKit/UIApplication.h>

@interface AXUIApplication : UIApplication

@property (nonatomic,readonly) long long _expectedViewOrientation; 
-(void)_run;
-(BOOL)_shouldAllowKeyboardArbiter;
-(long long)_expectedViewOrientation;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(BOOL)_accessibilityIsAccessibilityUIServer;
-(BOOL)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
-(id)_accessibilityIsolatedWindows;
-(long long)_accessibilityOrientationForCompareGeometry;
@end

