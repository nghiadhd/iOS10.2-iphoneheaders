/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPersonNameComponents, NSURL;

@interface CKDBackingAccount : NSObject {

	BOOL _canAuthWithCloudKit;

}

@property (nonatomic,readonly) NSString * dsid; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * serverPreferredPushEnvironment; 
@property (nonatomic,readonly) NSPersonNameComponents * fullName; 
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (nonatomic,readonly) BOOL iCloudDriveAllowsCellularAccess; 
@property (nonatomic,readonly) BOOL canAuthWithCloudKit;                               //@synthesize canAuthWithCloudKit=_canAuthWithCloudKit - In the implementation block
@property (nonatomic,readonly) BOOL cloudKitIsEnabled; 
@property (nonatomic,readonly) BOOL cloudPhotosIsEnabled; 
@property (nonatomic,readonly) NSURL * privateCloudDBURL; 
@property (nonatomic,readonly) NSURL * privateShareServiceURL; 
@property (nonatomic,readonly) NSURL * privateDeviceServiceURL; 
@property (nonatomic,readonly) NSURL * privateCodeServiceURL; 
+(id)primaryAccountInStore:(id)arg1 ;
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 ;
+(Class)_platformBackingAccountClass;
+(BOOL)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2 ;
-(id)init;
-(id)_init;
-(NSString *)identifier;
-(NSString *)username;
-(NSString *)dsid;
-(BOOL)canAuthWithCloudKit;
-(NSString *)serverPreferredPushEnvironment;
-(NSString *)primaryEmail;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(BOOL)cloudPhotosIsEnabled;
-(BOOL)cloudKitIsEnabled;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(BOOL)isFakeAccount;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)saveVerifiedAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccountProperiesInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)privateCloudDBURL;
-(NSURL *)privateShareServiceURL;
-(NSURL *)privateDeviceServiceURL;
-(NSURL *)privateCodeServiceURL;
-(void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)ckAccount;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(id)parentAppleAccount;
-(NSPersonNameComponents *)fullName;
@end

