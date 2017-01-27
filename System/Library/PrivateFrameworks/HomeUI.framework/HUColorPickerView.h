/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlColorPickerViewInteractionDelegate;
@class HUQuickControlViewProfile, HUColorWheelView, HUQuickControlMagnifierView, UILongPressGestureRecognizer, NSString;

@interface HUColorPickerView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	id<HUQuickControlColorPickerViewInteractionDelegate> _interactionDelegate;
	HUQuickControlViewProfile* _profile;
	unsigned long long _colorPickerMode;
	unsigned long long _mirroringAxisBias;
	HUColorWheelView* _colorWheelView;
	HUQuickControlMagnifierView* _magnifierView;
	UILongPressGestureRecognizer* _gestureRecognizer;
	double _touchDownTimestamp;
	CGPoint _selectedColorCoordinate;
	UIEdgeInsets _selectedColor;

}

@property (assign,nonatomic) unsigned long long mirroringAxisBias;                                                         //@synthesize mirroringAxisBias=_mirroringAxisBias - In the implementation block
@property (nonatomic,readonly) id<HUColorWheelSpace> colorWheelSpace; 
@property (nonatomic,retain) HUColorWheelView * colorWheelView;                                                            //@synthesize colorWheelView=_colorWheelView - In the implementation block
@property (nonatomic,retain) HUQuickControlMagnifierView * magnifierView;                                                  //@synthesize magnifierView=_magnifierView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                                             //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) double touchDownTimestamp;                                                                    //@synthesize touchDownTimestamp=_touchDownTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint magnifierLocation; 
@property (assign,nonatomic) CGPoint selectedColorCoordinate;                                                              //@synthesize selectedColorCoordinate=_selectedColorCoordinate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets selectedColor;                                                                   //@synthesize selectedColor=_selectedColor - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                                    //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (assign,nonatomic) unsigned long long colorPickerMode;                                                           //@synthesize colorPickerMode=_colorPickerMode - In the implementation block
@property (assign,nonatomic) double wheelHoleRadius; 
@property (assign,nonatomic,__weak) id<HUQuickControlColorPickerViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long sizeSubclass; 
@property (nonatomic,retain) id value; 
@property (nonatomic,copy) HUQuickControlViewProfile * profile;                                                            //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) id secondaryValue; 
+(id)_colorWheelSpaceForMode:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlColorPickerViewInteractionDelegate>)arg1 ;
-(id<HUQuickControlColorPickerViewInteractionDelegate>)interactionDelegate;
-(id)initWithProfile:(id)arg1 ;
-(HUQuickControlViewProfile *)profile;
-(void)setProfile:(HUQuickControlViewProfile *)arg1 ;
-(double)wheelHoleRadius;
-(id<HUColorWheelSpace>)colorWheelSpace;
-(void)setWheelHoleRadius:(double)arg1 ;
-(void)_handleGesture:(id)arg1 ;
-(UIEdgeInsets)selectedColor;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)setSelectedColor:(UIEdgeInsets)arg1 ;
-(unsigned long long)colorPickerMode;
-(void)setColorPickerMode:(unsigned long long)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(void)setColorWheelView:(HUColorWheelView *)arg1 ;
-(HUColorWheelView *)colorWheelView;
-(void)setMagnifierView:(HUQuickControlMagnifierView *)arg1 ;
-(HUQuickControlMagnifierView *)magnifierView;
-(void)_updateMagnifierPosition;
-(void)_configureInitialConstraints;
-(void)_updateMirroringAxisBiasIfNecessary;
-(void)_updateMagnifierTransformForTouchLocation:(CGPoint)arg1 ;
-(void)_setColorPickerMode:(unsigned long long)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_applyMirroringAxisBiasToColorWheelSpaceIfNecessary;
-(void)_updateDerivedSelectedColorCoordinate;
-(void)setSelectedColorCoordinate:(CGPoint)arg1 ;
-(CGPoint)selectedColorCoordinate;
-(void)setMagnifierLocation:(CGPoint)arg1 ;
-(unsigned long long)mirroringAxisBias;
-(void)setMirroringAxisBias:(unsigned long long)arg1 ;
-(void)setTouchDownTimestamp:(double)arg1 ;
-(double)touchDownTimestamp;
-(CGPoint)magnifierLocation;
@end

