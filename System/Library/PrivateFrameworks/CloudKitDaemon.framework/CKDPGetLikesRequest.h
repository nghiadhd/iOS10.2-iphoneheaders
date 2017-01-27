/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLikedId;

@interface CKDPGetLikesRequest : PBRequest <NSCopying> {

	CKDPLikedId* _identifier;
	unsigned _limit;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPLikedId * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                        //@synthesize limit=_limit - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPLikedId *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPLikedId *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasIdentifier;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
-(void)setHasLimit:(BOOL)arg1 ;
-(BOOL)hasLimit;
@end

