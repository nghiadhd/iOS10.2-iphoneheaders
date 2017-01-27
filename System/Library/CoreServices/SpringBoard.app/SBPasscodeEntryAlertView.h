/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>

@protocol SBPasscodeEntryAlertViewDelegate;
@class SBUIPasscodeViewWithLockScreenStyle, SBAppStatusBarSettingsAssertion;

@interface SBPasscodeEntryAlertView : SBAlertView {

	SBUIPasscodeViewWithLockScreenStyle* _passcodeView;
	BOOL _dismissing;
	SBAppStatusBarSettingsAssertion* _showStatusBarAssertion;
	id<SBPasscodeEntryAlertViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIView*<SBUIPasscodeLockView> passcodeLockView; 
@property (assign,nonatomic,__weak) id<SBPasscodeEntryAlertViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)layoutForInterfaceOrientation:(long long)arg1 ;
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(BOOL)isReadyToBeRemovedFromView;
-(UIView*<SBUIPasscodeLockView>)passcodeLockView;
-(/*^block*/id)_passcodeViewGenerator;
-(void)_dismissAnimationCompleted;
-(void)setPasscodeViewsToVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBPasscodeEntryAlertViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SBPasscodeEntryAlertViewDelegate>)delegate;
-(id)passcodeView;
@end

