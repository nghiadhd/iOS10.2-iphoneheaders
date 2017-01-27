/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <UIKit/UIView.h>

@protocol DTSColorPickerDelegate;
@class NSArray, ETPaletteCircleView, UILongPressGestureRecognizer, UIColor;

@interface DTSColorPicker : UIView {

	NSArray* _paletteCircles;
	ETPaletteCircleView* _selectedCircle;
	UILongPressGestureRecognizer* _longPressRecognizer;
	BOOL _dimmed;
	id<DTSColorPickerDelegate> _delegate;
	unsigned long long _colorCircleSize;

}

@property (nonatomic,retain) NSArray * paletteCircles;                                        //@synthesize paletteCircles=_paletteCircles - In the implementation block
@property (nonatomic,retain) ETPaletteCircleView * selectedCircle;                            //@synthesize selectedCircle=_selectedCircle - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;              //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<DTSColorPickerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIColor * selectedColor; 
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;                                     //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) unsigned long long colorCircleSize;                              //@synthesize colorCircleSize=_colorCircleSize - In the implementation block
@property (nonatomic,readonly) double colorCircleDiameter; 
@property (nonatomic,readonly) double colorCircleHorizontalSpacing; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<DTSColorPickerDelegate>)arg1 ;
-(id<DTSColorPickerDelegate>)delegate;
-(ETPaletteCircleView *)selectedCircle;
-(void)setSelectedCircle:(ETPaletteCircleView *)arg1 ;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)isDimmed;
-(UIColor *)selectedColor;
-(void)didReceiveLongPress:(id)arg1 ;
-(double)colorCircleDiameter;
-(void)paletteCircleTapped:(id)arg1 ;
-(void)selectCircle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)paletteCircles;
-(void)showColorWheel;
-(double)colorCircleHorizontalSpacing;
-(void)setColorCircleSize:(unsigned long long)arg1 ;
-(void)createPaletteCirclesWithParentView:(id)arg1 ;
-(unsigned long long)colorCircleSize;
-(void)setPaletteCircles:(NSArray *)arg1 ;
@end

