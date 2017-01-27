/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSString, NSArray, NSDictionary, NSSet;

@interface AAAccount : NSObject {

	ACAccount* _account;
	NSString* _fmipToken;
	NSArray* _appleIDAliases;
	NSString* _protocolVersion;

}

@property (nonatomic,copy) NSString * authToken; 
@property (nonatomic,copy) NSString * fmipToken;                                     //@synthesize fmipToken=_fmipToken - In the implementation block
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSArray * appleIDAliases;                             //@synthesize appleIDAliases=_appleIDAliases - In the implementation block
@property (assign,nonatomic) BOOL primaryAccount; 
@property (nonatomic,readonly) BOOL primaryEmailVerified; 
@property (nonatomic,readonly) BOOL needsEmailConfiguration; 
@property (nonatomic,readonly) BOOL needsRegistration; 
@property (nonatomic,readonly) BOOL serviceUnavailable; 
@property (nonatomic,readonly) NSDictionary * serviceUnavailableInfo; 
@property (nonatomic,readonly) NSString * protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSSet * provisionedDataclasses; 
@property (nonatomic,readonly) NSSet * enabledDataclasses; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * accountFooterText; 
@property (nonatomic,readonly) NSDictionary * accountFooterButton; 
@property (nonatomic,readonly) NSDictionary * accountFirstDisplayAlert; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * syncStoreIdentifier; 
@property (assign,nonatomic) BOOL needsToVerifyTerms; 
@property (nonatomic,readonly) NSArray * supportedDataclasses; 
@property (nonatomic,readonly) int accountServiceType; 
+(id)dataclassesBoundToPrimaryAccount;
+(id)dataclassesBoundToSyncAccount;
+(id)dataclassesBoundToSingleAccount;
+(id)accountTypeString;
-(id)init;
-(NSString *)identifier;
-(NSString *)displayName;
-(NSString *)protocolVersion;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)personID;
-(void)authenticateWithHandler:(/*^block*/id)arg1 ;
-(NSString *)fmipToken;
-(NSArray *)appleIDAliases;
-(BOOL)primaryEmailVerified;
-(id)_mailChildAccount;
-(void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSString *)accountFooterText;
-(NSDictionary *)accountFooterButton;
-(NSDictionary *)accountFirstDisplayAlert;
-(void)updateAccountWithProvisioningResponse:(id)arg1 ;
-(BOOL)serviceUnavailable;
-(NSDictionary *)serviceUnavailableInfo;
-(void)setUseCellular:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)needsEmailConfiguration;
-(int)mobileMeAccountStatus;
-(id)_childAccounts;
-(void)notifyUserOfQuotaDepletion;
-(void)presentQuotaDepletionAlertForDataclass:(id)arg1 ;
-(BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 ;
-(void)saveTokensInKeychain;
-(void)savePasswordInKeychain;
-(void)saveFMIPTokenInKeychain;
-(void)removeTokensFromKeychain;
-(void)removePasswordFromKeychain;
-(void)flushCachedTokens;
-(void)flushCachedPassword;
-(void)updateAccountPropertiesWithHandler:(/*^block*/id)arg1 ;
-(void)setupChildMailAccountAndEnable:(BOOL)arg1 withEmail:(id)arg2 ;
-(void)signInWithHandler:(/*^block*/id)arg1 ;
-(void)renewCredentialsForAppleIDWithHandler:(/*^block*/id)arg1 ;
-(void)lookupEmailAddresses:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)needsToVerifyTerms;
-(void)setNeedsToVerifyTerms:(BOOL)arg1 ;
-(void)setFmipToken:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(NSSet *)provisionedDataclasses;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSSet *)enabledDataclasses;
-(NSArray *)supportedDataclasses;
-(BOOL)primaryAccount;
-(void)setPrimaryAccount:(BOOL)arg1 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)accountDescription;
-(NSString *)username;
-(id)account;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSDictionary *)dataclassProperties;
-(int)accountServiceType;
-(BOOL)useCellularForDataclass:(id)arg1 ;
-(NSString *)primaryEmail;
-(NSString *)syncStoreIdentifier;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)needsRegistration;
@end

