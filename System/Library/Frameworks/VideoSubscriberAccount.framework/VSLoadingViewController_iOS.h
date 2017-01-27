/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/VSLoadingViewController.h>

@protocol VSLoadingViewControllerDelegate;
@class UIActivityIndicatorView, NSString;

@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController> {

	BOOL _cancellationAllowed;
	id<VSLoadingViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                         //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VSLoadingViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;              //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
-(void)setDelegate:(id<VSLoadingViewControllerDelegate>)arg1 ;
-(id<VSLoadingViewControllerDelegate>)delegate;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(BOOL)isCancellationAllowed;
-(void)_cancelButtonPressed:(id)arg1 ;
@end

