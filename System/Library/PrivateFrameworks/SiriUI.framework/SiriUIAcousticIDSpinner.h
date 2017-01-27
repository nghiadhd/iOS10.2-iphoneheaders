/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SiriUIAcousticIDSpinnerDelegate;
@class UIImageView, UIVisualEffectView;

@interface SiriUIAcousticIDSpinner : UIView {

	UIImageView* _musicNoteView;
	UIImageView* _spinnerView;
	UIVisualEffectView* _vibrancyView;
	id<SiriUIAcousticIDSpinnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIAcousticIDSpinnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SiriUIAcousticIDSpinnerDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SiriUIAcousticIDSpinnerDelegate>)delegate;
-(void)animateIn;
-(BOOL)isShowing;
-(void)animateOut;
-(id)_imageForSpinner;
-(id)_spinningAnimation;
@end

