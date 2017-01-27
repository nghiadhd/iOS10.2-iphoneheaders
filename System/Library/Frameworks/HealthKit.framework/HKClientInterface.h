/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKClientInterface <NSObject>
@required
-(void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientRemote_deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4;
-(void)clientRemote_deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2;
-(void)clientRemote_deliverWorkoutEvent:(id)arg1 forSessionUUID:(id)arg2;
-(void)clientRemote_unitPreferencesDidUpdate;

@end

