/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCAuthContextProtocol.h>

@class ACFPrincipal, ACFMessage, NSNumber, NSString, NSDate, NSMutableDictionary, NSData;

@interface ACCAuthContext : NSObject <ACCAuthContextProtocol> {

	ACFMessage* _request;
	ACFPrincipal* _principal;
	NSString* _appIDKey;
	NSString* _dsKeyVersion;
	NSString* _nonce;
	NSString* _encryptionHash;
	NSString* _oldUserKey;
	NSString* _currentUserKey;
	NSString* _sessionToken;
	NSString* _tokenVersion;
	NSNumber* _appID;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	NSData* _encryptionKey;
	NSData* _initializationVector;
	NSNumber* _authenticationType;
	NSString* _twoStepVerificationCode;
	NSNumber* _personID;
	NSString* _selectedDeviceId;
	NSString* _selectedDeviceType;
	NSString* _serviceName;
	NSString* _recoveryKey;
	NSString* _clientSecretTokenHmac;
	NSNumber* _clientSecretCreateDate;
	NSNumber* _touchIDSupport;

}

@property (retain) NSDate * expirationDate;                                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) ACFPrincipal * principal;                                            //@synthesize principal=_principal - In the implementation block
@property (retain) ACFMessage * request;                                                //@synthesize request=_request - In the implementation block
@property (assign) NSNumber * authenticationType;                                       //@synthesize authenticationType=_authenticationType - In the implementation block
@property (retain) NSNumber * appID;                                                    //@synthesize appID=_appID - In the implementation block
@property (retain) NSString * encryptionHash;                                           //@synthesize encryptionHash=_encryptionHash - In the implementation block
@property (retain) NSString * nonce;                                                    //@synthesize nonce=_nonce - In the implementation block
@property (retain) NSString * oldUserKey;                                               //@synthesize oldUserKey=_oldUserKey - In the implementation block
@property (retain) NSString * currentUserKey;                                           //@synthesize currentUserKey=_currentUserKey - In the implementation block
@property (retain) NSString * appIDKey;                                                 //@synthesize appIDKey=_appIDKey - In the implementation block
@property (retain) NSString * dsKeyVersion;                                             //@synthesize dsKeyVersion=_dsKeyVersion - In the implementation block
@property (retain) NSString * sessionToken;                                             //@synthesize sessionToken=_sessionToken - In the implementation block
@property (retain) NSString * tokenVersion;                                             //@synthesize tokenVersion=_tokenVersion - In the implementation block
@property (retain) NSDate * creationDate;                                               //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * parametersDictionary; 
@property (nonatomic,readonly) NSString * tokenSourceString; 
@property (nonatomic,retain) NSData * encryptionKey;                                    //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,retain) NSData * initializationVector;                             //@synthesize initializationVector=_initializationVector - In the implementation block
@property (nonatomic,retain) NSNumber * personID;                                       //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * selectedDeviceId;                               //@synthesize selectedDeviceId=_selectedDeviceId - In the implementation block
@property (nonatomic,retain) NSString * selectedDeviceType;                             //@synthesize selectedDeviceType=_selectedDeviceType - In the implementation block
@property (nonatomic,retain) NSString * twoStepVerificationCode;                        //@synthesize twoStepVerificationCode=_twoStepVerificationCode - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * recoveryKey;                                    //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (nonatomic,retain) NSString * clientSecretTokenHmac;                          //@synthesize clientSecretTokenHmac=_clientSecretTokenHmac - In the implementation block
@property (nonatomic,retain) NSNumber * clientSecretCreateDate;                         //@synthesize clientSecretCreateDate=_clientSecretCreateDate - In the implementation block
@property (nonatomic,retain) NSNumber * touchIDSupport;                                 //@synthesize touchIDSupport=_touchIDSupport - In the implementation block
@property (nonatomic,readonly) NSString * xmlTokenSourceString; 
+(id)authContextWithRequest:(id)arg1 ;
-(NSNumber *)authenticationType;
-(void)setAuthenticationType:(NSNumber *)arg1 ;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(void)dealloc;
-(ACFMessage *)request;
-(id)initWithRequest:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setRequest:(ACFMessage *)arg1 ;
-(void)setAppID:(NSNumber *)arg1 ;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setAppIDKey:(NSString *)arg1 ;
-(NSNumber *)appID;
-(NSString *)appIDKey;
-(NSString *)dsKeyVersion;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(NSNumber *)clientSecretCreateDate;
-(ACFPrincipal *)principal;
-(void)setClientSecretCreateDate:(NSNumber *)arg1 ;
-(NSNumber *)touchIDSupport;
-(void)setDsKeyVersion:(NSString *)arg1 ;
-(void)setEncryptionHash:(NSString *)arg1 ;
-(void)setOldUserKey:(NSString *)arg1 ;
-(void)setCurrentUserKey:(NSString *)arg1 ;
-(void)setTokenVersion:(NSString *)arg1 ;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(void)setClientSecretTokenHmac:(NSString *)arg1 ;
-(void)setTouchIDSupport:(NSNumber *)arg1 ;
-(NSString *)tokenVersion;
-(NSString *)encryptionHash;
-(NSString *)currentUserKey;
-(NSString *)oldUserKey;
-(NSString *)selectedDeviceId;
-(NSString *)selectedDeviceType;
-(NSString *)twoStepVerificationCode;
-(NSString *)clientSecretTokenHmac;
-(NSString *)recoveryKey;
-(id)strippedPropertyListString:(id)arg1 ;
-(NSString *)xmlTokenSourceString;
-(NSString *)tokenSourceString;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(NSData *)initializationVector;
-(void)setInitializationVector:(NSData *)arg1 ;
-(void)setSelectedDeviceId:(NSString *)arg1 ;
-(void)setSelectedDeviceType:(NSString *)arg1 ;
-(void)setTwoStepVerificationCode:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(NSMutableDictionary *)parametersDictionary;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
@end

