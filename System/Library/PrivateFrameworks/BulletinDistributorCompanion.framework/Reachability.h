/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
@interface Reachability : NSObject {

	BOOL _alwaysReturnLocalWiFiStatus;
	SCNetworkReachabilityRef _reachabilityRef;

}

@property (assign,nonatomic) BOOL alwaysReturnLocalWiFiStatus;                      //@synthesize alwaysReturnLocalWiFiStatus=_alwaysReturnLocalWiFiStatus - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef;              //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
+(id)reachabilityForLocalWiFi;
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(long long)currentReachabilityStatus;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(void)setAlwaysReturnLocalWiFiStatus:(BOOL)arg1 ;
-(BOOL)alwaysReturnLocalWiFiStatus;
-(SCNetworkReachabilityRef)reachabilityRef;
@end
