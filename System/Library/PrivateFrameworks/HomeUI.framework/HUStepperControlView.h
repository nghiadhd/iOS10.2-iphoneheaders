/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, NSFormatter, UIStepper, UILabel, NSArray;

@interface HUStepperControlView : UIView <HUControlView> {

	id<HUControlViewDelegate> _delegate;
	NSString* _identifier;
	id _value;
	NSFormatter* _valueFormatter;
	UIStepper* _stepper;
	UILabel* _valueLabel;
	NSArray* _layoutConstraints;

}

@property (nonatomic,readonly) UIStepper * stepper;                                  //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                                 //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                            //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic) double minValue; 
@property (assign,nonatomic) double maxValue; 
@property (assign,nonatomic) double stepValue; 
@property (nonatomic,retain) NSFormatter * valueFormatter;                           //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)valueClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(id<HUControlViewDelegate>)delegate;
-(NSString *)identifier;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)updateConstraints;
-(double)minValue;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setStepValue:(double)arg1 ;
-(double)stepValue;
-(UILabel *)valueLabel;
-(BOOL)isDisabled;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(id)_defaultValueFormatter;
-(void)setValueFormatter:(NSFormatter *)arg1 ;
-(NSFormatter *)valueFormatter;
-(void)_stepperTouchDown:(id)arg1 ;
-(void)_stepperValueChanged:(id)arg1 ;
-(void)_stepperTouchUp:(id)arg1 ;
-(void)_updateValueLabel;
-(UIStepper *)stepper;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
@end

