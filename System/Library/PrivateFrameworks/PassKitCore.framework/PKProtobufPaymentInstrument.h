/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying> {

	double _ingestedDate;
	NSMutableArray* _associatedWebDomains;
	NSString* _displayName;
	NSData* _manifestHash;
	NSString* _passID;
	NSMutableArray* _paymentApplications;
	NSString* _primaryAccountIdentifier;
	NSString* _primaryAccountNumberSuffix;
	BOOL _supportsAutomaticSelection;
	SCD_Struct_PK7 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasPassID; 
@property (nonatomic,retain) NSString * passID;                                  //@synthesize passID=_passID - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentApplications;               //@synthesize paymentApplications=_paymentApplications - In the implementation block
@property (assign,nonatomic) BOOL hasIngestedDate; 
@property (assign,nonatomic) double ingestedDate;                                //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAccountNumberSuffix; 
@property (nonatomic,retain) NSString * primaryAccountNumberSuffix;              //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSData * manifestHash;                              //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAccountIdentifier; 
@property (nonatomic,retain) NSString * primaryAccountIdentifier;                //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * associatedWebDomains;              //@synthesize associatedWebDomains=_associatedWebDomains - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsAutomaticSelection; 
@property (assign,nonatomic) BOOL supportsAutomaticSelection;                    //@synthesize supportsAutomaticSelection=_supportsAutomaticSelection - In the implementation block
+(Class)paymentApplicationsType;
+(Class)associatedWebDomainsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSMutableArray *)associatedWebDomains;
-(NSMutableArray *)paymentApplications;
-(BOOL)supportsAutomaticSelection;
-(void)setPaymentApplications:(NSMutableArray *)arg1 ;
-(void)setAssociatedWebDomains:(NSMutableArray *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(NSString *)passID;
-(void)setIngestedDate:(double)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setSupportsAutomaticSelection:(BOOL)arg1 ;
-(void)addPaymentApplications:(id)arg1 ;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)hasManifestHash;
-(void)addAssociatedWebDomains:(id)arg1 ;
-(unsigned long long)paymentApplicationsCount;
-(void)clearPaymentApplications;
-(id)paymentApplicationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)associatedWebDomainsCount;
-(void)clearAssociatedWebDomains;
-(id)associatedWebDomainsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPassID;
-(void)setHasIngestedDate:(BOOL)arg1 ;
-(BOOL)hasIngestedDate;
-(BOOL)hasPrimaryAccountNumberSuffix;
-(BOOL)hasPrimaryAccountIdentifier;
-(void)setHasSupportsAutomaticSelection:(BOOL)arg1 ;
-(BOOL)hasSupportsAutomaticSelection;
-(NSString *)primaryAccountIdentifier;
-(double)ingestedDate;
-(NSData *)manifestHash;
-(NSString *)primaryAccountNumberSuffix;
@end

