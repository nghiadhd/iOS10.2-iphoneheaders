/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <carkitd/carkitd-Structs.h>
@interface CRWiFiCarManager : NSObject {

	WiFiManagerClientRef _wifiManager;

}

@property (assign,nonatomic) BOOL power; 
-(BOOL)removeNetworkCredentialsForCarPlayUUID:(id)arg1 ;
-(BOOL)hasCredentialsForCarPlayUUID:(id)arg1 ;
-(BOOL)saveNetworkCredentials:(id)arg1 forCarPlayUUID:(id)arg2 ;
-(void)setInCar:(BOOL)arg1 carPlayUUID:(id)arg2 ;
-(id)_uuidForNetwork:(WiFiNetworkRef)arg1 ;
-(WiFiNetworkRef)firstNetworkPassingTest:(/*^block*/id)arg1 ;
-(WiFiNetworkRef)networkForCarPlayUUID:(id)arg1 ;
-(void)removeNetworkCredentialsForCarPlayNetwork:(WiFiNetworkRef)arg1 ;
-(void)updateExistingNetwork:(WiFiNetworkRef)arg1 password:(id)arg2 channel:(id)arg3 carPlayUUID:(id)arg4 ;
-(WiFiNetworkRef)networkForSSID:(id)arg1 ;
-(void)dealloc;
-(BOOL)power;
-(WiFiManagerClientRef)wifiManager;
-(void)setPower:(BOOL)arg1 ;
@end

