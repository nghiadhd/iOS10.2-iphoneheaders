/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUColoredButtonCellDelegate;
@class UIColor, HUColoredButton, NSString;

@interface HUColoredButtonCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _buttonColorFollowsTintColor;
	id<HUColoredButtonCellDelegate> _delegate;
	UIColor* _buttonBackgroundColor;
	HUColoredButton* _button;

}

@property (nonatomic,retain) HUColoredButton * button;                                     //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) id<HUColoredButtonCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (assign,nonatomic) BOOL buttonColorFollowsTintColor;                             //@synthesize buttonColorFollowsTintColor=_buttonColorFollowsTintColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonBackgroundColor;                              //@synthesize buttonBackgroundColor=_buttonBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                              //@synthesize disabled=_disabled - In the implementation block
-(HUColoredButton *)button;
-(void)setDelegate:(id<HUColoredButtonCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<HUColoredButtonCellDelegate>)delegate;
-(NSString *)title;
-(void)tintColorDidChange;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)buttonPressed:(id)arg1 ;
-(void)setButton:(HUColoredButton *)arg1 ;
-(BOOL)isDisabled;
-(void)updateButtonColor;
-(void)setButtonColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)buttonColorFollowsTintColor;
-(void)setButtonBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)buttonBackgroundColor;
@end

