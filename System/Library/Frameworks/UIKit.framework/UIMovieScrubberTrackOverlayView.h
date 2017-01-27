/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface UIMovieScrubberTrackOverlayView : UIView {

	double _value;
	double _minimumValue;
	double _maximumValue;
	double _startValue;
	double _endValue;
	UIImageView* _leftFillView;
	UIImageView* _rightFillView;
	unsigned _editingHandle;
	unsigned _editing : 1;
	unsigned _zoomed : 1;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setValue:(double)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)animateFillFramesAway;
-(void)setStartValue:(double)arg1 ;
-(void)setEditingHandle:(int)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(void)setIsZoomed:(BOOL)arg1 ;
-(void)_clampValueAndLayout;
-(void)_updateLeftFill;
-(void)_updateRightFill;
@end

