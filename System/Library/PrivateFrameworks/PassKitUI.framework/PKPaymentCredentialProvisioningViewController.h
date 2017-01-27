/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerCanHideSetupLaterButton.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerRequiresPreflightProtocol.h>

@class UIImage, PKPaymentCredentialMetadataTableController, PKPaymentCredential, PKPaymentSetupProduct, NSString;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentSetupViewControllerCanHideSetupLaterButton, PKPaymentSetupViewControllerRequiresPreflightProtocol> {

	UIImage* _passSnapshot;
	unsigned long long _credentialProvisioningType;
	PKPaymentCredentialMetadataTableController* _metadataController;
	PKPaymentCredential* _paymentCredential;
	PKPaymentSetupProduct* _setupProduct;
	BOOL _allowsManualEntry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)isComplete;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(id)_createPassSnapshotFromPaymentPass:(id)arg1 ;
-(void)_updateTableHeader;
-(BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
-(id)newPaymentRequirementsRequest;
-(id)newPaymentEligibilityRequest;
-(id)newPaymentProvisioningRequest;
-(void)_downloadPassAssetsWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_performTermsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performProvisionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performFinishWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
-(id)_defaultHeaderViewSubTitleForLocalCredential;
-(id)_remoteIDMSCredentialDefaultHeaderViewSubTitle;
-(id)readonlyFieldIdentifiers;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(BOOL)arg6 ;
-(void)addDifferentCard:(id)arg1 ;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
@end

