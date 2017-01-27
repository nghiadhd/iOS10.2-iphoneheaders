/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBPaymentRecord;

@interface _INPBRequestPaymentIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBPaymentRecord* _paymentRecord;

}

@property (nonatomic,readonly) BOOL hasPaymentRecord; 
@property (nonatomic,retain) _INPBPaymentRecord * paymentRecord;              //@synthesize paymentRecord=_paymentRecord - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(_INPBPaymentRecord *)paymentRecord;
-(void)setPaymentRecord:(_INPBPaymentRecord *)arg1 ;
-(BOOL)hasPaymentRecord;
@end

