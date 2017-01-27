/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView, NSInvocation, NSArray;

@interface _UIStaticScrollBar : UIView {

	UIButton* _upButton;
	UIButton* _downButton;
	UIView* _dividerLine;
	NSInvocation* _invocation;
	NSArray* _constraints;
	BOOL _shouldInsetButtonsForIndex;

}

@property (assign,nonatomic) BOOL shouldInsetButtonsForIndex;              //@synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex - In the implementation block
@property (nonatomic,readonly) BOOL isOnLeftSide; 
-(void)willMoveToWindow:(id)arg1 ;
-(void)updateConstraints;
-(void)buttonTapped:(id)arg1 ;
-(BOOL)shouldInsetButtonsForIndex;
-(BOOL)isOnLeftSide;
-(void)setTarget:(id)arg1 forAction:(SEL)arg2 ;
-(void)setShouldInsetButtonsForIndex:(BOOL)arg1 ;
-(CGRect)centeringBounds;
@end

