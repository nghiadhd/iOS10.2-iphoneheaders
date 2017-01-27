/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>
#import <libobjc.A.dylib/PKPassLibraryDataProvider.h>

@class NPKCompanionAgentConnection, NSMutableDictionary, NSMutableSet, PKPaymentWebService, NPKPaymentWebServiceCompanionTargetDevice, NSString;

@interface NPKPassbookPaymentSetupDelegate : NSObject <PKPaymentSetupDelegate, PKPassDeleteHandler, PKPassLibraryDataProvider> {

	BOOL _lastProvidedCanAddPaymentPass;
	NPKCompanionAgentConnection* _companionAgentConnection;
	NSMutableDictionary* _deleteStatusHandlers;
	NSMutableSet* _deletionInProgressPasses;

}

@property (nonatomic,retain) NPKCompanionAgentConnection * companionAgentConnection;                  //@synthesize companionAgentConnection=_companionAgentConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deleteStatusHandlers;                              //@synthesize deleteStatusHandlers=_deleteStatusHandlers - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletionInProgressPasses;                                 //@synthesize deletionInProgressPasses=_deletionInProgressPasses - In the implementation block
@property (assign,nonatomic) BOOL lastProvidedCanAddPaymentPass;                                      //@synthesize lastProvidedCanAddPaymentPass=_lastProvidedCanAddPaymentPass - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * webService; 
@property (nonatomic,readonly) NPKPaymentWebServiceCompanionTargetDevice * targetDevice; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
+(id)sharedSetupDelegate;
-(id)defaultCardIdentifier;
-(void)setDeletionInProgressPasses:(NSMutableSet *)arg1 ;
-(BOOL)lastProvidedCanAddPaymentPass;
-(BOOL)hasPaymentPassWithUniqueID:(id)arg1 ;
-(BOOL)_canAddPaymentPass;
-(NSMutableSet *)deletionInProgressPasses;
-(void)setDeleteStatusHandlers:(NSMutableDictionary *)arg1 ;
-(unsigned long long)_numberOfPaymentPasses;
-(id)_defaultPaymentPassIdentifier;
-(NSMutableDictionary *)deleteStatusHandlers;
-(BOOL)isSettingsControllerReloadNecessary;
-(id)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 ;
-(void)_setDeletionInProgress:(BOOL)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)setLastProvidedCanAddPaymentPass:(BOOL)arg1 ;
-(id)init;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(NPKCompanionAgentConnection *)companionAgentConnection;
-(void)setCompanionAgentConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)loadWebService;
-(void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKPaymentWebService *)webService;
-(NPKPaymentWebServiceCompanionTargetDevice *)targetDevice;
-(id)passWithUniqueID:(id)arg1 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(BOOL)canAddPaymentPass;
-(id)paymentPasses;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(void)setDeletionStatusHandler:(/*^block*/id)arg1 forPass:(id)arg2 ;
-(BOOL)isDeletionInProgressForPass:(id)arg1 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)paymentSetupDidShowError:(id)arg1 ;
-(void)paymentSetupDidShowEligibilityIssue;
-(void)removePass:(id)arg1 ;
@end

