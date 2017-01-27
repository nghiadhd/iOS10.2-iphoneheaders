/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HMDAccessoryVersion;

@interface HMDVendorModelEntry : NSObject {

	NSString* _modelName;
	NSString* _manufacturer;
	NSString* _appBundleID;
	NSString* _appStoreID;
	HMDAccessoryVersion* _firmwareVersion;

}

@property (nonatomic,readonly) NSString * modelName;                               //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                            //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSString * appBundleID;                             //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,readonly) NSString * appStoreID;                              //@synthesize appStoreID=_appStoreID - In the implementation block
@property (nonatomic,readonly) HMDAccessoryVersion * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)manufacturer;
-(HMDAccessoryVersion *)firmwareVersion;
-(NSString *)appBundleID;
-(NSString *)appStoreID;
-(NSString *)modelName;
-(id)initWithModelName:(id)arg1 manufacturer:(id)arg2 appBundleID:(id)arg3 appStoreID:(id)arg4 firmwareVersion:(id)arg5 ;
@end

