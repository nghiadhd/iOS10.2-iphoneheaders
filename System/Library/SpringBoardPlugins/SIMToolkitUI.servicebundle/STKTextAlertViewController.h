/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseAlertViewController.h>
#import <UIKit/UINavigationBarDelegate.h>

@class UITextView, NSString;

@interface STKTextAlertViewController : STKBaseAlertViewController <UINavigationBarDelegate> {

	UITextView* _textView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)dismiss;
-(void)accept:(id)arg1 ;
-(id)newTopBar;
-(id)newBottomBar;
-(void)dismiss:(id)arg1 ;
-(id)alertText;
-(void)_adjustTextFrame;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
@end

