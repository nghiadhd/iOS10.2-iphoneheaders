/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPXPCDaemonProtocol <NSObject>
@optional
-(void)startAdvertising:(id)arg1;
-(void)startScanning:(id)arg1;
-(void)stopScanning:(id)arg1;
-(void)checkAllowDuplicates:(/*^block*/id)arg1;
-(void)stopAdvertising:(id)arg1;
-(void)startTrackingPeerWithRequest:(id)arg1;
-(void)stopTrackingPeerWithRequest:(id)arg1;
-(void)listenToBandwidthNotifications;
-(void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
-(void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
-(void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(BOOL)arg4;
-(void)addCharacteristic:(id)arg1 forService:(id)arg2;
-(void)startTrackingZone:(id)arg1;
-(void)stopTrackingZones:(id)arg1;
-(void)stopTrackingAllZones;
-(void)getAllTrackedZones;
-(void)enableTestMode;
-(void)disconnectFromPeer:(id)arg1;
-(void)connectToPeer:(id)arg1;
-(void)disableScanning;
-(void)getPowerLogStats:(/*^block*/id)arg1;

@end

