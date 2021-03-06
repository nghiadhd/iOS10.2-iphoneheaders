/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_group;
@class PKPassGroupsViewController, PKPaymentService, PKFieldProperties, NSArray, NSString, _UIBackdropView, CLInUseAssertion, NSObject;

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate> {

	PKPassGroupsViewController* _passGroupsViewController;
	PKPaymentService* _paymentService;
	PKFieldProperties* _fieldProperties;
	NSArray* _fieldPassUniqueIdentifiers;
	NSString* _passUniqueIdentifier;
	_UIBackdropView* _backdropView;
	CLInUseAssertion* _passbookForegroundAssertion;
	NSObject*<OS_dispatch_group> _fieldPropertiesLookupGroup;
	long long _presentationSource;
	unsigned long long _presentationStartTime;
	BOOL _backlightActive;
	BOOL _processHomeButtonEvents;
	BOOL _homeButtonDoubleTapAlertHasOccurred;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)_isSecureForRemoteViewService;
+(id)groupsControllerWithSource:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewDidLoad;
-(void)setUserInfo:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1 ;
-(void)_contactlessInterfaceSessionDidAuthorize:(id)arg1 ;
-(void)_contactlessInterfaceSessionFinishTransaction:(id)arg1 ;
-(void)linkedApplicationOpen:(id)arg1 ;
-(void)_dismissIfRestricted;
-(void)_dismissForSource:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentHomeButtonDoubleTapAlertIfNecessary;
-(void)_setupGroupController;
-(BOOL)_notificationIsFromChildViewController:(id)arg1 ;
-(void)handleHomeButtonPressed;
@end

