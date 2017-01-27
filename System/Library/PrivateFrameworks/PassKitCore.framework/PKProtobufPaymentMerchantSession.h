/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying> {

	unsigned long long _epochTimestamp;
	NSString* _displayName;
	NSString* _domain;
	NSString* _merchantIdentifier;
	NSString* _nonce;
	NSString* _sessionIdentifier;
	NSData* _signature;
	SCD_Struct_PK10 _has;

}

@property (nonatomic,readonly) BOOL hasMerchantIdentifier; 
@property (nonatomic,retain) NSString * merchantIdentifier;                  //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSString * sessionIdentifier;                   //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNonce; 
@property (nonatomic,retain) NSString * nonce;                               //@synthesize nonce=_nonce - In the implementation block
@property (assign,nonatomic) BOOL hasEpochTimestamp; 
@property (assign,nonatomic) unsigned long long epochTimestamp;              //@synthesize epochTimestamp=_epochTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                             //@synthesize signature=_signature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)sessionIdentifier;
-(NSString *)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(unsigned long long)epochTimestamp;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setEpochTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasMerchantIdentifier;
-(BOOL)hasSessionIdentifier;
-(BOOL)hasNonce;
-(void)setHasEpochTimestamp:(BOOL)arg1 ;
-(BOOL)hasEpochTimestamp;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(NSData *)signature;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)hasDomain;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
@end

