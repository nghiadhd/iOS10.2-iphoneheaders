/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFStaticItemProvider.h>

@class HMService, NSString;

@interface HFAssociatedServiceTypeOptionItemProvider : HFStaticItemProvider {

	HMService* _service;
	NSString* _serviceType;

}

@property (nonatomic,readonly) HMService * service;                 //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;              //@synthesize serviceType=_serviceType - In the implementation block
+(id)_allItemsForService:(id)arg1 serviceType:(id)arg2 ;
+(id)_itemForService:(id)arg1 associatedServiceType:(id)arg2 ;
+(id)localizedAssociatedServiceTypeStringForServiceType:(id)arg1 ;
-(NSString *)serviceType;
-(HMService *)service;
-(id)initWithHome:(id)arg1 ;
-(id)initWithService:(id)arg1 serviceType:(id)arg2 home:(id)arg3 ;
-(id)initWithServiceType:(id)arg1 home:(id)arg2 ;
@end

