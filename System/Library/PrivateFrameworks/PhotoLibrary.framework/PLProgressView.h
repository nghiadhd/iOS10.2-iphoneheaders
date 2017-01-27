/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, UIProgressView, UIView, NSNumberFormatter, _UIBackdropView;

@interface PLProgressView : UIView {

	UIButton* _cancelButton;
	UILabel* _labelView;
	UIProgressView* _progressView;
	UIView* _topDivider;
	unsigned _didLayout : 1;
	unsigned _didSetPermanantTextOnLabelView : 1;
	NSNumberFormatter* _progressFormatter;
	long long _backgroundType;
	UIView* _backgroundView;
	UIView* _backgroundTintedView;
	_UIBackdropView* _backgroundBlurredView;
	BOOL _showsCancelButton;
	/*^block*/id _cancelationHandler;

}

@property (assign,nonatomic) long long backgroundType;                             //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundTintedView;                        //@synthesize backgroundTintedView=_backgroundTintedView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backgroundBlurredView;              //@synthesize backgroundBlurredView=_backgroundBlurredView - In the implementation block
@property (assign,nonatomic) float percentComplete; 
@property (assign,nonatomic) BOOL showsCancelButton;                               //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                  //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(float)percentComplete;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)setPercentComplete:(float)arg1 ;
-(void)setLabelText:(id)arg1 ;
-(void)_installBackgroundView;
-(void)_syncToBackgroundType;
-(void)_removeBackgroundTintedView;
-(void)_removeBackgroundBlurredView;
-(void)_installBackgroundBlurredView;
-(void)_installBackgroundTintedView;
-(_UIBackdropView *)backgroundBlurredView;
-(void)setBackgroundBlurredView:(_UIBackdropView *)arg1 ;
-(UIView *)backgroundTintedView;
-(void)setBackgroundTintedView:(UIView *)arg1 ;
-(id)cancelationHandler;
-(long long)backgroundType;
-(void)setBackgroundType:(long long)arg1 ;
-(void)setCancelationHandler:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)updateUIForPublishingAgent:(id)arg1 ;
@end

