/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HAPRelayAccessoryDelegate.h>
#import <libobjc.A.dylib/HMDTimeInformationMonitorDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPAccessoryServerForBridgeDelegate.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, HMDAccessoryVersion, HMDCharacteristic, HMDApplicationData, NSSet, HMDRoom, NSNumber, HMDHome, NSUUID, NSObject, HMFTimer, HMFMessageDispatcher, HMAccessoryCategory, NSMutableSet, NSData, HMDApplicationRegistry, HMDBridgeInformation, HMDVendorModelEntry, NSArray;

@interface HMDAccessory : NSObject <HMDBulletinIdentifiers, NSSecureCoding, HMFMessageReceiver, HAPRelayAccessoryDelegate, HMDTimeInformationMonitorDelegate, HMFTimerDelegate, HAPAccessoryServerForBridgeDelegate, HMFDumpState> {

	NSMutableArray* _transportInformationInstances;
	BOOL _reachable;
	BOOL _remotelyReachable;
	BOOL _relayEnabled;
	BOOL _timeInformationServiceExists;
	BOOL _discoveredBridgeableAccessory;
	BOOL _supportsBridgeConfiguration;
	BOOL _primary;
	BOOL _blocked;
	BOOL _supportsRelay;
	BOOL _paired;
	BOOL _remoteAccessEnabled;
	BOOL _unblockPending;
	BOOL _systemTimeNeedsUpdate;
	NSString* _model;
	NSString* _manufacturer;
	HMDAccessoryVersion* _firmwareVersion;
	NSString* _serialNumber;
	NSString* _relayIdentifier;
	unsigned long long _currentRelayAccessoryState;
	HMDCharacteristic* _currentTimeCharacteristic;
	HMDCharacteristic* _timeUpdateCharacteristic;
	HMDCharacteristic* _dayOfTheWeekCharacteristic;
	HMDApplicationData* _appData;
	NSSet* _accessoryProfiles;
	HMDRoom* _room;
	NSNumber* _accessoryFlags;
	unsigned long long _configNumber;
	HMDHome* _home;
	NSString* _name;
	NSUUID* _uuid;
	NSString* _uniqueIdentifier;
	NSString* _identifier;
	NSString* _configurationAppIdentifier;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	unsigned long long _activationAttempts;
	unsigned long long _pairingAttempts;
	NSNumber* _backedOffStateNumber;
	HMFTimer* _accessoryDiscoveryBackoffTimer;
	NSString* _providedName;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _discoveredServices;
	HMFMessageDispatcher* _msgDispatcher;
	HMAccessoryCategory* _category;
	HMDAccessory* _bridge;
	NSMutableSet* _identifiersForBridgedAccessories;
	NSData* _publicKey;
	NSString* _pairingUsername;
	HMDApplicationRegistry* _appRegistry;
	HMFTimer* _timeInformationTimer;
	NSMutableSet* _identifiersOfBridgesDuringDiscovery;
	NSMutableSet* _discoveredBridgeableAccessories;
	HMDBridgeInformation* _hmdBridgeInformation;
	HMFTimer* _systemTimeInformationTimer;
	NSSet* _cameraProfiles;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                                          //@synthesize primary=_primary - In the implementation block
@property (assign,nonatomic) BOOL supportsRelay;                                                                     //@synthesize supportsRelay=_supportsRelay - In the implementation block
@property (assign,getter=isPaired,nonatomic) BOOL paired;                                                            //@synthesize paired=_paired - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                                                          //@synthesize blocked=_blocked - In the implementation block
@property (assign,getter=isDiscoveredBridgeableAccessory,nonatomic) BOOL discoveredBridgeableAccessory;              //@synthesize discoveredBridgeableAccessory=_discoveredBridgeableAccessory - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                                             //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,getter=isRemoteAccessEnabled,nonatomic) BOOL remoteAccessEnabled;                                  //@synthesize remoteAccessEnabled=_remoteAccessEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long activationAttempts;                                                  //@synthesize activationAttempts=_activationAttempts - In the implementation block
@property (assign,nonatomic) unsigned long long pairingAttempts;                                                     //@synthesize pairingAttempts=_pairingAttempts - In the implementation block
@property (nonatomic,copy) NSNumber * accessoryFlags;                                                                //@synthesize accessoryFlags=_accessoryFlags - In the implementation block
@property (nonatomic,copy) NSNumber * backedOffStateNumber;                                                          //@synthesize backedOffStateNumber=_backedOffStateNumber - In the implementation block
@property (nonatomic,retain) HMFTimer * accessoryDiscoveryBackoffTimer;                                              //@synthesize accessoryDiscoveryBackoffTimer=_accessoryDiscoveryBackoffTimer - In the implementation block
@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSString * providedName;                                                                //@synthesize providedName=_providedName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * discoveredServices;                                                    //@synthesize discoveredServices=_discoveredServices - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                                   //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                                         //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) HMDRoom * room;                                                                         //@synthesize room=_room - In the implementation block
@property (assign,nonatomic,__weak) HMDAccessory * bridge;                                                           //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersForBridgedAccessories;                                        //@synthesize identifiersForBridgedAccessories=_identifiersForBridgedAccessories - In the implementation block
@property (assign,nonatomic) BOOL unblockPending;                                                                    //@synthesize unblockPending=_unblockPending - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                                                        //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                                                                     //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,retain) NSString * pairingUsername;                                                             //@synthesize pairingUsername=_pairingUsername - In the implementation block
@property (nonatomic,retain) HMDApplicationRegistry * appRegistry;                                                   //@synthesize appRegistry=_appRegistry - In the implementation block
@property (nonatomic,readonly) BOOL timeInformationServiceExists;                                                    //@synthesize timeInformationServiceExists=_timeInformationServiceExists - In the implementation block
@property (nonatomic,__weak,readonly) HMDCharacteristic * timeUpdateCharacteristic;                                  //@synthesize timeUpdateCharacteristic=_timeUpdateCharacteristic - In the implementation block
@property (nonatomic,__weak,readonly) HMDCharacteristic * currentTimeCharacteristic;                                 //@synthesize currentTimeCharacteristic=_currentTimeCharacteristic - In the implementation block
@property (nonatomic,__weak,readonly) HMDCharacteristic * dayOfTheWeekCharacteristic;                                //@synthesize dayOfTheWeekCharacteristic=_dayOfTheWeekCharacteristic - In the implementation block
@property (nonatomic,retain) HMFTimer * timeInformationTimer;                                                        //@synthesize timeInformationTimer=_timeInformationTimer - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfBridgesDuringDiscovery;                                     //@synthesize identifiersOfBridgesDuringDiscovery=_identifiersOfBridgesDuringDiscovery - In the implementation block
@property (nonatomic,retain) NSMutableSet * discoveredBridgeableAccessories;                                         //@synthesize discoveredBridgeableAccessories=_discoveredBridgeableAccessories - In the implementation block
@property (nonatomic,retain) HMDBridgeInformation * hmdBridgeInformation;                                            //@synthesize hmdBridgeInformation=_hmdBridgeInformation - In the implementation block
@property (nonatomic,retain) HMFTimer * systemTimeInformationTimer;                                                  //@synthesize systemTimeInformationTimer=_systemTimeInformationTimer - In the implementation block
@property (assign,nonatomic) BOOL systemTimeNeedsUpdate;                                                             //@synthesize systemTimeNeedsUpdate=_systemTimeNeedsUpdate - In the implementation block
@property (nonatomic,retain) NSString * relayIdentifier;                                                             //@synthesize relayIdentifier=_relayIdentifier - In the implementation block
@property (nonatomic,retain) NSSet * cameraProfiles;                                                                 //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (assign,getter=isRelayEnabled,nonatomic) BOOL relayEnabled;                                                //@synthesize relayEnabled=_relayEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long currentRelayAccessoryState;                                        //@synthesize currentRelayAccessoryState=_currentRelayAccessoryState - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                                      //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                                  //@synthesize home=_home - In the implementation block
@property (getter=getName,nonatomic,copy) NSString * name;                                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturer;                                                         //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy,readonly) HMDAccessoryVersion * firmwareVersion;                                           //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * serialNumber;                                                         //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy,readonly) HMDVendorModelEntry * vendorInfo; 
@property (assign,getter=isRemotelyReachable,nonatomic) BOOL remotelyReachable;                                      //@synthesize remotelyReachable=_remotelyReachable - In the implementation block
@property (nonatomic,copy,readonly) NSArray * services; 
@property (nonatomic,retain) NSString * configurationAppIdentifier;                                                  //@synthesize configurationAppIdentifier=_configurationAppIdentifier - In the implementation block
@property (getter=isClientRegisteredForNotifications,readonly) BOOL clientRegisteredForNotifications; 
@property (getter=isSecuritySessionOpen,readonly) BOOL securitySessionOpen; 
@property (assign,nonatomic) BOOL supportsBridgeConfiguration;                                                       //@synthesize supportsBridgeConfiguration=_supportsBridgeConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * tunneledHAPAccessories; 
@property (nonatomic,retain) HMDApplicationData * appData;                                                           //@synthesize appData=_appData - In the implementation block
@property (nonatomic,retain) NSSet * accessoryProfiles;                                                              //@synthesize accessoryProfiles=_accessoryProfiles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)getAWDTransportTypeWithLinkType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(HMAccessoryCategory *)category;
-(NSString *)identifier;
-(id)url;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)model;
-(NSString *)contextID;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setBlocked:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)serialNumber;
-(void)setModel:(NSString *)arg1 ;
-(NSArray *)services;
-(NSMutableArray *)discoveredServices;
-(void)setDiscoveredServices:(NSMutableArray *)arg1 ;
-(void)setFirmwareVersion:(HMDAccessoryVersion *)arg1 ;
-(HMDAccessoryVersion *)firmwareVersion;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)dumpState;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)contextSPIUniqueIdentifier;
-(HMDRoom *)room;
-(HMDApplicationRegistry *)appRegistry;
-(void)timerDidFire:(id)arg1 ;
-(id)messageIdentifier;
-(id)_messageIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSSet *)cameraProfiles;
-(void)configureBulletinNotification:(/*^block*/id)arg1 ;
-(void)setCameraProfiles:(NSSet *)arg1 ;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)characteristicsPassingTest:(/*^block*/id)arg1 ;
-(void)enableNotification:(BOOL)arg1 unconditionallyDeregister:(BOOL)arg2 ignoreDeviceUnlockRequirement:(BOOL)arg3 clientIdentifier:(id)arg4 forCharacteristics:(id)arg5 ;
-(NSString *)pairingUsername;
-(HMDApplicationData *)appData;
-(id)serverIdentifier;
-(BOOL)isReachable;
-(BOOL)hasBTLELink;
-(BOOL)matchesHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long*)arg2 ;
-(void)disableNotificationsForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRoom:(HMDRoom *)arg1 ;
-(void)registerForMessagesWithNewUUID:(id)arg1 ;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
-(void)setPairingUsername:(NSString *)arg1 ;
-(void)savePublicKeyToKeychain;
-(NSString *)relayIdentifier;
-(void)setRelayIdentifier:(NSString *)arg1 ;
-(NSNumber *)accessoryFlags;
-(void)updateAccessoryFlags:(id)arg1 ;
-(void)updateManufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 serialNumber:(id)arg4 ;
-(void)fixupServices:(id)arg1 idsDataSync:(BOOL)arg2 dataVersion:(long long)arg3 ;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(HMDAccessory *)bridge;
-(NSMutableSet *)identifiersForBridgedAccessories;
-(void)setBridge:(HMDAccessory *)arg1 ;
-(void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3 ;
-(void)handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(BOOL)arg2 enableTime:(id)arg3 ;
-(void)enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(BOOL)isNotificationEnabled;
-(void)setRemotelyReachable:(BOOL)arg1 ;
-(HMDVendorModelEntry *)vendorInfo;
-(id)namesOfServicesShowingTilesInHomeApp;
-(void)_handleRename:(id)arg1 ;
-(void)_handleSetAppData:(id)arg1 ;
-(id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(BOOL)isNonClientNotificationEnabled;
-(void)updateRoom:(id)arg1 ;
-(void)setConfigurationAppIdentifier:(NSString *)arg1 ;
-(BOOL)isPaired;
-(id)initWithAccessory:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3 ;
-(BOOL)supportsBridgeConfiguration;
-(void)setSupportsBridgeConfiguration:(BOOL)arg1 ;
-(void)configureWithAccessory:(id)arg1 reAddServices:(BOOL)arg2 homeNotificationsEnabled:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isDiscoveredBridgeableAccessory;
-(void)addDiscoveredBridgeableAccessory:(id)arg1 ;
-(void)addBridgeToDiscoveredAccessory:(id)arg1 ;
-(void)configureWithMsgDispatcher:(id)arg1 ;
-(void)addBridgedAccessory:(id)arg1 ;
-(id)preferredHAPAccessoryForOperation:(long long)arg1 linkType:(long long*)arg2 ;
-(void)writeTimeInformationCharacteristicsForAccessory:(id)arg1 ;
-(void)remoteAccessEnabled:(BOOL)arg1 ;
-(void)setPairingUsername:(id)arg1 publicKey:(id)arg2 ;
-(BOOL)supportsRelay;
-(id)matchingHAPAccessoryWithLinkType:(long long)arg1 ;
-(id)getPrimaryHAPAccessories;
-(void)removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(NSArray *)tunneledHAPAccessories;
-(void)performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(id)getConfiguredName;
-(void)deRegisterForTimeMonitor;
-(void)unconfigure;
-(BOOL)shouldEnableDaemonRelaunch;
-(void)removeBridgedAccessory:(id)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)isBlocked;
-(BOOL)unblockPending;
-(void)setUnblockPending:(BOOL)arg1 ;
-(void)unblockWithMessageIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2 ;
-(void)logDuetRoomEvent;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findCharacteristic:(id)arg1 forService:(id)arg2 ;
-(long long)linkSpeed;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findService:(id)arg1 ;
-(id)findCharacteristic:(id)arg1 ;
-(void)enableNotification:(BOOL)arg1 forCharacteristicIDs:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(void)_remoteAccessEnabled:(BOOL)arg1 ;
-(id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)arg1 ;
-(BOOL)isClientRegisteredForNotifications;
-(void)backOffAccessoryForStateNumber:(id)arg1 ;
-(void)setReachability:(BOOL)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3 ;
-(void)didEncounterError:(id)arg1 ;
-(BOOL)matchesHAPAccessory:(id)arg1 ;
-(id)hmdCharacteristicFromHapCharacteristic:(id)arg1 ;
-(void)updateCategory:(id)arg1 ;
-(void)updateName:(id)arg1 ;
-(id)currentAssociatingAccessory;
-(HMDBridgeInformation *)hmdBridgeInformation;
-(/*^block*/id)accessoryCompletionBlockForAssociatingAccessory:(id)arg1 ;
-(void)removeNewAccessoryCompletionBlockforAssociatingAccessory:(id)arg1 ;
-(void)stopAssociatingAccessoryTimer;
-(void)setAssociatingAccessory:(id)arg1 ;
-(/*^block*/id)accessoryCompletionBlockForDiscoveredAccessory:(id)arg1 ;
-(void)stopDiscoveryAccessoryTimer;
-(void)removeNewAccessoryCompletionBlockforDiscoveringAccessory:(id)arg1 ;
-(NSString *)configurationAppIdentifier;
-(id)currentDisassociatingAccessory;
-(/*^block*/id)accessoryCompletionBlockForDisAssociatingAccessory:(id)arg1 ;
-(void)removeNewAccessoryCompletionBlockForDisAssociatingAccessory:(id)arg1 ;
-(void)setDisassociatingAccessory:(id)arg1 ;
-(void)stopDisassociatingAccessoryTimer;
-(void)removeDiscoveredBridgeableAccessory:(id)arg1 ;
-(void)removeBridgesFromDiscoveredAccessory;
-(void)setDiscoveredBridgeableAccessory:(BOOL)arg1 ;
-(BOOL)matchesHMDAccessoryTransportInformationWithServerIdentifier:(id)arg1 instanceID:(id)arg2 ;
-(void)blockWithError:(id)arg1 ;
-(void)removeBridgeFromDiscoveredAccessory:(id)arg1 ;
-(void)addNewCompletionBlockforDiscoveredAccessory:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)startDiscoveryAccessoryTimer:(/*^block*/id)arg1 ;
-(void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(void)handleStartDiscoveringBridgedAcessories:(id)arg1 ;
-(void)handleStopDiscoveringBridgedAcessories:(id)arg1 ;
-(void)takeOwnershipOfAppData:(id)arg1 ;
-(NSString *)serializedIdentifier;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
-(void)setMessageIdentifier:(id)arg1 ;
-(id)_associatingAccessory;
-(void)_registerForMessages:(BOOL)arg1 ;
-(void)_updateCategory:(id)arg1 notifyClients:(BOOL)arg2 ;
-(NSMutableSet *)discoveredBridgeableAccessories;
-(BOOL)isRemotelyReachable;
-(NSSet *)accessoryProfiles;
-(id)transportInformationInstances;
-(id)_currentTimeCharacteristic;
-(void)_setCurrentTimeCharacteristic:(id)arg1 ;
-(id)_dayOfTheWeekCharacteristic;
-(void)_setDayOfTheWeekCharacteristic:(id)arg1 ;
-(id)_timeUpdateCharacteristic;
-(void)_setTimeUpdateCharacteristic:(id)arg1 ;
-(BOOL)_timeInformationServiceExists;
-(void)_setTimeInformationServiceExists:(BOOL)arg1 ;
-(BOOL)_isPaired;
-(BOOL)_isDiscoveredBridgeableAccessory;
-(void)addTransportInformationInstances:(id)arg1 ;
-(void)resetNotificationEnabledTime;
-(BOOL)_supportsRelay;
-(id)_relayIdentifier;
-(void)_setRelayEnabled:(BOOL)arg1 ;
-(id)relayAccessory;
-(void)setRelayEnabled:(BOOL)arg1 ;
-(unsigned long long)_currentRelayAccessoryState;
-(unsigned long long)activationAttempts;
-(void)startRelayActivationWithActivationClient:(id)arg1 ;
-(void)setActivationAttempts:(unsigned long long)arg1 ;
-(void)_setCurrentRelayAccessoryState:(unsigned long long)arg1 ;
-(unsigned long long)pairingAttempts;
-(void)startRelayPairingWithPairingClient:(id)arg1 ;
-(void)setPairingAttempts:(unsigned long long)arg1 ;
-(NSString *)providedName;
-(void)_updateName:(id)arg1 ;
-(void)setProvidedName:(NSString *)arg1 ;
-(void)_removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)removeTransportInformationInstance:(id)arg1 ;
-(id)matchingTransportInformation:(id)arg1 ;
-(void)addTransportInformationInstance:(id)arg1 ;
-(void)_updateReachability;
-(void)_setSupportsRelay:(BOOL)arg1 ;
-(BOOL)isRelayEnabled;
-(void)_updateRelayEnabled:(BOOL)arg1 notifyRelayManager:(BOOL)arg2 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)_setPaired:(BOOL)arg1 ;
-(void)_createCameraProfiles:(id)arg1 ;
-(void)_addHAPAccessory:(id)arg1 ;
-(id)_populateServices:(id*)arg1 hapAccessory:(id)arg2 reAddServices:(BOOL)arg3 ;
-(void)_enableNotification:(BOOL)arg1 matchingHAPAccessory:(id)arg2 unconditionallyDeregister:(BOOL)arg3 ignoreDeviceUnlockRequirement:(BOOL)arg4 clientIdentifier:(id)arg5 forCharacteristics:(id)arg6 ;
-(void)_updateAccessoryTracking;
-(void)removeAllTransportInformationInstances;
-(void)setAccessoryProfiles:(NSSet *)arg1 ;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg1 ;
-(void)_performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(BOOL)isRemoteAccessEnabled;
-(void)_writeCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_readCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(void)_retrieveStateForTrackedAccessory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2 ;
-(void)_sendBlockedNotification:(BOOL)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(NSMutableSet *)identifiersOfBridgesDuringDiscovery;
-(BOOL)_supportsBridgeConfiguration;
-(long long)_enumerateReachableTransports;
-(void)_handleCharacteristicWrite:(id)arg1 ;
-(void)_handleCharacteristicRead:(id)arg1 ;
-(void)_handleUpdateRoom:(id)arg1 ;
-(void)_handleRenameService:(id)arg1 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg1 ;
-(void)_handleUpdateAuthorizationData:(id)arg1 ;
-(void)_handleCharacteristicsChangedNotification:(id)arg1 ;
-(void)_handleAccessoryConfigureWrite:(id)arg1 ;
-(void)_handleIdentify:(id)arg1 ;
-(id)hapCharacteristicWriteRequests:(id)arg1 hapAccessory:(id)arg2 hmdResponses:(id*)arg3 mapping:(id*)arg4 ;
-(void)populateHMDCharacteristicResponses:(id)arg1 hapResponses:(id)arg2 mapping:(id)arg3 overallError:(id)arg4 requests:(id)arg5 ;
-(void)notifyValue:(id)arg1 previousValue:(id)arg2 error:(id)arg3 forCharacteristic:(id)arg4 requestMessage:(id)arg5 ;
-(void)startAssociatingAccessoryTimer;
-(void)addNewCompletionBlockforAssociatingAccessory:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)startDisassociatingAccessoryTimer;
-(void)addNewCompletionBlockforDisAssociatingAccessory:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2 ;
-(void)_relayReadFromCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3 ;
-(void)_relayWriteToCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3 ;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 message:(id)arg5 ;
-(void)_handleCharacteristicError:(id)arg1 characteristic:(id)arg2 message:(id)arg3 read:(BOOL)arg4 ;
-(id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg1 ;
-(void)_parseResponseFromRemotePeer:(id)arg1 message:(id)arg2 forCharacteristic:(id)arg3 ;
-(void)_readValueForCharacteristic:(id)arg1 hapAccessory:(id)arg2 requestMessage:(id)arg3 ;
-(void)_notifyNotificationChangesForCharacteristics:(id)arg1 errors:(id)arg2 enableNotification:(BOOL)arg3 message:(id)arg4 ;
-(void)_disableNotificationsForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyCharacteristicNotificationChanges:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(BOOL)isNotificationEnabledForClientIdentifier:(id)arg1 ;
-(void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4 ;
-(void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 hapAccessory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_enableNotificationOnResident:(BOOL)arg1 characteristic:(id)arg2 clientIdentifier:(id)arg3 ignoreDeviceUnlockRequirement:(BOOL)arg4 ;
-(BOOL)_shouldTrackAccessoryWithPriority:(BOOL*)arg1 ;
-(void)handleReachabilityChange:(BOOL)arg1 ;
-(void)_notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 remoteAccessChanged:(BOOL)arg2 ;
-(void)_reenableNotificationsOnWatch;
-(void)updateReachability;
-(void)_startSystemTimeWriteTimeInformationTimer;
-(void)_handleDiscoverBridgedAccessories:(id)arg1 startDiscovery:(BOOL)arg2 ;
-(void)_removeAllDiscoveredBridgeableAccessories;
-(void)setRemoteAccessEnabled:(BOOL)arg1 ;
-(void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1 ;
-(NSNumber *)backedOffStateNumber;
-(void)setAccessoryDiscoveryBackoffTimer:(HMFTimer *)arg1 ;
-(void)setBackedOffStateNumber:(NSNumber *)arg1 ;
-(HMFTimer *)accessoryDiscoveryBackoffTimer;
-(void)_handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isSecuritySessionOpen;
-(void)_updateStateForTrackedAccessory:(id)arg1 stateNumber:(id)arg2 ;
-(void)_removeBackedoffAccessoryForStateNumber:(id)arg1 ;
-(void)updateAccessoryFlagsAndNotifyClients:(id)arg1 ;
-(void)_setRelayIdentifier:(id)arg1 ;
-(void)_setSystemTimeNeedsUpdate:(BOOL)arg1 ;
-(void)_startWriteTimeInformationTimer;
-(void)_stopWriteTimeInformationTimer;
-(void)updateAccessoryInformation:(id)arg1 ;
-(void)setAccessoryFlags:(NSNumber *)arg1 ;
-(HMFTimer *)timeInformationTimer;
-(void)setTimeInformationTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)systemTimeInformationTimer;
-(void)setSystemTimeInformationTimer:(HMFTimer *)arg1 ;
-(BOOL)systemTimeNeedsUpdate;
-(void)_writeTimeInformationCharacteristicsForAccessory;
-(void)_stopSystemTimeWriteTimeInformationTimer;
-(void)_readAndWriteTimeInformationCharacteristic:(id)arg1 ;
-(void)_handleDiscoveryBackoffTimerFired;
-(void)_readandWriteToCurrentTime:(id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)setTimeUpdateCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)setCurrentTimeCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)setDayOfTheWeekCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)registerForTimeMonitor;
-(BOOL)timeInformationServiceExists;
-(void)setTimeInformationServiceExists:(BOOL)arg1 ;
-(BOOL)updateTimeInformationCharacteristicsForAccessory:(id)arg1 ;
-(void)_deRegisterForTimeMonitor;
-(void)_registerForTimeMonitor;
-(void)_startAssociatingAccessoryTimer;
-(void)_stopAssociatingAccessoryTimer;
-(void)_setSupportsBridgeConfiguration:(BOOL)arg1 ;
-(void)_startDisassociatingAccessoryTimer;
-(void)_stopDisassociatingAccessoryTimer;
-(void)_startDiscoveryAccessoryTimer:(/*^block*/id)arg1 ;
-(void)_stopDiscoveryAccessoryTimer;
-(void)_addNewCompletionBlockforDiscoveredAccessory:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_removeNewAccessoryCompletionBlockforDiscoveredAccessory:(id)arg1 ;
-(/*^block*/id)_accessoryCompletionBlockForDiscoveredAccessory:(id)arg1 ;
-(void)_addNewCompletionBlockforAssociatingAccessory:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_removeNewAccessoryCompletionBlockforAssociatingAccessory:(id)arg1 ;
-(/*^block*/id)_accessoryCompletionBlockForAssociatingAccessory:(id)arg1 ;
-(void)_addNewCompletionBlockforDisAssociatingAccessory:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_removeNewAccessoryCompletionBlockForDisAssociatingAccessory:(id)arg1 ;
-(/*^block*/id)_accessoryCompletionBlockForDisAssociatingAccessory:(id)arg1 ;
-(id)_disAssociatingAccessory;
-(id)_allDiscoveredAccessories;
-(void)_writeConfigureBridgeValue:(id)arg1 forCharacteristic:(id)arg2 accessory:(id)arg3 toAdd:(BOOL)arg4 hapAccessory:(id)arg5 authorizationData:(id)arg6 identifier:(id)arg7 queue:(id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)_writeDiscoverAccessoriesValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 identifier:(id)arg5 queue:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_notifyCharacteristicNotificationChangedForCharacteristic:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 ;
-(void)_addBridgeToDiscoveredAccessory:(id)arg1 ;
-(void)_removeBridgeFromDiscoveredAccessory:(id)arg1 ;
-(void)_removeBridgesFromDiscoveredAccessory;
-(void)_addDiscoveredBridgeableAccessory:(id)arg1 ;
-(void)_removeDiscoveredBridgeableAccessory:(id)arg1 ;
-(void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)accessory:(id)arg1 didUpdateRelayEnabled:(BOOL)arg2 ;
-(void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2 ;
-(void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2 ;
-(void)accessory:(id)arg1 didPairRelayWithError:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2 ;
-(void)accessoryDidBecomeReachable:(id)arg1 ;
-(void)accessoryDidBecomeUnreachable:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateCategory:(id)arg2 ;
-(void)timeInformationMonitorDidChangeTime;
-(void)accessoryServer:(id)arg1 didUpdateValuesForBridgeCharacteristic:(id)arg2 ;
-(id)dumpSimpleState;
-(HMDCharacteristic *)currentTimeCharacteristic;
-(HMDCharacteristic *)dayOfTheWeekCharacteristic;
-(HMDCharacteristic *)timeUpdateCharacteristic;
-(void)addDiscoveredAccessoryToBridge:(id)arg1 ;
-(void)removeDiscoveredAccessoryFromBridge:(id)arg1 ;
-(unsigned long long)currentRelayAccessoryState;
-(void)addRelayUser:(id)arg1 accessToken:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeRelayUser:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)mergeTransportInformationInstances:(id)arg1 ;
-(id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 ;
-(void)verifyPairingWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isRemoteReachable;
-(BOOL)containsCameraService;
-(void)enumerateCharacteristicsUsingBlock:(/*^block*/id)arg1 ;
-(void)setSystemTimeNeedsUpdate:(BOOL)arg1 ;
-(BOOL)isReadingRequiredAccessoryInformationCharacteristic:(id)arg1 providedName:(id)arg2 forceReadFWVersion:(BOOL)arg3 ;
-(id)allDiscoveredAccessories;
-(unsigned long long)configNumber;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(void)setSupportsRelay:(BOOL)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(void)setIdentifiersForBridgedAccessories:(NSMutableSet *)arg1 ;
-(void)setIdentifiersOfBridgesDuringDiscovery:(NSMutableSet *)arg1 ;
-(void)setDiscoveredBridgeableAccessories:(NSMutableSet *)arg1 ;
-(void)setHmdBridgeInformation:(HMDBridgeInformation *)arg1 ;
-(id)assistantUniqueIdentifier;
-(id)assistantObject;
-(BOOL)isPrimary;
-(id)getName;
@end

