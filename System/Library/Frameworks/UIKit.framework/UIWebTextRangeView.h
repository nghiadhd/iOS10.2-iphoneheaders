/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UITextInput;
@class UIView, NSArray, NSMutableArray, UIWebDragDotView;

@interface UIWebTextRangeView : UIView {

	UIView*<UITextInput> m_container;
	NSArray* _rects;
	NSMutableArray* _rectViews;
	UIWebDragDotView* _startDot;
	UIWebDragDotView* _endDot;
	BOOL _magnifying;

}

@property (nonatomic,readonly) UIView*<UITextInput> container; 
@property (nonatomic,copy) NSArray * rects;                                 //@synthesize rects=_rects - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(UIView*<UITextInput>)container;
-(void)setRects:(NSArray *)arg1 ;
-(NSArray *)rects;
-(void)prepareForMagnification;
-(void)doneMagnifying;
-(CGRect)startEdge;
-(CGRect)endEdge;
-(void)updateRectViews;
-(CGRect)boundingRect;
-(void)geometryChanged;
-(BOOL)startIsHorizontal;
-(BOOL)endIsHorizontal;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(CGRect)rectAtIndex:(int)arg1 ;
-(CGPoint)endCorner;
-(CGPoint)startCorner;
-(void)updateDragDots;
-(id)rectViewAtIndex:(int)arg1 ;
@end

