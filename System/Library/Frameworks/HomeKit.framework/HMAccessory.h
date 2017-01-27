/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFReorderableHomeKitObject.h>
#import <libobjc.A.dylib/HFFavoritable.h>
#import <libobjc.A.dylib/HFPrettyDescription.h>
#import <libobjc.A.dylib/HFStateDumpSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@protocol HMAccessoryDelegate, OS_dispatch_queue;
@class NSUUID, NSString, HMHome, HMRoom, NSArray, HMAccessoryCategory, HMApplicationData, NSNumber, HMFMessageDispatcher, HMThreadSafeMutableArrayCollection, NSObject, HMDelegateCaller, HFServiceNameComponents, NSDate, NSSet;

@interface HMAccessory : NSObject <HFReorderableHomeKitObject, HFFavoritable, HFPrettyDescription, HFStateDumpSerializable, NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData> {

	BOOL _firmwareUpdateAvailable;
	BOOL _reachable;
	BOOL _discoveredBridgeableAccessory;
	BOOL _bridgedAccessory;
	BOOL _blocked;
	BOOL _bridgeSupportsConfiguration;
	BOOL _paired;
	NSUUID* _uniqueIdentifier;
	id<HMAccessoryDelegate> _delegate;
	NSString* _name;
	HMHome* _home;
	HMRoom* _room;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _firmwareVersion;
	NSString* _serialNumber;
	NSString* _bundleID;
	NSString* _storeID;
	NSArray* _uniqueIdentifiersForBridgedAccessories;
	NSArray* _uniqueIdentifiersForBridgeAccessories;
	HMAccessoryCategory* _category;
	HMApplicationData* _applicationData;
	unsigned long long _transportTypes;
	unsigned long long _additionalSetupStatus;
	NSNumber* _accessoryFlags;
	HMFMessageDispatcher* _msgDispatcher;
	long long _reachableTransports;
	HMThreadSafeMutableArrayCollection* _currentServices;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMThreadSafeMutableArrayCollection* _accessories;
	NSUUID* _uuid;
	HMDelegateCaller* _delegateCaller;
	HMThreadSafeMutableArrayCollection* _accessoryProfiles;

}

@property (nonatomic,readonly) HFServiceNameComponents * hf_serviceNameComponents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSDate * hf_dateAdded; 
@property (nonatomic,copy,readonly) NSString * hf_displayName; 
@property (nonatomic,readonly) BOOL hf_requiresFirmwareUpdate; 
@property (nonatomic,readonly) BOOL hf_isBridge; 
@property (nonatomic,readonly) BOOL hf_isCamera; 
@property (nonatomic,readonly) NSSet * hf_visibleServices; 
@property (nonatomic,readonly) NSSet * hf_displayNamesForVisibleTiles; 
@property (nonatomic,readonly) long long hf_appPunchOutReason; 
@property (nonatomic,readonly) BOOL hf_isFavorite; 
@property (nonatomic,readonly) BOOL hf_hasSetFavorite; 
@property (nonatomic,copy,readonly) NSArray * cameraProfiles; 
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                      //@synthesize category=_category - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                   //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) long long reachableTransports;                                       //@synthesize reachableTransports=_reachableTransports - In the implementation block
@property (assign,nonatomic) BOOL paired;                                                         //@synthesize paired=_paired - In the implementation block
@property (nonatomic,copy) HMThreadSafeMutableArrayCollection * currentServices;                  //@synthesize currentServices=_currentServices - In the implementation block
@property (assign,nonatomic) BOOL bridgedAccessory;                                               //@synthesize bridgedAccessory=_bridgedAccessory - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                            //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                          //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * accessories;                    //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic) BOOL bridgeSupportsConfiguration;                                    //@synthesize bridgeSupportsConfiguration=_bridgeSupportsConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * uniqueIdentifiersForBridgeAccessories;                       //@synthesize uniqueIdentifiersForBridgeAccessories=_uniqueIdentifiersForBridgeAccessories - In the implementation block
@property (assign,nonatomic) unsigned long long transportTypes;                                   //@synthesize transportTypes=_transportTypes - In the implementation block
@property (assign,nonatomic) unsigned long long additionalSetupStatus;                            //@synthesize additionalSetupStatus=_additionalSetupStatus - In the implementation block
@property (nonatomic,retain) NSNumber * accessoryFlags;                                           //@synthesize accessoryFlags=_accessoryFlags - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) HMRoom * room;                                                //@synthesize room=_room - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                                //@synthesize home=_home - In the implementation block
@property (retain) NSString * model;                                                              //@synthesize model=_model - In the implementation block
@property (retain) NSString * manufacturer;                                                       //@synthesize manufacturer=_manufacturer - In the implementation block
@property (retain) NSString * firmwareVersion;                                                    //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (retain) NSString * serialNumber;                                                       //@synthesize serialNumber=_serialNumber - In the implementation block
@property (retain) NSString * bundleID;                                                           //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSString * storeID;                                                            //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) BOOL firmwareUpdateAvailable;                                        //@synthesize firmwareUpdateAvailable=_firmwareUpdateAvailable - In the implementation block
@property (nonatomic,copy) NSArray * uniqueIdentifiersForBridgedAccessories;                      //@synthesize uniqueIdentifiersForBridgedAccessories=_uniqueIdentifiersForBridgedAccessories - In the implementation block
@property (assign,nonatomic) BOOL discoveredBridgeableAccessory;                                  //@synthesize discoveredBridgeableAccessory=_discoveredBridgeableAccessory - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                                       //@synthesize blocked=_blocked - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                                   //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * accessoryProfiles;              //@synthesize accessoryProfiles=_accessoryProfiles - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HMAccessoryDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBridged,nonatomic,readonly) BOOL bridged; 
@property (nonatomic,copy,readonly) NSArray * identifiersForBridgedAccessories; 
@property (nonatomic,copy,readonly) NSArray * services; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (nonatomic,readonly) HMApplicationData * applicationData;                               //@synthesize applicationData=_applicationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(HFServiceNameComponents *)hf_serviceNameComponents;
-(NSString *)hf_displayName;
-(NSDate *)hf_dateAdded;
-(id)hf_updateDateAdded:(id)arg1 ;
-(BOOL)hf_requiresFirmwareUpdate;
-(BOOL)hf_isCamera;
-(BOOL)hf_isBridge;
-(NSSet *)hf_visibleServices;
-(long long)hf_appPunchOutReason;
-(NSSet *)hf_displayNamesForVisibleTiles;
-(id)hf_updateIsFavorite:(BOOL)arg1 ;
-(BOOL)hf_isFavorite;
-(BOOL)hf_hasSetFavorite;
-(id)hf_serializedStateDumpRepresentation;
-(id)hf_prettyDescriptionOfType:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HMAccessoryDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<HMAccessoryDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(HMAccessoryCategory *)category;
-(NSUUID *)identifier;
-(NSString *)model;
-(id)_privateDelegate;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(unsigned long long)transportTypes;
-(void)setBlocked:(BOOL)arg1 ;
-(NSString *)bundleID;
-(NSString *)serialNumber;
-(NSString *)storeID;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(HMDelegateCaller *)delegateCaller;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_readValueForCharacteristic:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_findCharacteristic:(id)arg1 forService:(id)arg2 ;
-(void)_unconfigure;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findService:(id)arg1 ;
-(HMThreadSafeMutableArrayCollection *)currentServices;
-(void)setCurrentServices:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 configCompletionQueue:(id)arg5 configCompletion:(/*^block*/id)arg6 ;
-(void)_handleAppDataUpdatedNotification:(id)arg1 ;
-(void)_copyFrom:(id)arg1 ;
-(BOOL)isBridged;
-(void)setUniqueIdentifiersForBridgedAccessories:(NSArray *)arg1 ;
-(id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(BOOL)arg2 ;
-(void)updateAccessoryInfo:(id)arg1 ;
-(void)_updateRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)bridgedAccessory;
-(unsigned long long)additionalSetupStatus;
-(void)_configureClientQueue:(id)arg1 ;
-(void)_configureProfilesWithClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3 home:(id)arg4 ;
-(void)_handleAccessoryCategoryChanged:(id)arg1 ;
-(void)_handleRenamed:(id)arg1 ;
-(void)_handleConnectivityChanged:(id)arg1 ;
-(void)_handleCharacteristicValueUpdated:(id)arg1 ;
-(void)_handleCharacteristicsUpdated:(id)arg1 ;
-(void)_handleAccessoryNotificationsUpdated:(id)arg1 ;
-(void)_handleServicesUpdated:(id)arg1 ;
-(void)_handleAccessoryFlagsChanged:(id)arg1 ;
-(void)_handleServiceRenamed:(id)arg1 ;
-(void)_handleServiceTypeAssociated:(id)arg1 ;
-(void)_handleBridgeStatusNotification:(id)arg1 ;
-(void)setReachableTransports:(long long)arg1 ;
-(NSArray *)uniqueIdentifiersForBridgeAccessories;
-(void)setUniqueIdentifiersForBridgeAccessories:(NSArray *)arg1 ;
-(void)setBridgedAccessory:(BOOL)arg1 ;
-(void)setTransportTypes:(unsigned long long)arg1 ;
-(BOOL)bridgeSupportsConfiguration;
-(void)setBridgeSupportsConfiguration:(BOOL)arg1 ;
-(void)setAdditionalSetupStatus:(unsigned long long)arg1 ;
-(BOOL)firmwareUpdateAvailable;
-(void)setFirmwareUpdateAvailable:(BOOL)arg1 ;
-(void)_notifyDelegateOfAppDataUpdateForService:(id)arg1 ;
-(void)_notifyDelegatesOfAdditionalSetupRequiredChange;
-(void)_mergeProfileObjects:(id)arg1 currentOperations:(id)arg2 ;
-(void)_identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_accessoryInformationService;
-(id)_valueForCharacteristic:(id)arg1 ofService:(id)arg2 ;
-(void)_configureMessageDispatcher:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(void)_setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)_updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateName:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_updateFromAccessory:(id)arg1 ;
-(void)notifyDelegateOfAppDataUpdateForService:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSArray *)services;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(HMFMessageDispatcher *)msgDispatcher;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMRoom *)room;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)_registerNotificationHandlers;
-(NSArray *)cameraProfiles;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMThreadSafeMutableArrayCollection *)accessories;
-(BOOL)isReachable;
-(void)setAccessories:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)setRoom:(HMRoom *)arg1 ;
-(NSNumber *)accessoryFlags;
-(NSArray *)identifiersForBridgedAccessories;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)isBlocked;
-(BOOL)discoveredBridgeableAccessory;
-(void)setDiscoveredBridgeableAccessory:(BOOL)arg1 ;
-(HMThreadSafeMutableArrayCollection *)accessoryProfiles;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)_createCameraProfiles:(id)arg1 ;
-(void)setAccessoryProfiles:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(void)_handleUpdateRoom:(id)arg1 ;
-(void)setAccessoryFlags:(NSNumber *)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(HMApplicationData *)applicationData;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(BOOL)paired;
-(NSArray *)uniqueIdentifiersForBridgedAccessories;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isAdditionalSetupRequired;
-(long long)reachableTransports;
-(BOOL)isFirmwareUpdateAvailable;
@end
