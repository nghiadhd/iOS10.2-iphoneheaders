/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, VoiceOverGestureHelpViewController, UINavigationBar;

@interface VoiceOverGestureHelpView : UIView {

	UILabel* _titleLabel;
	UILabel* _infoLabel;
	VoiceOverGestureHelpViewController* _delegate;
	UINavigationBar* _navBar;

}

@property (assign,nonatomic) VoiceOverGestureHelpViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UINavigationBar * navBar;                                   //@synthesize navBar=_navBar - In the implementation block
-(void)setTitleText:(id)arg1 infoText:(id)arg2 ;
-(void)layoutSubviews;
-(void)hide;
-(void)show;
-(void)setDelegate:(VoiceOverGestureHelpViewController *)arg1 ;
-(void)dealloc;
-(VoiceOverGestureHelpViewController *)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_accessibilitySetCurrentGesture:(id)arg1 ;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
@end

