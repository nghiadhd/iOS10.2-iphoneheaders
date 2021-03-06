/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoard/SBIconViewDelegate.h>

@protocol SBCommandTabViewControllerDelegate;
@class NSArray, SBIconModel, NSMutableArray, _UIBackdropViewSettings, _UIBackdropView, UIView, UIImageView, SBIconView, NSLayoutConstraint, NSString;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate> {

	NSArray* _switcherDisplayItems;
	unsigned long long _selectedIndex;
	SBIconModel* _iconModel;
	NSMutableArray* _iconViews;
	_UIBackdropViewSettings* _blurSettings;
	_UIBackdropView* _backgroundBackdropView;
	UIView* _blurredBackgroundView;
	UIImageView* _selectionSquareView;
	SBIconView* _selectedIconView;
	NSLayoutConstraint* _selectionXLayoutConstraint;
	id<SBCommandTabViewControllerDelegate> _delegate;

}

@property (setter=_setBlurSettings:,getter=_blurSettings,nonatomic,retain) _UIBackdropViewSettings * blurSettings;                                                   //@synthesize blurSettings=_blurSettings - In the implementation block
@property (setter=_setBackgroundBackdropView:,getter=_backgroundBackdropView,nonatomic,retain) _UIBackdropView * backgroundBackdropView;                             //@synthesize backgroundBackdropView=_backgroundBackdropView - In the implementation block
@property (setter=_setBlurredBackgroundView:,getter=_blurredBackgroundView,nonatomic,retain) UIView * blurredBackgroundView;                                         //@synthesize blurredBackgroundView=_blurredBackgroundView - In the implementation block
@property (setter=_setSelectionSquareView:,getter=_selectionSquareView,nonatomic,retain) UIImageView * selectionSquareView;                                          //@synthesize selectionSquareView=_selectionSquareView - In the implementation block
@property (setter=_setSelectedIconView:,getter=_selectedIconView,nonatomic,retain) SBIconView * selectedIconView;                                                    //@synthesize selectedIconView=_selectedIconView - In the implementation block
@property (setter=_setSelectionXLayoutConstraint:,getter=_selectionXLayoutConstraint,nonatomic,retain) NSLayoutConstraint * selectionXLayoutConstraint;              //@synthesize selectionXLayoutConstraint=_selectionXLayoutConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<SBCommandTabViewControllerDelegate> delegate;                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleCommandTab:(id)arg1 ;
-(void)_handleShiftCommandTab:(id)arg1 ;
-(id)selectedApplicationDisplayItem;
-(void)showCommandTabBar;
-(void)_setBlurredBackgroundView:(id)arg1 ;
-(id)_blurredBackgroundView;
-(void)_setBlurSettings:(id)arg1 ;
-(id)_blurSettings;
-(void)_setBackgroundBackdropView:(id)arg1 ;
-(id)_backgroundBackdropView;
-(void)_setSelectionSquareView:(id)arg1 ;
-(id)_selectionSquareView;
-(void)_layoutAppIcons;
-(void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1 ;
-(id)_selectedIconView;
-(void)_setSelectedIconView:(id)arg1 ;
-(id)_selectionXLayoutConstraint;
-(void)_setSelectionXLayoutConstraint:(id)arg1 ;
-(id)init;
-(void)next;
-(void)previous;
-(void)setDelegate:(id<SBCommandTabViewControllerDelegate>)arg1 ;
-(id<SBCommandTabViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
@end

