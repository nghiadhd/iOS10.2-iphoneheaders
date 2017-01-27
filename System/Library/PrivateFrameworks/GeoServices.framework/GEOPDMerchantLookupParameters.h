/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOLocation;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _transactionLocationAge;
	double _transactionTimestamp;
	NSString* _merchantCode;
	NSString* _paymentNetwork;
	NSString* _rawMerchantCode;
	GEOLocation* _transactionLocation;
	SCD_Struct_GE45 _has;

}

@property (nonatomic,readonly) BOOL hasPaymentNetwork; 
@property (nonatomic,retain) NSString * paymentNetwork;                      //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantCode; 
@property (nonatomic,retain) NSString * merchantCode;                        //@synthesize merchantCode=_merchantCode - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionTimestamp; 
@property (assign,nonatomic) double transactionTimestamp;                    //@synthesize transactionTimestamp=_transactionTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation;              //@synthesize transactionLocation=_transactionLocation - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionLocationAge; 
@property (assign,nonatomic) double transactionLocationAge;                  //@synthesize transactionLocationAge=_transactionLocationAge - In the implementation block
@property (nonatomic,readonly) BOOL hasRawMerchantCode; 
@property (nonatomic,retain) NSString * rawMerchantCode;                     //@synthesize rawMerchantCode=_rawMerchantCode - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasPaymentNetwork;
-(BOOL)hasMerchantCode;
-(void)setTransactionTimestamp:(double)arg1 ;
-(void)setHasTransactionTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionTimestamp;
-(BOOL)hasTransactionLocation;
-(void)setTransactionLocationAge:(double)arg1 ;
-(void)setHasTransactionLocationAge:(BOOL)arg1 ;
-(BOOL)hasTransactionLocationAge;
-(BOOL)hasRawMerchantCode;
-(NSString *)paymentNetwork;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSString *)merchantCode;
-(void)setMerchantCode:(NSString *)arg1 ;
-(double)transactionTimestamp;
-(GEOLocation *)transactionLocation;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(double)transactionLocationAge;
-(NSString *)rawMerchantCode;
-(void)setRawMerchantCode:(NSString *)arg1 ;
@end

