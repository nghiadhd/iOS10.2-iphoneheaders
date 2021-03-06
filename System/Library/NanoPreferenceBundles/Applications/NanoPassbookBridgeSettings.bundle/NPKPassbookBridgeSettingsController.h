/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>
#import <NanoPassbookBridgeSettings/PKPassbookSettingsDelegate.h>

@class NPKStockholmProvisioningController, NPKPassbookPaymentSetupDelegate, PKPassbookSettingsController, NPKCompanionAgentConnection, NSString;

@interface NPKPassbookBridgeSettingsController : BPSNotificationAppController <PKPassbookSettingsDelegate> {

	NPKStockholmProvisioningController* _provisioningController;
	NPKPassbookPaymentSetupDelegate* _paymentSetupDelegate;
	PKPassbookSettingsController* _settingsController;
	NPKCompanionAgentConnection* _companionAgentConnection;
	unsigned long long _backgroundPreflightingTaskIdentifier;

}

@property (nonatomic,retain) NPKStockholmProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) NPKPassbookPaymentSetupDelegate * paymentSetupDelegate;                   //@synthesize paymentSetupDelegate=_paymentSetupDelegate - In the implementation block
@property (nonatomic,retain) PKPassbookSettingsController * settingsController;                        //@synthesize settingsController=_settingsController - In the implementation block
@property (nonatomic,retain) NPKCompanionAgentConnection * companionAgentConnection;                   //@synthesize companionAgentConnection=_companionAgentConnection - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundPreflightingTaskIdentifier;                  //@synthesize backgroundPreflightingTaskIdentifier=_backgroundPreflightingTaskIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NPKPassbookPaymentSetupDelegate *)paymentSetupDelegate;
-(void)setPaymentSetupDelegate:(NPKPassbookPaymentSetupDelegate *)arg1 ;
-(void)_handlePreferencesChanged:(id)arg1 ;
-(void)setBackgroundPreflightingTaskIdentifier:(unsigned long long)arg1 ;
-(void)_handleDatabaseChanged:(id)arg1 ;
-(unsigned long long)backgroundPreflightingTaskIdentifier;
-(BOOL)_shouldPresentOrPushViewController;
-(BOOL)_handleProvisioningPreflightFinishedWithSuccess:(BOOL)arg1 displayableError:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)localizedMirroringDetailFooter;
-(id)localizedPaneTitle;
-(PKPassbookSettingsController *)settingsController;
-(void)setSettingsController:(PKPassbookSettingsController *)arg1 ;
-(id)applicationBundleIdentifier;
-(NPKCompanionAgentConnection *)companionAgentConnection;
-(void)setCompanionAgentConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)_handleDefaultCardChanged:(id)arg1 ;
-(void)setProvisioningController:(NPKStockholmProvisioningController *)arg1 ;
-(NPKStockholmProvisioningController *)provisioningController;
-(void)settingsControllerRequestsReloadSpecifiers:(id)arg1 ;
-(void)settingsController:(id)arg1 requestsReloadSpecifier:(id)arg2 ;
-(void)settingsController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)settingsController:(id)arg1 requestsAddCardPreflightWithCompletion:(/*^block*/id)arg2 ;
-(void)settingsController:(id)arg1 requestsDetailViewControllerForPass:(id)arg2 animated:(BOOL)arg3 ;
-(void)settingsController:(id)arg1 requestsPushViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)settingsController:(id)arg1 requestsAddLocalCardPreflightWithCompletion:(/*^block*/id)arg2 ;
-(id)specifiers;
@end

