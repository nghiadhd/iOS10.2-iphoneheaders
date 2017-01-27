/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol ICQBannerViewDelegate;
@class ICQOffer, _ICQTextView, UIButton, NSLayoutConstraint, NSArray, NSString;

@interface ICQBannerView : UIView <UITextViewDelegate> {

	ICQOffer* _offer;
	BOOL _hasDismissButton;
	id<ICQBannerViewDelegate> _delegate;
	_ICQTextView* _textView;
	UIButton* _dismissButton;
	NSLayoutConstraint* _textViewHeightConstraint;
	NSArray* _activeConstraints;

}

@property (nonatomic,readonly) _ICQTextView * textView;                                    //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                   //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * textViewHeightConstraint;              //@synthesize textViewHeightConstraint=_textViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                  //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) ICQOffer * offer; 
@property (assign,nonatomic) BOOL hasDismissButton; 
@property (assign,nonatomic,__weak) id<ICQBannerViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowForOffer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<ICQBannerViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<ICQBannerViewDelegate>)delegate;
-(long long)userInterfaceLayoutDirection;
-(long long)semanticContentAttribute;
-(void)updateConstraints;
-(id)attributedText;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)hasTitle;
-(_ICQTextView *)textView;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(UIButton *)dismissButton;
-(ICQOffer *)offer;
-(void)setOffer:(ICQOffer *)arg1 ;
-(id)titleAttributes;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(NSArray *)activeConstraints;
-(BOOL)isRTL;
-(BOOL)hasDismissButton;
-(BOOL)shouldCenterMessage;
-(id)textParagraphStyle;
-(id)messageAttributes;
-(id)textParagraphStyleAttributes;
-(void)setHasDismissButton:(BOOL)arg1 ;
-(void)tappedDismissButton:(id)arg1 ;
-(NSLayoutConstraint *)textViewHeightConstraint;
@end

