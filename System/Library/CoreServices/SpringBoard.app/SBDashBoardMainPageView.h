/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDashBoardViewBase.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol SBUILegibility;
@class _UILegibilitySettings, SBWallpaperEffectView, UIView, SBUICallToActionLabel, SBDashBoardVibrantWallpaperButton, SBSlideUpAppGrabberView, NSString;

@interface SBDashBoardMainPageView : SBDashBoardViewBase <CAAnimationDelegate> {

	_UILegibilitySettings* _legibilitySettings;
	SBWallpaperEffectView* _slideUpAppGrabberBackgroundView;
	BOOL _logoutHugCorner;
	/*^block*/id _callToActionShakeCompletion;
	UIView* _callToActionShakeContainerParentView;
	UIView* _callToActionShakeContainer;
	SBUICallToActionLabel* _callToActionLabel;
	BOOL _slideUpAppGrabberViewVisible;
	BOOL _fakeWallpaperVisible;
	UIView*<SBUILegibility> _statusTextView;
	SBDashBoardVibrantWallpaperButton* _logoutButtonView;
	SBWallpaperEffectView* _wallpaperEffectView;
	SBSlideUpAppGrabberView* _slideUpAppGrabberView;

}

@property (nonatomic,retain) SBUICallToActionLabel * callToActionLabel;                         //@synthesize callToActionLabel=_callToActionLabel - In the implementation block
@property (nonatomic,retain) UIView*<SBUILegibility> statusTextView;                            //@synthesize statusTextView=_statusTextView - In the implementation block
@property (nonatomic,retain) SBDashBoardVibrantWallpaperButton * logoutButtonView;              //@synthesize logoutButtonView=_logoutButtonView - In the implementation block
@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;                       //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (nonatomic,retain) SBSlideUpAppGrabberView * slideUpAppGrabberView;                   //@synthesize slideUpAppGrabberView=_slideUpAppGrabberView - In the implementation block
@property (assign,nonatomic) BOOL slideUpAppGrabberViewVisible;                                 //@synthesize slideUpAppGrabberViewVisible=_slideUpAppGrabberViewVisible - In the implementation block
@property (assign,nonatomic) BOOL fakeWallpaperVisible;                                         //@synthesize fakeWallpaperVisible=_fakeWallpaperVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_legibilityPrototypeSettings;
-(id)presentationRegions;
-(SBUICallToActionLabel *)callToActionLabel;
-(UIView*<SBUILegibility>)statusTextView;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)_layoutStatusTextView;
-(void)_layoutLogoutButtonView;
-(void)setStatusTextView:(UIView*<SBUILegibility>)arg1 ;
-(void)setLogoutButtonView:(SBDashBoardVibrantWallpaperButton *)arg1 ;
-(SBDashBoardVibrantWallpaperButton *)logoutButtonView;
-(SBSlideUpAppGrabberView *)slideUpAppGrabberView;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)_layoutWallpaperEffectView;
-(void)_layoutCallToActionLabel;
-(void)shakeCallToActionWithCompletion:(/*^block*/id)arg1 ;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(void)setFakeWallpaperVisible:(BOOL)arg1 ;
-(void)setCallToActionLabel:(SBUICallToActionLabel *)arg1 ;
-(void)setSlideUpAppGrabberView:(SBSlideUpAppGrabberView *)arg1 ;
-(void)setSlideUpAppGrabberViewVisible:(BOOL)arg1 ;
-(void)_invokeCallToActionShakeCompletionIfNecessary;
-(void)_updateCallToActionLegibility;
-(void)_updateStatusTextViewForLegibilitySettings;
-(void)_updateLogoutButtonForLegibilitySettings;
-(void)_updateSlideUpAppGrabberViewForLegibilitySettings;
-(void)_layoutSlideUpAppGrabberView;
-(UIEdgeInsets)_logoutButtonInsets;
-(void)_updateSlideToAppGrabberBackgroundView;
-(BOOL)slideUpAppGrabberViewVisible;
-(BOOL)fakeWallpaperVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)updateForPresentation:(id)arg1 ;
@end

