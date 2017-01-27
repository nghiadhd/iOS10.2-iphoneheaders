/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <DigitalTouchShared/DTSColorWheel.h>

@class UIImageView, UIView;

@interface ETTranscriptColorWheel : DTSColorWheel {

	UIImageView* _gradientImageView;
	UIView* _doneView;
	BOOL _presented;

}

@property (assign,getter=isPresented,nonatomic) BOOL presented;              //@synthesize presented=_presented - In the implementation block
-(double)_doneViewDiameter;
-(void)setHueForPaletteCircle:(id)arg1 ;
-(void)dismissAnimatedWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentAnimatedWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setPickerPositionInGradientWheel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isPresented;
-(void)setPresented:(BOOL)arg1 ;
-(void)beganTouches:(id)arg1 ;
-(id)pickerViewHighlightedColor;
-(void)createDoneButtonWithFrame:(CGRect)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
@end

