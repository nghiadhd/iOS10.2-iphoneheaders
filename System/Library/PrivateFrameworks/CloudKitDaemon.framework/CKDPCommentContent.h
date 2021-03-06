/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPCommentContent : PBCodable <NSCopying> {

	NSData* _comment;
	BOOL _encrypted;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasEncrypted; 
@property (assign,nonatomic) BOOL encrypted;                 //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) NSData * comment;               //@synthesize comment=_comment - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasComment;
-(void)setComment:(NSData *)arg1 ;
-(NSData *)comment;
-(BOOL)encrypted;
-(void)setEncrypted:(BOOL)arg1 ;
-(void)setHasEncrypted:(BOOL)arg1 ;
-(BOOL)hasEncrypted;
@end

