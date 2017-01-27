/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface SSVPlaybackLeaseConfiguration : NSObject <NSCopying> {

	NSURL* _beginLeaseURL;
	NSURL* _getAssetURL;
	long long _leaseType;
	NSURL* _provisionMachineURL;
	NSURL* _refreshLeaseURL;
	NSString* _storeFrontSuffix;
	NSURL* _syncMachineURL;
	NSURL* _certificateURL;

}

@property (nonatomic,readonly) long long leaseType;                  //@synthesize leaseType=_leaseType - In the implementation block
@property (nonatomic,copy) NSURL * beginLeaseURL;                    //@synthesize beginLeaseURL=_beginLeaseURL - In the implementation block
@property (nonatomic,copy) NSURL * certificateURL;                   //@synthesize certificateURL=_certificateURL - In the implementation block
@property (nonatomic,copy) NSURL * getAssetURL;                      //@synthesize getAssetURL=_getAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * refreshLeaseURL;                  //@synthesize refreshLeaseURL=_refreshLeaseURL - In the implementation block
@property (nonatomic,copy) NSURL * provisionMachineURL;              //@synthesize provisionMachineURL=_provisionMachineURL - In the implementation block
@property (nonatomic,copy) NSURL * syncMachineURL;                   //@synthesize syncMachineURL=_syncMachineURL - In the implementation block
@property (nonatomic,copy) NSString * storeFrontSuffix;              //@synthesize storeFrontSuffix=_storeFrontSuffix - In the implementation block
-(long long)leaseType;
-(NSURL *)beginLeaseURL;
-(NSURL *)refreshLeaseURL;
-(id)initWithURLBagDictionary:(id)arg1 leaseType:(long long)arg2 ;
-(void)setBeginLeaseURL:(NSURL *)arg1 ;
-(void)setProvisionMachineURL:(NSURL *)arg1 ;
-(void)setRefreshLeaseURL:(NSURL *)arg1 ;
-(void)setSyncMachineURL:(NSURL *)arg1 ;
-(NSURL *)provisionMachineURL;
-(NSURL *)syncMachineURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeFrontSuffix;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(void)setGetAssetURL:(NSURL *)arg1 ;
-(NSURL *)getAssetURL;
@end

