/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol PSUICircleSegmentedControlDelegate;
@class NSMutableArray, UIStackView, PSUICircleSegment, UIImage, UILabel;

@interface PSUICircleSegmentedControl : UIControl {

	NSMutableArray* _segmentPlaceholders;
	NSMutableArray* _segments;
	UIStackView* _stack;
	PSUICircleSegment* _selectedSegment;
	NSMutableArray* _segmentConstraints;
	NSMutableArray* _selectedSegmentConstraints;
	UIImage* _placeholderImage;
	UIImage* _buttonImage;
	UIImage* _highlightedImage;
	UIImage* _activeImage;
	id<PSUICircleSegmentedControlDelegate> _delegate;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) id<PSUICircleSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                     //@synthesize label=_label - In the implementation block
-(id)init;
-(void)setDelegate:(id<PSUICircleSegmentedControlDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PSUICircleSegmentedControlDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(UILabel *)label;
-(void)setSelectedSegmentIndex:(unsigned long long)arg1 ;
-(void)addSegmentWithTitle:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)selectSegmentAtIndex:(unsigned long long)arg1 ;
-(void)menuButtonPressed;
-(id)_circleImageWithColor:(id)arg1 fillColor:(id)arg2 diameter:(double)arg3 ;
-(void)segmentTapped:(id)arg1 ;
-(void)setPositionConstraintsActive:(BOOL)arg1 forButtonAtIndex:(unsigned long long)arg2 ;
@end

