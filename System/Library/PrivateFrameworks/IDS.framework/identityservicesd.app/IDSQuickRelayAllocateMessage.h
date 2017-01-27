/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSArray, NSNumber;

@interface IDSQuickRelayAllocateMessage : IDSMessage <NSCopying> {

	NSData* _requestID;
	NSString* _requestIDStr;
	NSData* _IDSSessionID;
	NSString* _senderURI;
	NSArray* _recipients;
	NSData* _existingRelayIP;
	NSData* _existingRelaySessionToken;
	NSData* _existingRelaySignature;
	NSData* _senderExternalIP;
	NSString* _appID;
	NSNumber* _provider;
	NSNumber* _allocateProtocolVersion;
	NSString* _protocol;
	NSNumber* _isSharedSession;
	NSString* _testOptions;
	NSData* _relayIP;
	NSNumber* _relayPort;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	NSData* _relaySessionID;
	NSNumber* _relayExpiryTimeStamp;
	NSData* _inferredExternalIP;
	NSNumber* _relayProtocolVersion;
	NSData* _relaySoftwareVersion;
	NSNumber* _errorCode;
	NSString* _errorMessage;
	NSNumber* _wantsDeliveryStatus;

}

@property (copy) NSData * requestID;                              //@synthesize requestID=_requestID - In the implementation block
@property (copy) NSString * requestIDStr;                         //@synthesize requestIDStr=_requestIDStr - In the implementation block
@property (copy) NSString * senderURI;                            //@synthesize senderURI=_senderURI - In the implementation block
@property (copy) NSData * IDSSessionID;                           //@synthesize IDSSessionID=_IDSSessionID - In the implementation block
@property (copy) NSArray * recipients;                            //@synthesize recipients=_recipients - In the implementation block
@property (copy) NSData * existingRelayIP;                        //@synthesize existingRelayIP=_existingRelayIP - In the implementation block
@property (copy) NSData * existingRelaySessionToken;              //@synthesize existingRelaySessionToken=_existingRelaySessionToken - In the implementation block
@property (copy) NSData * existingRelaySignature;                 //@synthesize existingRelaySignature=_existingRelaySignature - In the implementation block
@property (copy) NSData * senderExternalIP;                       //@synthesize senderExternalIP=_senderExternalIP - In the implementation block
@property (copy) NSString * appID;                                //@synthesize appID=_appID - In the implementation block
@property (copy) NSNumber * allocateProtocolVersion;              //@synthesize allocateProtocolVersion=_allocateProtocolVersion - In the implementation block
@property (copy) NSString * protocol;                             //@synthesize protocol=_protocol - In the implementation block
@property (copy) NSNumber * isSharedSession;                      //@synthesize isSharedSession=_isSharedSession - In the implementation block
@property (copy) NSNumber * provider;                             //@synthesize provider=_provider - In the implementation block
@property (copy) NSString * testOptions;                          //@synthesize testOptions=_testOptions - In the implementation block
@property (copy) NSData * relayIP;                                //@synthesize relayIP=_relayIP - In the implementation block
@property (copy) NSNumber * relayPort;                            //@synthesize relayPort=_relayPort - In the implementation block
@property (copy) NSData * relaySessionToken;                      //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (copy) NSData * relaySessionKey;                        //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (copy) NSData * relaySessionID;                         //@synthesize relaySessionID=_relaySessionID - In the implementation block
@property (copy) NSNumber * relayExpiryTimeStamp;                 //@synthesize relayExpiryTimeStamp=_relayExpiryTimeStamp - In the implementation block
@property (copy) NSData * inferredExternalIP;                     //@synthesize inferredExternalIP=_inferredExternalIP - In the implementation block
@property (copy) NSNumber * relayProtocolVersion;                 //@synthesize relayProtocolVersion=_relayProtocolVersion - In the implementation block
@property (copy) NSData * relaySoftwareVersion;                   //@synthesize relaySoftwareVersion=_relaySoftwareVersion - In the implementation block
@property (copy) NSNumber * errorCode;                            //@synthesize errorCode=_errorCode - In the implementation block
@property (copy) NSString * errorMessage;                         //@synthesize errorMessage=_errorMessage - In the implementation block
@property (copy) NSNumber * wantsDeliveryStatus;                  //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
-(void)setRelaySessionToken:(NSData *)arg1 ;
-(NSData *)relaySessionID;
-(void)setRelaySessionID:(NSData *)arg1 ;
-(NSData *)relaySessionKey;
-(void)setRelaySessionKey:(NSData *)arg1 ;
-(NSData *)relaySessionToken;
-(NSString *)requestIDStr;
-(NSData *)IDSSessionID;
-(void)setRequestIDStr:(NSString *)arg1 ;
-(void)setIDSSessionID:(NSData *)arg1 ;
-(void)setSenderURI:(NSString *)arg1 ;
-(void)setExistingRelayIP:(NSData *)arg1 ;
-(void)setExistingRelaySessionToken:(NSData *)arg1 ;
-(void)setExistingRelaySignature:(NSData *)arg1 ;
-(void)setSenderExternalIP:(NSData *)arg1 ;
-(void)setAllocateProtocolVersion:(NSNumber *)arg1 ;
-(void)setRelayProtocolVersion:(NSNumber *)arg1 ;
-(NSString *)senderURI;
-(NSData *)senderExternalIP;
-(NSData *)relaySoftwareVersion;
-(NSNumber *)relayPort;
-(NSData *)relayIP;
-(NSNumber *)relayExpiryTimeStamp;
-(unsigned long long)requestLength;
-(NSData *)existingRelayIP;
-(NSData *)existingRelaySessionToken;
-(NSData *)existingRelaySignature;
-(NSNumber *)allocateProtocolVersion;
-(void)setRelayIP:(NSData *)arg1 ;
-(void)setRelayPort:(NSNumber *)arg1 ;
-(void)setRelayExpiryTimeStamp:(NSNumber *)arg1 ;
-(NSNumber *)relayProtocolVersion;
-(void)setRelaySoftwareVersion:(NSData *)arg1 ;
-(NSData *)inferredExternalIP;
-(void)setInferredExternalIP:(NSData *)arg1 ;
-(NSNumber *)isSharedSession;
-(void)setIsSharedSession:(NSNumber *)arg1 ;
-(NSString *)testOptions;
-(void)setTestOptions:(NSString *)arg1 ;
-(unsigned long long)_recipientDataSize;
-(void)setProtocol:(NSString *)arg1 ;
-(id)messageBody;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)protocol;
-(NSNumber *)provider;
-(void)setProvider:(NSNumber *)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)errorCode;
-(NSNumber *)wantsDeliveryStatus;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsIntegerUniqueIDs;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBagKey;
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(long long)command;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(id)requiredKeys;
-(NSData *)requestID;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)appID;
-(long long)responseCommand;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setRequestID:(NSData *)arg1 ;
@end

