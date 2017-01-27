/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol SKTermsPageViewControllerDelegate;
@class UINavigationBar, NSString, UIToolbar, UIWebView;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate> {

	UINavigationBar* _navbar;
	NSString* _terms;
	UIToolbar* _toolbar;
	UIWebView* _webview;
	id<SKTermsPageViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SKTermsPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<SKTermsPageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKTermsPageViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(void)_dismissViewController;
-(void)viewDidLoad;
-(unsigned long long)edgesForExtendedLayout;
-(id)initWithTerms:(id)arg1 ;
-(id)_markupTermsWithHTML:(id)arg1 ;
-(void)_loadSubviews;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 withAcceptance:(BOOL)arg2 ;
-(void)_buttonAccept:(id)arg1 ;
-(void)_buttonDecline:(id)arg1 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
@end

