/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableArray, UIView, UITextField, SKUIGiftConfiguration, NSString;

@interface SKUIGiftAmountControl : UIControl <UITextFieldDelegate> {

	NSMutableArray* _amountButtons;
	UIView* _customAmountBackgroundView;
	UITextField* _customAmountField;
	SKUIGiftConfiguration* _giftConfiguration;
	long long _selectedAmount;
	long long _trackingAmount;

}

@property (nonatomic,readonly) long long selectedAmount; 
@property (nonatomic,readonly) NSString * selectedAmountString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(long long)selectedAmount;
-(NSString *)selectedAmountString;
-(id)initWithGiftConfiguration:(id)arg1 ;
-(void)_textFieldDidBeginEditing:(id)arg1 ;
-(void)_textFieldDidChange:(id)arg1 ;
-(void)_textFieldDidEndEditing:(id)arg1 ;
-(void)_updateButtonsWithTouch:(id)arg1 ;
-(void)_reloadSelectedButton;
@end

