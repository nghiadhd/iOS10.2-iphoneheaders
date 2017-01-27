/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ACFPrincipal, ACFMessage, NSNumber, NSString, NSDate, NSMutableDictionary, NSData;


@protocol ACCAuthContextProtocol <NSObject>
@property (retain) ACFPrincipal * principal; 
@property (retain) ACFMessage * request; 
@property (assign) NSNumber * authenticationType; 
@property (retain) NSNumber * appID; 
@property (retain) NSString * encryptionHash; 
@property (retain) NSString * nonce; 
@property (retain) NSString * oldUserKey; 
@property (retain) NSString * currentUserKey; 
@property (retain) NSString * appIDKey; 
@property (retain) NSString * dsKeyVersion; 
@property (retain) NSString * sessionToken; 
@property (retain) NSString * tokenVersion; 
@property (retain) NSDate * creationDate; 
@property (nonatomic,readonly) NSMutableDictionary * parametersDictionary; 
@property (nonatomic,readonly) NSString * tokenSourceString; 
@property (nonatomic,retain) NSData * encryptionKey; 
@property (nonatomic,retain) NSData * initializationVector; 
@property (nonatomic,retain) NSNumber * personID; 
@property (nonatomic,retain) NSString * selectedDeviceId; 
@property (nonatomic,retain) NSString * selectedDeviceType; 
@property (nonatomic,retain) NSString * twoStepVerificationCode; 
@property (nonatomic,retain) NSString * serviceName; 
@property (nonatomic,retain) NSString * recoveryKey; 
@property (nonatomic,retain) NSString * clientSecretTokenHmac; 
@property (nonatomic,retain) NSNumber * clientSecretCreateDate; 
@property (nonatomic,retain) NSNumber * touchIDSupport; 
@property (nonatomic,readonly) NSString * xmlTokenSourceString; 
@optional
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecretCreateDate:(id)arg1;
-(NSNumber *)touchIDSupport;
-(void)setRecoveryKey:(id)arg1;
-(void)setClientSecretTokenHmac:(id)arg1;
-(void)setTouchIDSupport:(id)arg1;
-(NSString *)clientSecretTokenHmac;
-(NSString *)recoveryKey;
-(NSString *)xmlTokenSourceString;
-(void)setServiceName:(id)arg1;
-(NSString *)serviceName;

@required
+(id)authContextWithRequest:(id)arg1;
-(NSNumber *)authenticationType;
-(void)setAuthenticationType:(id)arg1;
-(NSString *)sessionToken;
-(void)setSessionToken:(id)arg1;
-(ACFMessage *)request;
-(void)setRequest:(id)arg1;
-(void)setAppID:(id)arg1;
-(NSNumber *)personID;
-(void)setPersonID:(id)arg1;
-(NSDate *)creationDate;
-(void)setCreationDate:(id)arg1;
-(void)setAppIDKey:(id)arg1;
-(NSNumber *)appID;
-(NSString *)appIDKey;
-(NSString *)dsKeyVersion;
-(void)setPrincipal:(id)arg1;
-(ACFPrincipal *)principal;
-(void)setDsKeyVersion:(id)arg1;
-(void)setEncryptionHash:(id)arg1;
-(void)setOldUserKey:(id)arg1;
-(void)setCurrentUserKey:(id)arg1;
-(void)setTokenVersion:(id)arg1;
-(NSString *)tokenVersion;
-(NSString *)encryptionHash;
-(NSString *)currentUserKey;
-(NSString *)oldUserKey;
-(NSString *)selectedDeviceId;
-(NSString *)selectedDeviceType;
-(NSString *)twoStepVerificationCode;
-(NSString *)tokenSourceString;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(id)arg1;
-(NSData *)initializationVector;
-(void)setInitializationVector:(id)arg1;
-(void)setSelectedDeviceId:(id)arg1;
-(void)setSelectedDeviceType:(id)arg1;
-(void)setTwoStepVerificationCode:(id)arg1;
-(NSMutableDictionary *)parametersDictionary;
-(NSString *)nonce;
-(void)setNonce:(id)arg1;

@end

