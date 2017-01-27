/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKPropertyCoding.h>

@class NSDate, NSMutableDictionary, NSString;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding> {

	NSDate* _expiry;
	NSMutableDictionary* _values;
	NSMutableDictionary* _allowedAppVersionsCache;

}

@property (nonatomic,retain) NSMutableDictionary * values;                               //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allowedAppVersionsCache;              //@synthesize allowedAppVersionsCache=_allowedAppVersionsCache - In the implementation block
@property (nonatomic,retain) NSDate * expiry;                                            //@synthesize expiry=_expiry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSMutableDictionary *)values;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)flowControlBudgetForContainer:(id)arg1 ;
-(id)flowControlRegenerationForContainer:(id)arg1 ;
-(id)flowControlMaximumThrottleTime:(id)arg1 ;
-(double)publicIdentitiesExpirationTimeoutForContainer:(id)arg1 ;
-(BOOL)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3 ;
-(unsigned long long)maxBatchSizeForContainer:(id)arg1 ;
-(BOOL)shouldSignForMessageType:(int)arg1 inDatabaseScope:(long long)arg2 forContainer:(id)arg3 ;
-(id)mescalCertURLForContainer:(id)arg1 ;
-(long long)tokenRegisterDaysForContainer:(id)arg1 ;
-(void)setExpiry:(NSDate *)arg1 ;
-(NSDate *)expiry;
-(NSMutableDictionary *)allowedAppVersionsCache;
-(void)setAllowedAppVersionsCache:(NSMutableDictionary *)arg1 ;
-(id)valueForKeyPath:(id)arg1 forContainer:(id)arg2 ;
-(id)dictionaryPropertyEncoding;
-(unsigned)mescalServerVersionForContainer:(id)arg1 ;
-(id)mescalSessionURLForContainer:(id)arg1 ;
-(BOOL)isExpired;
-(id)initWithValues:(id)arg1 ;
@end

