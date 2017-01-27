/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UICollectionViewLayout, UIPercentDrivenInteractiveTransition, NSString;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _crossFadeNavigationBar;
	BOOL _crossFadeBottomBars;
	BOOL _interactionAborted;
	UICollectionViewLayout* _toLayout;
	UIPercentDrivenInteractiveTransition* _interactionController;
	long long _operation;

}

@property (nonatomic,retain) UICollectionViewLayout * toLayout;                                         //@synthesize toLayout=_toLayout - In the implementation block
@property (assign,nonatomic) BOOL crossFadeNavigationBar;                                               //@synthesize crossFadeNavigationBar=_crossFadeNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL crossFadeBottomBars;                                                  //@synthesize crossFadeBottomBars=_crossFadeBottomBars - In the implementation block
@property (assign,nonatomic) UIPercentDrivenInteractiveTransition * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,nonatomic) BOOL interactionAborted;                                                   //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) long long operation;                                                       //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(void)setInteractionAborted:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(BOOL)interactionAborted;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(BOOL)_shouldCrossFadeNavigationBar;
-(BOOL)_shouldCrossFadeBottomBars;
-(void)setToLayout:(UICollectionViewLayout *)arg1 ;
-(void)setCrossFadeNavigationBar:(BOOL)arg1 ;
-(void)setCrossFadeBottomBars:(BOOL)arg1 ;
-(UICollectionViewLayout *)toLayout;
-(BOOL)crossFadeNavigationBar;
-(BOOL)crossFadeBottomBars;
@end

