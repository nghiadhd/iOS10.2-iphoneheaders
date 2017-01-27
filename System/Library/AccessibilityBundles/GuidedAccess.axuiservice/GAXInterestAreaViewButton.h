/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIButton.h>

@interface GAXInterestAreaViewButton : UIButton {

	BOOL _closeButton;
	unsigned long long _associatedInterestAreaPathIndex;
	unsigned long long _knobPosition;

}

@property (assign,nonatomic) unsigned long long associatedInterestAreaPathIndex;              //@synthesize associatedInterestAreaPathIndex=_associatedInterestAreaPathIndex - In the implementation block
@property (assign,nonatomic) unsigned long long knobPosition;                                 //@synthesize knobPosition=_knobPosition - In the implementation block
@property (assign,getter=isCloseButton,nonatomic) BOOL closeButton;                           //@synthesize closeButton=_closeButton - In the implementation block
+(id)buttonWithImage:(id)arg1 ;
-(unsigned long long)associatedInterestAreaPathIndex;
-(BOOL)isCloseButton;
-(void)setAssociatedInterestAreaPathIndex:(unsigned long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(void)setKnobPosition:(unsigned long long)arg1 ;
-(unsigned long long)knobPosition;
-(void)setCloseButton:(BOOL)arg1 ;
@end

