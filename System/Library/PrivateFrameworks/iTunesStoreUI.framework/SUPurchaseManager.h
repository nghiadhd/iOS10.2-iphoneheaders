/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/SSPurchaseRequestDelegatePrivate.h>
#import <libobjc.A.dylib/SUContinuationDelegate.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSPurchaseRequestDelegate.h>

@protocol SUPurchaseManagerDelegate;
@class NSMutableSet, NSMutableArray, SUQueueSessionManager, NSString, NSSet;

@interface SUPurchaseManager : NSObject <SSPurchaseRequestDelegatePrivate, SUContinuationDelegate, SSDownloadManagerObserver, SSPurchaseRequestDelegate> {

	id<SUPurchaseManagerDelegate> _delegate;
	NSMutableSet* _futurePurchases;
	NSMutableSet* _inflightContinuations;
	NSMutableArray* _observedDownloadManagers;
	NSMutableArray* _pendingContinuations;
	NSMutableArray* _pendingPurchases;
	NSMutableSet* _purchasedIdentifiers;
	NSMutableArray* _purchaseRequests;
	SUQueueSessionManager* _queueSessionManager;
	BOOL _showingErrorDialogs;
	long long _updatesCount;
	NSString* _userAgent;
	BOOL _waitingForAuthentication;

}

@property (assign,nonatomic) id<SUPurchaseManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SUQueueSessionManager * queueSessionManager;              //@synthesize queueSessionManager=_queueSessionManager - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                                       //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) long long numberOfPendingPurchases; 
@property (nonatomic,readonly) NSSet * futurePurchases;                                //@synthesize futurePurchases=_futurePurchases - In the implementation block
@property (nonatomic,readonly) NSSet * purchasedItemIdentifiers;                       //@synthesize purchasedIdentifiers=_purchasedIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<SUPurchaseManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<SUPurchaseManagerDelegate>)delegate;
-(void)beginUpdates;
-(void)endUpdates;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)_dialogDidFinish:(id)arg1 ;
-(void)addPurchasedItemIdentifier:(unsigned long long)arg1 ;
-(void)_showDialogsForErrors:(id)arg1 ;
-(void)_enqueueContinuations:(id)arg1 ;
-(void)_enqueuePurchases:(id)arg1 ;
-(void)_performNextAction;
-(void)removePurchasedItemIdentifier:(unsigned long long)arg1 ;
-(void)_removePlaceholdersForPurchase:(id)arg1 ;
-(void)_removePurchaseRequest:(id)arg1 ;
-(id)_downloadManagerForDownloadKind:(id)arg1 ;
-(id)_accountForPurchase:(id)arg1 ;
-(void)addPurchasedItemIdentifiers:(id)arg1 ;
-(void)_startContinuations:(id)arg1 ;
-(void)_startPurchases:(id)arg1 ;
-(void)_enqueueExternalDownload:(id)arg1 ;
-(BOOL)_issuePurchaseRequestForPurchases:(id)arg1 ;
-(void)purchaseRequest:(id)arg1 purchaseDidSucceedWithResponse:(id)arg2 ;
-(void)purchaseRequest:(id)arg1 purchaseDidFail:(id)arg2 withError:(id)arg3 ;
-(void)purchaseRequest:(id)arg1 purchaseDidSucceed:(id)arg2 ;
-(void)continuation:(id)arg1 failedWithError:(id)arg2 ;
-(void)continuationFinished:(id)arg1 ;
-(void)addFuturePurchase:(id)arg1 ;
-(BOOL)addPurchaseBatch:(id)arg1 ;
-(void)cancelFuturePurchase:(id)arg1 ;
-(BOOL)itemIdentifierIsPurchased:(unsigned long long)arg1 ;
-(BOOL)itemIdentifierIsPurchasing:(unsigned long long)arg1 ;
-(id)newPurchaseBatchForItems:(id)arg1 offers:(id)arg2 ;
-(long long)numberOfPendingPurchases;
-(BOOL)_needsAuthenticationForPurchases:(id)arg1 ;
-(NSSet *)futurePurchases;
-(NSSet *)purchasedItemIdentifiers;
-(SUQueueSessionManager *)queueSessionManager;
-(void)setQueueSessionManager:(SUQueueSessionManager *)arg1 ;
-(void)addExternalDownloads:(id)arg1 withOptions:(id)arg2 inContext:(OpaqueJSContextRef)arg3 ;
-(id)_newDictionaryForWebScriptValue:(id)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(id)_newExternalDownloadWithDictionary:(id)arg1 ;
-(void)_addBatchForPurchases:(id)arg1 options:(id)arg2 ;
-(id)copyPurchaseForScriptObject:(id)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(id)_newPurchaseBatchForPurchases:(id)arg1 ;
-(void)purchaseScriptObject:(id)arg1 withOptions:(id)arg2 inContext:(OpaqueJSContextRef)arg3 ;
-(void)_schedulePurchaseCallback:(id)arg1 forPurchases:(id)arg2 ;
-(id)_newExternalDownloadWithItemDictionary:(id)arg1 ;
-(id)_newExternalDownloadWithDownloadDictionary:(id)arg1 ;
-(void)addExternalDownloads:(id)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(id)copyPurchaseForScriptObject:(id)arg1 ;
-(void)enqueueScriptPurchases:(id)arg1 ;
-(void)purchaseScriptObject:(id)arg1 ;
@end

