/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBUIIconForceTouchViewControllerDelegate;
@class SBUIIconForceTouchVisualEffectView, UIView, SBUIIconForceTouchIconViewWrapperView, SBUIIconForceTouchWrapperViewController, NSArray, NSMutableArray, SBUIIconForceTouchControllerDataProvider, NSString;

@interface SBUIIconForceTouchViewController : UIViewController <UIGestureRecognizerDelegate> {

	SBUIIconForceTouchVisualEffectView* _visualEffectView;
	UIView* _parallaxView;
	SBUIIconForceTouchIconViewWrapperView* _iconViewWrapperViewBelow;
	SBUIIconForceTouchWrapperViewController* _primaryViewController;
	SBUIIconForceTouchWrapperViewController* _secondaryViewController;
	SBUIIconForceTouchIconViewWrapperView* _iconViewWrapperViewAbove;
	NSArray* _initialLayoutConstraints;
	NSArray* _showingLayoutConstraints;
	NSMutableArray* _presentCompletionHandlers;
	NSMutableArray* _dismissCompletionHandlers;
	double _smoothedValue;
	double _currentPeekProgress;
	SBUIIconForceTouchControllerDataProvider* _dataProvider;
	long long _state;
	long long _layout;
	id<SBUIIconForceTouchViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SBUIIconForceTouchControllerDataProvider * dataProvider;                 //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) long long state;                                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long layout;                                                        //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIIconForceTouchViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SBUIIconForceTouchViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBUIIconForceTouchViewControllerDelegate>)delegate;
-(long long)state;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)layout;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(SBUIIconForceTouchControllerDataProvider *)dataProvider;
-(long long)_layoutForDataProvider:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 ;
-(void)_peekAnimated:(BOOL)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_presentAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_dismissAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_revealWithRelativeForce:(double)arg1 ;
-(void)_scaleIconViewWithPercent:(double)arg1 ;
-(BOOL)peekAnimated:(BOOL)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(BOOL)arg3 ;
-(BOOL)presentAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(BOOL)dismissAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

