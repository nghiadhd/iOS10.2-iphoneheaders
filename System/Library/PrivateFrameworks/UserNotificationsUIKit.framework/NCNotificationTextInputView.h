/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol NCNotificationTextInputViewDelegate;
@class NCNotificationAction, UIStackView, UITextField, UIButton;

@interface NCNotificationTextInputView : UIView {

	id<NCNotificationTextInputViewDelegate> _delegate;
	NCNotificationAction* _action;
	UIStackView* _horizontalStack;
	UITextField* _textField;
	UIButton* _button;

}

@property (nonatomic,retain) UIStackView * horizontalStack;                                        //@synthesize horizontalStack=_horizontalStack - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationTextInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NCNotificationAction * action;                                        //@synthesize action=_action - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)button;
-(void)setDelegate:(id<NCNotificationTextInputViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<NCNotificationTextInputViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(NCNotificationAction *)action;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)setAction:(NCNotificationAction *)arg1 ;
-(BOOL)canResignFirstResponder;
-(void)setPlaceholder:(id)arg1 ;
-(UITextField *)textField;
-(void)setButton:(UIButton *)arg1 ;
-(void)setButtonTitle:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(UIStackView *)horizontalStack;
-(void)setHorizontalStack:(UIStackView *)arg1 ;
@end

