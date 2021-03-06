/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageDestination.h>

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMFMessageDestination {

	BOOL _multicast;
	HMDAccount* _account;

}

@property (nonatomic,readonly) HMDAccount * account;                           //@synthesize account=_account - In the implementation block
@property (getter=isMulticast,nonatomic,readonly) BOOL multicast;              //@synthesize multicast=_multicast - In the implementation block
+(id)shortDescription;
+(id)allMessageDestinations;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)initWithTarget:(id)arg1 ;
-(id)shortDescription;
-(HMDAccount *)account;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 ;
-(BOOL)isMulticast;
@end

