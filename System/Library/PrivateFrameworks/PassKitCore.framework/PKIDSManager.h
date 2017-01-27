/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, PKIDSManagerDataSource;
@class IDSService, NSObject, NSMutableArray, NSMutableDictionary, PKProximityAdvertiser, NSHashTable, NSArray, NSString;

@interface PKIDSManager : NSObject <IDSServiceDelegate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> _idsQueue;
	NSMutableArray* _remoteDevices;
	NSMutableArray* _paymentRequests;
	NSMutableArray* _pendingCancellations;
	NSMutableDictionary* _completionHandlers;
	NSMutableDictionary* _thumbnailCompletionHandlers;
	PKProximityAdvertiser* _proximityAdvertiser;
	NSMutableDictionary* _recentlySeenUUIDs;
	NSHashTable* _delegates;
	NSObject*<OS_dispatch_queue> _stateQueue;
	id<PKIDSManagerDataSource> _dataSource;

}

@property (nonatomic,__weak,readonly) NSArray * remoteDevices; 
@property (nonatomic,__weak,readonly) NSArray * paymentRequests; 
@property (nonatomic,__weak,readonly) NSArray*<PKIDSManagerDelegate> delegates; 
@property (assign,nonatomic) id<PKIDSManagerDataSource> dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDataSource:(id<PKIDSManagerDataSource>)arg1 ;
-(void)dealloc;
-(id<PKIDSManagerDataSource>)dataSource;
-(NSArray *)remoteDevices;
-(id)sendRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)hasRemoteDevices;
-(id)_remoteDevicesWithArchive;
-(void)_registerListeners;
-(void)_populateDevicesIfNeeded;
-(void)_paymentDiscoveryRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentDiscoveryResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentStatusReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentCancellationReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentHostUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentClientUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentSetupRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_thumbnailRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_thumbnailResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)discoverRemoteDevicesWithProximity:(BOOL)arg1 ;
-(BOOL)_hasRegisteredAccounts;
-(void)_sendDeviceDiscoveryRequestWithProximity:(BOOL)arg1 devices:(id)arg2 ;
-(void)_logCloudPairingState;
-(void)_archiveDevicesToDisk;
-(BOOL)_deviceIsApplePayCapable:(id)arg1 ;
-(BOOL)_deviceIsRegistered:(id)arg1 ;
-(id)_preparePaymentDeviceResponse;
-(void)_sendDiscoveryResponse:(id)arg1 toDevice:(id)arg2 ;
-(id)requestForIdentifier:(id)arg1 ;
-(id)_fetchPaymentInstruments;
-(BOOL)_isClientDevice;
-(void)discoverRemoteDevices;
-(id)sendSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)paymentRequests;
-(void)invalidateMessage:(id)arg1 ;
-(void)deleteArchivedDevices;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray*<PKIDSManagerDelegate>)delegates;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(id)cancelRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithTargetQueue:(id)arg1 ;
@end

