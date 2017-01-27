/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSError, UIButton, UILabel;

@interface VSErrorViewController : UIViewController {

	BOOL _recoveryDestructive;
	NSError* _error;
	UIButton* _recoveryButton;
	UILabel* _titleLabel;
	UILabel* _messageLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                             //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * recoveryButton;                                          //@synthesize recoveryButton=_recoveryButton - In the implementation block
@property (nonatomic,retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (assign,getter=isRecoveryDestructive,nonatomic) BOOL recoveryDestructive;              //@synthesize recoveryDestructive=_recoveryDestructive - In the implementation block
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)_updateText;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIButton *)recoveryButton;
-(void)_recoveryButtonPressed:(id)arg1 ;
-(BOOL)isRecoveryDestructive;
-(void)setRecoveryButton:(UIButton *)arg1 ;
-(void)setRecoveryDestructive:(BOOL)arg1 ;
@end

