/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPKCompanionClientProtocol.h>

@protocol OS_dispatch_queue, NPKCompanionAgentConnectionDelegate;
@class NSXPCConnection, NSObject, NSMutableSet, NSMutableDictionary, PKPaymentWebServiceContext, NSString;

@interface NPKCompanionAgentConnection : NSObject <NPKCompanionClientProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	BOOL _queueAppropriateFailedActions;
	id<NPKCompanionAgentConnectionDelegate> _delegate;
	NSMutableSet* _cachedUniqueIDs;
	NSMutableDictionary* _cachedPasses;
	NSMutableDictionary* _connectionAvailableActions;
	PKPaymentWebServiceContext* _connectionUnavailableWebServiceContext;

}

@property (readonly) NSXPCConnection * xpcConnection; 
@property (retain) NSMutableSet * cachedUniqueIDs;                                                             //@synthesize cachedUniqueIDs=_cachedUniqueIDs - In the implementation block
@property (retain) NSMutableDictionary * cachedPasses;                                                         //@synthesize cachedPasses=_cachedPasses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionAvailableActions;                                 //@synthesize connectionAvailableActions=_connectionAvailableActions - In the implementation block
@property (nonatomic,retain) PKPaymentWebServiceContext * connectionUnavailableWebServiceContext;              //@synthesize connectionUnavailableWebServiceContext=_connectionUnavailableWebServiceContext - In the implementation block
@property (assign,nonatomic) BOOL queueAppropriateFailedActions;                                               //@synthesize queueAppropriateFailedActions=_queueAppropriateFailedActions - In the implementation block
@property (assign,nonatomic,__weak) id<NPKCompanionAgentConnectionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSetupAssistantProvisioningSupported;
+(BOOL)isIssuerAppProvisioningSupported;
+(id)watchProvisioningURL;
+(id)watchProvisioningURLForPaymentPass:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<NPKCompanionAgentConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<NPKCompanionAgentConnectionDelegate>)delegate;
-(NSXPCConnection *)xpcConnection;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_errorHandlerWithCompletion:(/*^block*/id)arg1 ;
-(id)sharedPaymentWebServiceContext;
-(void)_clearCaches;
-(void)setQueueAppropriateFailedActions:(BOOL)arg1 ;
-(void)paymentPassUniqueIDs:(/*^block*/id)arg1 ;
-(id)sharedPaymentWebServiceContextForDevice:(id)arg1 ;
-(void)setSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2 ;
-(void)paymentPassesWithPrimaryAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)savePaymentPass:(id)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2 requireRemoteConfirmation:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)redownloadAllPaymentPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePotentialExpressPass:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)noteProvisioningPreflightCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentPassWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handlePendingUnpairingWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingiCloudSignoutWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleServerPaymentPassesChanged:(id)arg1 ;
-(void)_handleDefaultCardChanged:(id)arg1 ;
-(int)_isApplePaySupportedInCurrentRegion;
-(id)_cachedUniqueIDs;
-(void)_setCachedUniqueIDs:(id)arg1 ;
-(id)_cachedPassForUniqueID:(id)arg1 ;
-(void)_addPassToCache:(id)arg1 ;
-(void)_applyPropertiesToPass:(id)arg1 ;
-(void)_removePassWithUniqueIDFromCache:(id)arg1 ;
-(void)_savePaymentPass:(id)arg1 atURL:(id)arg2 forDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sharedPaymentWebServiceContextForDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)queueAppropriateFailedActions;
-(NSMutableSet *)cachedUniqueIDs;
-(void)setCachedUniqueIDs:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)cachedPasses;
-(void)setCachedPasses:(NSMutableDictionary *)arg1 ;
-(void)setDefaultCardUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)defaultCardUniqueID:(/*^block*/id)arg1 ;
-(void)consistencyCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)shouldShowApplePaySettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 fromDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)connectionAvailableActions;
-(void)setConnectionAvailableActions:(NSMutableDictionary *)arg1 ;
-(PKPaymentWebServiceContext *)connectionUnavailableWebServiceContext;
-(void)setConnectionUnavailableWebServiceContext:(PKPaymentWebServiceContext *)arg1 ;
-(id)watchPaymentWebService;
-(void)felicaStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)shouldShowWatchOfferForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)noteWatchOfferShownForPaymentPass:(id)arg1 ;
-(void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)initiateLostModeExitAuthWithCompletion:(/*^block*/id)arg1 ;
@end

