/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKPaymentSetupFindWithoutNumberFooterView : PKTableFooterView {

	long long _context;
	UIButton* _noNumberButton;

}

@property (assign,nonatomic) long long context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIButton * noNumberButton;              //@synthesize noNumberButton=_noNumberButton - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(BOOL)isBuddyiPad;
-(void)setNoNumberButton:(UIButton *)arg1 ;
-(UIButton *)noNumberButton;
@end

