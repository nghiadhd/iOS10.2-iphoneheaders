/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSString, CUTWeakReference, NSObject, NSInputStream, NSOutputStream, NSData, NSArray, NSUUID, NSDate;

@interface _IDSDevice : NSObject <IDSDaemonListenerProtocol> {

	NSDictionary* _info;
	NSString* _serviceToken;
	CUTWeakReference* _account;
	int _socket;
	int _nearbyToken;
	BOOL _nearby;
	BOOL _connected;
	BOOL _immutableCloudConnected;
	BOOL _cloudConnected;
	/*^block*/id _openSocketCompletionHandler;
	NSObject*<OS_dispatch_queue> _openSocketCompletionHandlerQueue;
	NSString* _openSocketCompletionHandlerID;
	NSInputStream* _inputStreamForSocket;
	NSOutputStream* _outputStreamForSocket;

}

@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * service; 
@property (getter=isNearby,nonatomic,readonly) BOOL nearby; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isCloudConnected,nonatomic,readonly) BOOL cloudConnected; 
@property (nonatomic,readonly) BOOL locallyPresent; 
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isLocallyPaired; 
@property (nonatomic,readonly) unsigned long long pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long serviceMinCompatibilityVersion; 
@property (nonatomic,readonly) BOOL supportsiCloudPairing; 
@property (nonatomic,readonly) BOOL supportsTethering; 
@property (nonatomic,readonly) BOOL supportsHandoff; 
@property (nonatomic,readonly) BOOL supportsApplePay; 
@property (nonatomic,retain,readonly) NSData * pushToken; 
@property (nonatomic,retain,readonly) NSArray * identities; 
@property (setter=setNSUUID:,nonatomic,retain) NSUUID * nsuuid; 
@property (nonatomic,readonly) BOOL supportsSMSRelay; 
@property (nonatomic,readonly) BOOL supportsMMSRelay; 
@property (nonatomic,readonly) BOOL supportsPhoneCalls; 
@property (nonatomic,retain,readonly) NSString * deviceColor; 
@property (nonatomic,retain,readonly) NSString * enclosureColor; 
@property (nonatomic,retain,readonly) NSArray * linkedUserURIs; 
@property (nonatomic,readonly) BOOL isHSATrusted; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,retain,readonly) NSDate * lastActivityDate; 
@property (nonatomic,retain,readonly) NSString * uniqueIDOverride; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastActivityDate;
-(void)dealloc;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)name;
-(NSString *)productName;
-(id)fullDescription;
-(BOOL)isConnected;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)supportsiCloudPairing;
-(void)_addIdentity:(id)arg1 ;
-(void)_nearbyStateChanged;
-(void)_connectedStateChanged;
-(void)_cloudConnectedStateChanged;
-(NSArray *)linkedUserURIs;
-(BOOL)supportsSMSRelay;
-(BOOL)supportsMMSRelay;
-(BOOL)supportsPhoneCalls;
-(BOOL)locallyPresent;
-(BOOL)isCloudConnected;
-(BOOL)isHSATrusted;
-(BOOL)supportsTethering;
-(void)closeSocket:(int)arg1 ;
-(unsigned long long)serviceMinCompatibilityVersion;
-(void)setNSUUID:(id)arg1 ;
-(int)socketForDomain:(id)arg1 ;
-(void)openSocketWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)closeStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)closeSocketForDomain:(id)arg1 ;
-(NSString *)deviceColor;
-(NSString *)uniqueID;
-(NSString *)modelIdentifier;
-(void)_setAccount:(id)arg1 ;
-(BOOL)supportsApplePay;
-(BOOL)supportsHandoff;
-(NSArray *)identities;
-(NSString *)enclosureColor;
-(void)_connect;
-(NSString *)uniqueIDOverride;
-(BOOL)isLocallyPaired;
-(BOOL)isDefaultPairedDevice;
-(NSUUID *)nsuuid;
-(NSString *)service;
-(NSString *)productBuildVersion;
-(NSData *)pushToken;
-(NSString *)productVersion;
-(unsigned long long)pairingProtocolVersion;
-(unsigned long long)minCompatibilityVersion;
-(unsigned long long)maxCompatibilityVersion;
-(BOOL)isNearby;
@end

