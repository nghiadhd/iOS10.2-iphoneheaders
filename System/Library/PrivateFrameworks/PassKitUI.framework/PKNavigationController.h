/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIColor, UIView, UIImageView, UIVisualEffectView, NSString;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {

	UIColor* _barBackgroundColor;
	long long _shadowStyle;
	UIView* _backgroundView;
	UIImageView* _wallpaperView;
	UIVisualEffectView* _blurView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithBarBackgroundColor:(id)arg1 barShadowStyle:(long long)arg2 ;
-(void)_applyShadowStyleForViewController:(id)arg1 ;
-(void)_updateWithWallpaperImage:(id)arg1 ;
-(void)setupBackgroundViewWithBlurEffect:(long long)arg1 ;
-(void)setupWallpaper;
@end

