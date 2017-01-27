/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, SBUIActionViewLabel, NSArray, SBUIAction;

@interface SBUIActionView : UIView {

	BOOL _interfaceOrientationIsPortrait;
	UIImageView* _imageView;
	UIView* _textContainer;
	SBUIActionViewLabel* _titleLabel;
	SBUIActionViewLabel* _subtitleLabel;
	NSArray* _imageViewLayoutConstraints;
	BOOL _highlighted;
	SBUIAction* _action;
	long long _imagePosition;

}

@property (nonatomic,readonly) SBUIAction * action;                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long imagePosition;                            //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SBUIAction *)action;
-(void)didMoveToSuperview;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(id)initWithAction:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 withFeedbackRetargetBehavior:(id)arg2 ;
-(void)_updateImageViewLayoutConstraints;
-(void)_setupSubviews;
-(void)setImagePosition:(long long)arg1 ;
-(long long)imagePosition;
@end

