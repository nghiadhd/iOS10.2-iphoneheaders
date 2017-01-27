/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/VSAutoAuthenticationViewController.h>

@protocol VSAuthenticationViewControllerDelegate;
@class VSAutoAuthenticationViewModel, UIScrollView, VSIdentityProviderLogoView, UILabel, UIButton, UIBarButtonItem, NSString, VSViewModel;

@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController> {

	BOOL _cancellationAllowed;
	id<VSAuthenticationViewControllerDelegate> _delegate;
	VSAutoAuthenticationViewModel* _viewModel;
	UIScrollView* _scrollView;
	VSIdentityProviderLogoView* _logoView;
	UILabel* _accountNameLabel;
	UILabel* _messageTitleLabel;
	UILabel* _messageLabel;
	UILabel* _noticeLabel;
	UILabel* _manualSignInTitleLabel;
	UIButton* _manualSignInButton;
	UIBarButtonItem* _signInButtonItem;
	UIBarButtonItem* _cancelButtonItem;
	id _contentSizeCategoryObserver;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) VSIdentityProviderLogoView * logoView;                                   //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UILabel * accountNameLabel;                                              //@synthesize accountNameLabel=_accountNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageTitleLabel;                                             //@synthesize messageTitleLabel=_messageTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * noticeLabel;                                                   //@synthesize noticeLabel=_noticeLabel - In the implementation block
@property (nonatomic,retain) UILabel * manualSignInTitleLabel;                                        //@synthesize manualSignInTitleLabel=_manualSignInTitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * manualSignInButton;                                           //@synthesize manualSignInButton=_manualSignInButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * signInButtonItem;                                      //@synthesize signInButtonItem=_signInButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                      //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id contentSizeCategoryObserver;                                   //@synthesize contentSizeCategoryObserver=_contentSizeCategoryObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VSAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                   //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,readonly) VSViewModel * viewModel; 
@property (nonatomic,readonly) CGSize preferredLogoSize; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<VSAuthenticationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<VSAuthenticationViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UILabel *)messageLabel;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
-(VSViewModel *)viewModel;
-(void)setViewModel:(VSViewModel *)arg1 ;
-(void)_updateFonts;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(BOOL)isCancellationAllowed;
-(CGSize)preferredLogoSize;
-(UILabel *)accountNameLabel;
-(UILabel *)messageTitleLabel;
-(UIButton *)manualSignInButton;
-(UILabel *)noticeLabel;
-(UILabel *)manualSignInTitleLabel;
-(void)_hideNavigationBarButtons;
-(void)_showNavigationBarButtons;
-(UIBarButtonItem *)signInButtonItem;
-(void)_signInButtonPressed:(id)arg1 ;
-(void)setSignInButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_startValidation;
-(void)_stopValidationAndShowButtons:(BOOL)arg1 ;
-(void)_showValidationAlertForError:(id)arg1 ;
-(void)setAccountNameLabel:(UILabel *)arg1 ;
-(void)setMessageTitleLabel:(UILabel *)arg1 ;
-(void)setNoticeLabel:(UILabel *)arg1 ;
-(void)setManualSignInTitleLabel:(UILabel *)arg1 ;
-(void)_manualSignInButtonPressed:(id)arg1 ;
-(void)setManualSignInButton:(UIButton *)arg1 ;
-(id)contentSizeCategoryObserver;
-(void)setContentSizeCategoryObserver:(id)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)setLogoView:(VSIdentityProviderLogoView *)arg1 ;
-(VSIdentityProviderLogoView *)logoView;
@end

