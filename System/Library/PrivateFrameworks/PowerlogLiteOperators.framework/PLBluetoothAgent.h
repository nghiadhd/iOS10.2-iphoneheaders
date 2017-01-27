/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, NSString, PLXPCListenerOperatorComposition;

@interface PLBluetoothAgent : PLAgent {

	BOOL keepSessionAlive;
	BTSessionImplRef session;
	BTLocalDeviceImplRef localBluetoothDevice;
	unsigned char _logCount;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	PLEntryNotificationOperatorComposition* _sbcChanged;
	NSString* _btHardwareChipset;
	PLXPCListenerOperatorComposition* _leConnectionListener;
	PLXPCListenerOperatorComposition* _btHCIListener;
	PLEntryNotificationOperatorComposition* _wakeEntryNotifications;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;                   //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * sbcChanged;                            //@synthesize sbcChanged=_sbcChanged - In the implementation block
@property (readonly) NSString * btHardwareChipset;                                                 //@synthesize btHardwareChipset=_btHardwareChipset - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * leConnectionListener;                        //@synthesize leConnectionListener=_leConnectionListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * btHCIListener;                               //@synthesize btHCIListener=_btHCIListener - In the implementation block
@property (readonly) PLEntryNotificationOperatorComposition * wakeEntryNotifications;              //@synthesize wakeEntryNotifications=_wakeEntryNotifications - In the implementation block
@property (assign) unsigned char logCount;                                                         //@synthesize logCount=_logCount - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)defaults;
-(id)init;
-(void)dealloc;
-(void)log;
-(BOOL)isConnected;
-(void)initOperatorDependancies;
-(PLEntryNotificationOperatorComposition *)wakeEntryNotifications;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(void)attachSession;
-(void)logwithBTOnCheck;
-(void)logEventIntervalLeConnectedDevices:(id)arg1 withRequest:(BOOL)arg2 ;
-(void)setLeConnectionListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventIntervalHCIRawData:(id)arg1 ;
-(void)setBtHCIListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventIntervalConnectedDevices;
-(BTLocalDeviceImplRef)localBluetoothDevice;
-(id)btHardwareChipsetQuery;
-(void)sessionAttached:(BTSessionImplRef)arg1 withResult:(int)arg2 ;
-(void)sessionTerminated:(BTSessionImplRef)arg1 withResult:(int)arg2 ;
-(void)logEventForwardDeviceState;
-(void)logEventForwardPairedDevices;
-(BOOL)modulePowered;
-(void)logEventBackwardPowerProfileStats;
-(void)logEventBackwardClientScan;
-(void)modelBluetoothOffPower;
-(BOOL)isDiscoverable;
-(BOOL)isConnectable;
-(void)modelBluetoothPower:(id)arg1 ;
-(BOOL)bluetoothPresent;
-(void)bluetoothSessionEvent:(int)arg1 onSession:(BTSessionImplRef)arg2 withResult:(int)arg3 ;
-(void)bluetoothDeviceEvent:(int)arg1 onDevice:(BTLocalDeviceImplRef)arg2 withResult:(int)arg3 ;
-(PLEntryNotificationOperatorComposition *)sbcChanged;
-(void)setSbcChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(NSString *)btHardwareChipset;
-(PLXPCListenerOperatorComposition *)leConnectionListener;
-(PLXPCListenerOperatorComposition *)btHCIListener;
-(unsigned char)logCount;
-(void)setLogCount:(unsigned char)arg1 ;
@end

