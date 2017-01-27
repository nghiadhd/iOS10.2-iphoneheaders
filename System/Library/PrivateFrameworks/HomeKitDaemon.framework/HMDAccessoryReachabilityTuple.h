/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMDAccessoryReachabilityTuple : NSObject {

	BOOL _previouslySentReachability;
	BOOL _currentReachability;
	NSString* _accessoryUUID;

}

@property (nonatomic,retain) NSString * accessoryUUID;                     //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (assign,nonatomic) BOOL previouslySentReachability;              //@synthesize previouslySentReachability=_previouslySentReachability - In the implementation block
@property (assign,nonatomic) BOOL currentReachability;                     //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)tupleWithAccessoryUUID:(id)arg1 reachable:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setAccessoryUUID:(NSString *)arg1 ;
-(void)setPreviouslySentReachability:(BOOL)arg1 ;
-(void)setCurrentReachability:(BOOL)arg1 ;
-(NSString *)accessoryUUID;
-(BOOL)previouslySentReachability;
-(BOOL)currentReachability;
@end

