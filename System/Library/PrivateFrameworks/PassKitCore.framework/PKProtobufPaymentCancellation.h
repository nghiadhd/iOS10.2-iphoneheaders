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

@class NSString;

@interface PKProtobufPaymentCancellation : PBCodable <NSCopying> {

	NSString* _remotePaymentRequestIdentifier;

}

@property (nonatomic,readonly) BOOL hasRemotePaymentRequestIdentifier; 
@property (nonatomic,retain) NSString * remotePaymentRequestIdentifier;              //@synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
@end

