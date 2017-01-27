/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
#import <UIKit/UIKit-Structs.h>
@class UITransitionView, UIWindow, UIViewController;

@interface UIWindowController : NSObject {

	UITransitionView* _transitionView;
	UIWindow* _window;
	int _currentTransition;
	id _target;
	SEL _didEndSelector;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	CGPoint _beginOriginForToView;
	CGPoint _endOriginForToView;
	BOOL _presenting;
	long long _toModalStyle;
	BOOL _needsDidAppear;
	BOOL _needsDidDisappear;
	BOOL __interactiveTransition;
	id<UIViewControllerAnimatedTransitioning> _transitionController;
	id<UIViewControllerInteractiveTransitioning> _interactionController;

}

@property (assign,nonatomic,__weak) UIWindow * window;                                                                                           //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UITransitionView * transitionView;                                                                                //@synthesize transitionView=_transitionView - In the implementation block
@property (assign,nonatomic) BOOL presenting;                                                                                                    //@synthesize presenting=_presenting - In the implementation block
@property (setter=_setTransitionController:,nonatomic,retain) id<UIViewControllerAnimatedTransitioning> _transitionController;                   //@synthesize transitionController=_transitionController - In the implementation block
@property (setter=_setInteractionController:,nonatomic,retain) id<UIViewControllerInteractiveTransitioning> _interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,setter=_setInteractiveTransition:,getter=_isInteractiveTransition,nonatomic) BOOL _interactiveTransition;                      //@synthesize _interactiveTransition=__interactiveTransition - In the implementation block
+(void)windowWillBeDeallocated:(id)arg1 ;
+(id)windowControllerForWindow:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(id<UIViewControllerInteractiveTransitioning>)_interactionController;
-(void)setWindow:(UIWindow *)arg1 ;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidStart:(id)arg1 ;
-(BOOL)transitionViewShouldUseViewControllerCallbacks;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2 ;
-(BOOL)presenting;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(CGSize)_flipSize:(CGSize)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)_transitionController;
-(void)setPresenting:(BOOL)arg1 ;
-(void)_setTransitionController:(id)arg1 ;
-(void)_setInteractionController:(id)arg1 ;
-(void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 animation:(/*^block*/id)arg6 ;
-(UITransitionView *)transitionView;
-(CGPoint)_originForViewController:(id)arg1 orientation:(long long)arg2 actualStatusBarHeight:(double)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5 ;
-(CGRect)_boundsForViewController:(id)arg1 transition:(int)arg2 orientation:(long long)arg3 fullScreenLayout:(BOOL)arg4 inWindow:(id)arg5 ;
-(void)_setInteractiveTransition:(BOOL)arg1 ;
-(void)transitionViewDidCancel:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2 ;
-(BOOL)_isInteractiveTransition;
-(CGPoint)_adjustOrigin:(CGPoint)arg1 givenOtherOrigin:(CGPoint)arg2 forTransition:(int)arg3 ;
-(void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 ;
@end

