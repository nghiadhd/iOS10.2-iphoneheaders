/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPaymentPassTableCellDelegate.h>

@protocol PKPassbookSettingsDataSource, PKPassLibraryDataProvider, PKPaymentDataProvider, PKPaymentOptionsProtocol, PKPassbookSettingsDelegate;
@class PKPaymentSetupAboutViewController, PKPaymentPreferencesViewController, PKPaymentPreference, NSString, NSArray, PSSpecifier, LAContext;

@interface PKPassbookSettingsController : NSObject <PKPaymentServiceDelegate, PKPaymentDataProviderDelegate, PKPaymentPassTableCellDelegate> {

	id<PKPassbookSettingsDataSource> _dataSource;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	id<PKPaymentDataProvider> _paymentDataProvider;
	id<PKPaymentOptionsProtocol> _optionsDelegate;
	long long _context;
	PKPaymentSetupAboutViewController* _privacyController;
	PKPaymentPreferencesViewController* _defaultCardsController;
	PKPaymentPreference* _availableCards;
	PKPaymentPreference* _unavailableCards;
	NSString* _defaultCardIdentifier;
	NSString* _provisioningPassIdentifier;
	NSArray* _passes;
	NSArray* _passSpecifiers;
	NSArray* _companionPasses;
	NSArray* _companionPassSpecifiers;
	NSArray* _lockscreenSwitchSpecifiers;
	NSArray* _handoffSwitchSpecifiers;
	PSSpecifier* _addCardButtonSpecifier;
	PSSpecifier* _cardsGroupSpecifier;
	PSSpecifier* _companionCardsGroupSpecifier;
	PSSpecifier* _defaultPaymentSpecifier;
	PSSpecifier* _defaultShippingAddressSpecifier;
	PSSpecifier* _defaultContactEmailSpecifier;
	PSSpecifier* _defaultContactPhoneSpecifier;
	LAContext* _LAContext;
	NSArray* _expressFelicaTransitPasses;
	NSString* _defaultExpressFelicaTransitPassIdentifier;
	PSSpecifier* _defaultExpressFelicaTransitSpecifier;
	id<PKPassbookSettingsDelegate> _delegate;

}

@property (assign,nonatomic) id<PKPassbookSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKPassbookSettingsDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPassbookSettingsDelegate>)delegate;
-(void)_reloadPassData;
-(void)_updateCardsGroupSpecifier;
-(void)_updateCompanionGroupSpecifier;
-(void)_updateAddButtonSpecifier;
-(void)_regionConfigurationDidChangeNotification;
-(id)_companionPassSpecifiers;
-(void)_addPaymentCard;
-(id)_passSpecifiers;
-(id)_handoffSwitchGroupSpecifiers;
-(id)_transitDefaultsGroupSpecifiers;
-(id)_defaultsGroupSpecifiers;
-(id)_lockscreenSwitchGroupSpecifiers;
-(id)_restrictedModeSpecifier;
-(id)_bridgeSpecifiers;
-(id)_settingsSpecifiers;
-(void)_updateCompanionPassesAddButton;
-(void)_updateDefaultCardsPreferences;
-(id)_defaultPaymentSpecifier;
-(id)_defaultExpressFelicaTransitSpecifier;
-(void)addButtonPressedForPaymentPass:(id)arg1 ;
-(void)_showCardDetails:(id)arg1 ;
-(void)_setHandoffSwitchSetting:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_handoffSwitchSettingForSpecifier:(id)arg1 ;
-(void)_setLockscreenSwitchSetting:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_lockscreenSwitchSettingForSpecifier:(id)arg1 ;
-(id)_defaultShippingAddressSpecifier;
-(id)_defaultContactEmailSpecifier;
-(id)_defaultContactPhoneSpecifier;
-(void)_handleDefaultPaymentPassChangedTo:(id)arg1 withSender:(id)arg2 optionsController:(id)arg3 canPrompt:(BOOL)arg4 ;
-(int)_paymentPreferencesStyle;
-(id)_getDefaultPaymentCard;
-(void)_showDefaultPaymentOptions:(id)arg1 ;
-(id)_getDefaultShippingAddress;
-(void)_showDefaultShippingAddressOptions:(id)arg1 ;
-(id)_getDefaultContactEmail;
-(void)_showDefaultContactEmailOptions:(id)arg1 ;
-(id)_getDefaultContactPhone;
-(void)_showDefaultContactPhoneOptions:(id)arg1 ;
-(id)_displayableStringForLabeledValue:(id)arg1 ;
-(id)_specifierForPassUniqueID:(id)arg1 ;
-(id)_defaultExpressFelicaTransitPassDescription;
-(void)_showExpressFelicaTransitOptions:(id)arg1 ;
-(void)_handleDefaultExpressFelicaTransitPassChangedTo:(id)arg1 withContainer:(id)arg2 preference:(id)arg3 ;
-(void)_finishDefaultExpressFelicaTransitUpdateWithContainer:(id)arg1 preference:(id)arg2 ;
-(void)_performPhoneToWatchProvisioningForPaymentPass:(id)arg1 ;
-(void)_requestDelegatePresentViewController:(id)arg1 ;
-(void)_handleProvisioningError:(id)arg1 viewController:(id)arg2 ;
-(void)_setCardAddProvisioningButtonEnabled:(BOOL)arg1 forPaymentPass:(id)arg2 ;
-(void)_presentProvisioningPaymentPassNavController:(id)arg1 paymentPass:(id)arg2 ;
-(void)_presentCannotTransferAlert;
-(void)_canTransferForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(long long)arg3 ;
-(id)specifiers;
-(void)refreshPasses;
-(void)refreshDefaultCard;
-(void)refreshExpressFelicaTransitCard;
-(void)removeFooterForSpecifier:(id)arg1 ;
-(void)addCardTapped;
-(void)addCardTappedForPaymentPassWithUniqueID:(id)arg1 ;
-(id)_currentDefaultPaymentPass;
-(void)_openPrivacyLink;
-(long long)_paymentSetupContextForSettingsContext:(long long)arg1 ;
@end

