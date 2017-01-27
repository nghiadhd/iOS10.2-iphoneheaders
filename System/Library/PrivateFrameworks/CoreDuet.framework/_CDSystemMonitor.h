/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface _CDSystemMonitor : NSObject {

	NSObject*<OS_dispatch_source> memPressureMonitor;
	NSMutableArray* registrations;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> psChangeDispatch;
	BOOL psChangeTimerDispatched;
	NSObject*<OS_dispatch_source> backlightChangeDispatch;
	BOOL backlightTimerDispatched;
	int backlightMonitorToken;
	BOOL _userInactive;
	BOOL _inBatterySaverMode;
	unsigned long long _memState;
	unsigned long long _thermalState;
	unsigned long long _chargingState;
	NSString* _powerSource;

}

@property (assign,nonatomic) unsigned long long memState;                   //@synthesize memState=_memState - In the implementation block
@property (assign,nonatomic) unsigned long long thermalState;               //@synthesize thermalState=_thermalState - In the implementation block
@property (assign,nonatomic) unsigned long long chargingState;              //@synthesize chargingState=_chargingState - In the implementation block
@property (nonatomic,retain) NSString * powerSource;                        //@synthesize powerSource=_powerSource - In the implementation block
@property (assign,nonatomic) BOOL userInactive;                             //@synthesize userInactive=_userInactive - In the implementation block
@property (assign,nonatomic) BOOL inBatterySaverMode;                       //@synthesize inBatterySaverMode=_inBatterySaverMode - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)registerHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(NSString *)powerSource;
-(unsigned long long)chargingState;
-(unsigned long long)thermalState;
-(unsigned long long)memState;
-(BOOL)userInactive;
-(BOOL)inBatterySaverMode;
-(void)handleUserActivityNotification:(unsigned long long)arg1 ;
-(void)handleBacklightStateChange;
-(void)handleBatterySaverNotification:(unsigned long long)arg1 ;
-(void)checkMemoryState;
-(void)handleThermalNotification:(unsigned long long)arg1 ;
-(void)handlePowerSourceNotification;
-(void)setPowerSource:(NSString *)arg1 ;
-(void)notifyPsChange;
-(void)sendNotification:(unsigned long long)arg1 ;
-(BOOL)deRegisterHandler:(id)arg1 ;
-(void)setMemState:(unsigned long long)arg1 ;
-(void)setThermalState:(unsigned long long)arg1 ;
-(void)setChargingState:(unsigned long long)arg1 ;
-(void)setUserInactive:(BOOL)arg1 ;
-(void)setInBatterySaverMode:(BOOL)arg1 ;
-(void)registerForNotifications;
@end

