/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CRVehicleBluetoothDiscovery.h>
#import <CarKitSettings/CRVehicleAccessoryManagerDelegate.h>

@protocol CRVehicleDiscovery;
@class NSMutableDictionary, CRVehicleBluetoothDiscoverer, CRVehicleAccessoryManager, NSSet, NSString;

@interface CRVehicleDiscoverer : NSObject <CRVehicleBluetoothDiscovery, CRVehicleAccessoryManagerDelegate> {

	id<CRVehicleDiscovery> _discoveryDelegate;
	NSMutableDictionary* _vehicleForBluetoothAddress;
	CRVehicleBluetoothDiscoverer* _bluetoothDiscoverer;
	CRVehicleAccessoryManager* _accessoryManager;

}

@property (nonatomic,retain) NSMutableDictionary * vehicleForBluetoothAddress;                //@synthesize vehicleForBluetoothAddress=_vehicleForBluetoothAddress - In the implementation block
@property (nonatomic,retain) CRVehicleBluetoothDiscoverer * bluetoothDiscoverer;              //@synthesize bluetoothDiscoverer=_bluetoothDiscoverer - In the implementation block
@property (nonatomic,retain) CRVehicleAccessoryManager * accessoryManager;                    //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (assign,nonatomic,__weak) id<CRVehicleDiscovery> discoveryDelegate;                 //@synthesize discoveryDelegate=_discoveryDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * discoveredVehicles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)bluetoothPairVehicle:(id)arg1 ;
-(NSSet *)discoveredVehicles;
-(void)setBluetoothDiscoverer:(CRVehicleBluetoothDiscoverer *)arg1 ;
-(void)bluetoothDiscoverer:(id)arg1 didDiscoverDevice:(id)arg2 ;
-(void)bluetoothDiscoverer:(id)arg1 didUpdateDevice:(id)arg2 ;
-(void)bluetoothDiscoverer:(id)arg1 didRemoveDevice:(id)arg2 ;
-(void)handleUpdatedVehicle:(id)arg1 ;
-(id)viewControllerPresentingPairingForBluetoothDiscoverer:(id)arg1 ;
-(id)_removeVehicleForBluetoothDevice:(id)arg1 ;
-(BOOL)_removeVehicleForAccessory:(id)arg1 removedVehicle:(id*)arg2 ;
-(void)handleRemovedVehicle:(id)arg1 ;
-(void)stopDiscovery;
-(void)handleDiscoveredVehicle:(id)arg1 ;
-(CRVehicleAccessoryManager *)accessoryManager;
-(id)_vehicleForBluetoothDevice:(id)arg1 ;
-(id)_vehicleForBluetoothAddress:(id)arg1 ;
-(void)setAccessoryManager:(CRVehicleAccessoryManager *)arg1 ;
-(void)setVehicleForBluetoothAddress:(NSMutableDictionary *)arg1 ;
-(CRVehicleBluetoothDiscoverer *)bluetoothDiscoverer;
-(NSMutableDictionary *)vehicleForBluetoothAddress;
-(void)setDiscoveryDelegate:(id<CRVehicleDiscovery>)arg1 ;
-(id<CRVehicleDiscovery>)discoveryDelegate;
-(id)init;
-(void)dealloc;
-(id)_vehicleForAccessory:(id)arg1 ;
-(void)accessoryManager:(id)arg1 didConnectVehicleAccessory:(id)arg2 ;
-(void)accessoryManager:(id)arg1 didDisconnectVehicleAccessory:(id)arg2 ;
-(void)startDiscovery;
@end

