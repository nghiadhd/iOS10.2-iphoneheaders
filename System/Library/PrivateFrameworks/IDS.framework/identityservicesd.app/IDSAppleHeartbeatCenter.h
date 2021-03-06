/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class NSMutableArray, NSDate, IMTimer;

@interface IDSAppleHeartbeatCenter : NSObject <IMSystemMonitorListener> {

	NSMutableArray* _registrations;
	NSDate* _registrationHeartbeatDate;
	IMTimer* _registrationHeartbeatTimer;
	double _baseRegistrationHBI;
	BOOL _pendingHeartbeat;

}

@property (nonatomic,readonly) double registrationHBI; 
+(id)sharedInstance;
-(id)_registrationsPendingHeartbeat;
-(void)updateHeartbeat;
-(void)_serverHeartBeat:(id)arg1 ;
-(BOOL)_registration:(id)arg1 needsRenewal:(double*)arg2 ;
-(void)_startRegistrationHeartbeat;
-(void)__reallyUpdateRegistrationHeartbeat;
-(double)_nextRegistrationHeartbeatTime;
-(void)_bagReloaded:(id)arg1 ;
-(void)_registrationStateChangedNotification:(id)arg1 ;
-(void)_serverHeartBeatTimerHit:(id)arg1 ;
-(void)_updateRegistrationHeartbeat;
-(void)_stopRegistrationHeartbeat;
-(void)checkHeartbeat;
-(double)registrationHBI;
-(void)addRegistrationInfo:(id)arg1 ;
-(void)removeRegistrationInfo:(id)arg1 ;
-(id)init;
-(void)systemDidWake;
@end

