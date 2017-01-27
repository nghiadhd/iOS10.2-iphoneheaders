/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface Common : NSObject {

	BOOL _accountInfoLoaded;
	BOOL _isRenewingAccountCredentials;
	BOOL _isTokenAccessible;
	BOOL _isAccountPresent;
	NSString* _personID;
	NSString* _appToken;
	NSString* _fmfHost;
	NSString* _username;

}

@property (nonatomic,retain) NSString * fmfHost;                             //@synthesize fmfHost=_fmfHost - In the implementation block
@property (assign,nonatomic) BOOL accountInfoLoaded;                         //@synthesize accountInfoLoaded=_accountInfoLoaded - In the implementation block
@property (assign,nonatomic) BOOL isRenewingAccountCredentials;              //@synthesize isRenewingAccountCredentials=_isRenewingAccountCredentials - In the implementation block
@property (assign,nonatomic) BOOL isTokenAccessible;                         //@synthesize isTokenAccessible=_isTokenAccessible - In the implementation block
@property (assign,nonatomic) BOOL isAccountPresent;                          //@synthesize isAccountPresent=_isAccountPresent - In the implementation block
@property (nonatomic,readonly) NSString * username;                          //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * personID;                          //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSString * appToken;                          //@synthesize appToken=_appToken - In the implementation block
@property (nonatomic,readonly) NSString * redirectedHost; 
+(id)sharedInstance;
-(void)flushRedirection;
-(BOOL)isRenewingAccountCredentials;
-(void)setIsAccountPresent:(BOOL)arg1 ;
-(BOOL)isTokenAccessible;
-(BOOL)accountInfoLoaded;
-(void)setIsTokenAccessible:(BOOL)arg1 ;
-(void)setAccountInfoLoaded:(BOOL)arg1 ;
-(BOOL)isAccountPresent;
-(id)completeNumberForPhoneNumber:(id)arg1 ;
-(id)handlesForSAPerson:(id)arg1 ;
-(BOOL)isHandleEmail:(id)arg1 ;
-(void)clearFMFAccount;
-(BOOL)tokenIsNotAccessible;
-(void)setFmfHost:(NSString *)arg1 ;
-(BOOL)isAppRestricted;
-(BOOL)hasFMFUser;
-(NSString *)redirectedHost;
-(void)setIsRenewingAccountCredentials:(BOOL)arg1 ;
-(NSString *)fmfHost;
-(void)loadAccountInfo;
-(void)redirected:(id)arg1 ;
-(BOOL)isFMFAllowed;
-(id)init;
-(void)dealloc;
-(id)buildVersion;
-(id)osVersion;
-(NSString *)personID;
-(NSString *)username;
-(id)deviceUDID;
-(id)productType;
-(NSString *)appToken;
@end

