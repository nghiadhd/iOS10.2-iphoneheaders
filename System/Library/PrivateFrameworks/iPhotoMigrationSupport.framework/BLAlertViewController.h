/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iPhotoMigrationSupport/iPhotoMigrationSupport-Structs.h>
#import <UIKit/UIViewController.h>

@protocol BLAlertViewControllerDelegate;
@class NSString, UILabel, UIButton, UIProgressView, UIActivityIndicatorView;

@interface BLAlertViewController : UIViewController {

	BOOL _showsProgressIndicator;
	BOOL _showsActivityIndicator;
	BOOL _hasActivity;
	id<BLAlertViewControllerDelegate> _delegate;
	NSString* _message;
	double _progress;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _cancelButton;
	NSString* _cancelButtonTitle;
	UIButton* _firstOtherButton;
	NSString* _firstOtherButtonTitle;
	UIButton* _secondOtherButton;
	NSString* _secondOtherButtonTitle;
	UIProgressView* _progressView;
	UIActivityIndicatorView* _activityIndicator;
	CGSize _formSize;

}

@property (nonatomic,retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                         //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSString * cancelButtonTitle;                                   //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,retain) UIButton * firstOtherButton;                                    //@synthesize firstOtherButton=_firstOtherButton - In the implementation block
@property (nonatomic,retain) NSString * firstOtherButtonTitle;                               //@synthesize firstOtherButtonTitle=_firstOtherButtonTitle - In the implementation block
@property (nonatomic,retain) UIButton * secondOtherButton;                                   //@synthesize secondOtherButton=_secondOtherButton - In the implementation block
@property (nonatomic,retain) NSString * secondOtherButtonTitle;                              //@synthesize secondOtherButtonTitle=_secondOtherButtonTitle - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                  //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                    //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) CGSize formSize;                                                //@synthesize formSize=_formSize - In the implementation block
@property (assign,nonatomic,__weak) id<BLAlertViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long cancelButtonIndex; 
@property (nonatomic,retain) NSString * message;                                             //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL showsProgressIndicator;                                    //@synthesize showsProgressIndicator=_showsProgressIndicator - In the implementation block
@property (assign,nonatomic) double progress;                                                //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL showsActivityIndicator;                                    //@synthesize showsActivityIndicator=_showsActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasActivity;                                               //@synthesize hasActivity=_hasActivity - In the implementation block
-(void)setDelegate:(id<BLAlertViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<BLAlertViewControllerDelegate>)delegate;
-(long long)cancelButtonIndex;
-(void)viewDidLayoutSubviews;
-(void)setProgress:(double)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
-(double)progress;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setFirstOtherButtonTitle:(NSString *)arg1 ;
-(void)setSecondOtherButtonTitle:(NSString *)arg1 ;
-(void)setFormSize:(CGSize)arg1 ;
-(NSString *)secondOtherButtonTitle;
-(NSString *)firstOtherButtonTitle;
-(void)updateProgressAndActivityIndicators;
-(UIButton *)firstOtherButton;
-(UIButton *)secondOtherButton;
-(void)_sizeContent;
-(void)_recalculateFormSize;
-(BOOL)showsActivityIndicator;
-(BOOL)showsProgressIndicator;
-(BOOL)hasActivity;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 firstOtherButtonTitle:(id)arg4 secondOtherButtonTitle:(id)arg5 ;
-(void)setHasActivity:(BOOL)arg1 ;
-(void)firstOtherButtonAction:(id)arg1 ;
-(void)secondOtherButtonAction:(id)arg1 ;
-(CGSize)formSizeForOrientation:(long long)arg1 ;
-(void)setShowsProgressIndicator:(BOOL)arg1 ;
-(void)setFirstOtherButton:(UIButton *)arg1 ;
-(void)setSecondOtherButton:(UIButton *)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(UILabel *)messageLabel;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setShowsActivityIndicator:(BOOL)arg1 ;
-(CGSize)formSize;
@end

