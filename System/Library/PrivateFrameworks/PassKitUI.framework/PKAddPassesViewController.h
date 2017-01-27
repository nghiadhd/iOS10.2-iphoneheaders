/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSArray, _UIAsyncInvocation, PKRemoteAddPassesViewController, PKAssertion;

@interface PKAddPassesViewController : UIViewController {

	BOOL _viewHasAppeared;
	BOOL _succeeded;
	unsigned long long _presentationSource;
	NSArray* _passDataArray;
	_UIAsyncInvocation* _viewServiceCancelRequest;
	PKRemoteAddPassesViewController* _remoteViewController;
	PKAssertion* _contactlessInterfaceAssertion;
	id<PKAddPassesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKAddPassesViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPasses;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(long long)modalPresentationStyle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(long long)modalTransitionStyle;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)_requestRemoteViewController;
-(id)initWithPass:(id)arg1 ;
-(BOOL)succeeded;
-(id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2 ;
-(id)initWithPasses:(id)arg1 ;
-(void)_applyRemoteViewController:(id)arg1 ;
-(void)_ingestionDidFinishWithResult:(unsigned long long)arg1 ;
@end

