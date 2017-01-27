/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableDictionary, DownloadSessionProperties, NSString, NSError;

@interface RestoreItem : NSObject {

	NSNumber* _originalPurchaserAccountID;
	NSMutableDictionary* _properties;
	BOOL _hasRestoreData;
	long long _jobID;
	DownloadSessionProperties* _downloadSessionProperties;
	NSNumber* _accountID;
	NSString* _appleID;
	NSString* _bundleID;
	NSString* _clientIdentifier;
	long long _restoreDataSize;
	NSString* _vendorID;
	NSError* _error;

}

@property (nonatomic,readonly) long long jobID;                                                //@synthesize jobID=_jobID - In the implementation block
@property (nonatomic,copy) DownloadSessionProperties * downloadSessionProperties;              //@synthesize downloadSessionProperties=_downloadSessionProperties - In the implementation block
@property (nonatomic,copy) NSNumber * accountID;                                               //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                                 //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * downloadKind; 
@property (nonatomic,copy) NSNumber * storeOriginalPurchaserAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
@property (nonatomic,copy) NSNumber * storeItemID; 
@property (nonatomic,copy) NSString * storeSoftwareVersionID; 
@property (nonatomic,copy) NSString * clientIdentifier;                                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRestoreData;                                              //@synthesize hasRestoreData=_hasRestoreData - In the implementation block
@property (assign,nonatomic) long long restoreDataSize;                                        //@synthesize restoreDataSize=_restoreDataSize - In the implementation block
@property (nonatomic,copy) NSString * vendorID;                                                //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,retain) NSError * error;                                                  //@synthesize error=_error - In the implementation block
-(BOOL)hasRestoreData;
-(void)setHasRestoreData:(BOOL)arg1 ;
-(void)setRestoreDataSize:(long long)arg1 ;
-(long long)restoreDataSize;
-(void)_setPropertiesWithJob:(id)arg1 ;
-(DownloadSessionProperties *)downloadSessionProperties;
-(void)setDownloadSessionProperties:(DownloadSessionProperties *)arg1 ;
-(void)setVendorID:(NSString *)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(id)copyRestoreDictionary;
-(NSString *)downloadKind;
-(void)setDownloadKind:(NSString *)arg1 ;
-(void)setStoreOriginalPurchaserAccountID:(NSNumber *)arg1 ;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(void)setStoreSoftwareVersionID:(NSString *)arg1 ;
-(NSNumber *)storeOriginalPurchaserAccountID;
-(NSString *)storeSoftwareVersionID;
-(long long)jobID;
-(id)init;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)vendorID;
-(NSString *)clientIdentifier;
-(NSNumber *)storeItemID;
-(NSString *)bundleID;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleID;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setAccountID:(NSNumber *)arg1 ;
-(NSString *)storeFrontID;
-(NSNumber *)accountID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(id)initWithJob:(id)arg1 ;
@end

