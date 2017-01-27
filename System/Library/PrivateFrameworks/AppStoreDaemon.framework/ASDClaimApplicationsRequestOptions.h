/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSData, NSArray, NSDictionary;

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions {

	BOOL _establishesActiveAccount;
	BOOL _ignoresPreviousClaimAttempts;
	BOOL _suppressErrorDialogs;
	NSNumber* _accountID;
	NSData* _clientAuditTokenData;
	NSArray* _bundleIdentifiers;
	long long _claimStyle;
	NSDictionary* _httpHeaders;
	NSNumber* _purchaseID;

}

@property (nonatomic,copy) NSNumber * accountID;                             //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSData * clientAuditTokenData;                    //@synthesize clientAuditTokenData=_clientAuditTokenData - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIdentifiers;                  //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,readonly) long long claimStyle;                         //@synthesize claimStyle=_claimStyle - In the implementation block
@property (assign,nonatomic) BOOL establishesActiveAccount;                  //@synthesize establishesActiveAccount=_establishesActiveAccount - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeaders;                       //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (assign,nonatomic) BOOL ignoresPreviousClaimAttempts;              //@synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts - In the implementation block
@property (nonatomic,copy) NSNumber * purchaseID;                            //@synthesize purchaseID=_purchaseID - In the implementation block
@property (assign,nonatomic) BOOL suppressErrorDialogs;                      //@synthesize suppressErrorDialogs=_suppressErrorDialogs - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)claimStyle;
-(NSData *)clientAuditTokenData;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(id)initWithClaimStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)httpHeaders;
-(NSArray *)bundleIdentifiers;
-(void)setAccountID:(NSNumber *)arg1 ;
-(NSNumber *)accountID;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(BOOL)establishesActiveAccount;
-(BOOL)ignoresPreviousClaimAttempts;
-(BOOL)suppressErrorDialogs;
-(void)setEstablishesActiveAccount:(BOOL)arg1 ;
-(void)setIgnoresPreviousClaimAttempts:(BOOL)arg1 ;
-(void)setSuppressErrorDialogs:(BOOL)arg1 ;
-(NSNumber *)purchaseID;
-(void)setPurchaseID:(NSNumber *)arg1 ;
@end

