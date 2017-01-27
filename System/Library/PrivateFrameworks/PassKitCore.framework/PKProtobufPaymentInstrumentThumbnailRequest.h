/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying> {

	double _height;
	double _width;
	NSString* _manifestHash;
	NSString* _passIdentifier;
	SCD_Struct_PK7 _has;

}

@property (nonatomic,readonly) BOOL hasPassIdentifier; 
@property (nonatomic,retain) NSString * passIdentifier;              //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSString * manifestHash;                //@synthesize manifestHash=_manifestHash - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) double width;                           //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) double height;                          //@synthesize height=_height - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(double)height;
-(id)dictionaryRepresentation;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(void)setPassIdentifier:(NSString *)arg1 ;
-(void)setManifestHash:(NSString *)arg1 ;
-(NSString *)passIdentifier;
-(BOOL)hasPassIdentifier;
-(BOOL)hasManifestHash;
-(NSString *)manifestHash;
@end

