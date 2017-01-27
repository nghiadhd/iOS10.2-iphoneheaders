/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class SKUIComposeTextFieldConfiguration, UILabel, UITextField, NSString;

@interface SKUIComposeTextField : UIView <UITextFieldDelegate> {

	SKUIComposeTextFieldConfiguration* _configuration;
	long long _currentTextLength;
	id _delegate;
	UILabel* _label;
	long long _style;
	UITextField* _textField;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUIComposeTextFieldConfiguration * configuration; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UITextField * textField;                                        //@synthesize textField=_textField - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labelFontForStyle:(long long)arg1 ;
+(id)labelColorForStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(BOOL)isValid;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(SKUIComposeTextFieldConfiguration *)configuration;
-(UITextField *)textField;
-(long long)composeReviewStyle;
-(void)_textChanged:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 style:(long long)arg2 ;
@end

