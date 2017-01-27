/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSString;

@interface NTPBChannelMembershipRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSString* _channelID;
	NSString* _draftListID;
	BOOL _canAccessDrafts;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelID; 
@property (nonatomic,retain) NSString * channelID;                 //@synthesize channelID=_channelID - In the implementation block
@property (assign,nonatomic) BOOL hasCanAccessDrafts; 
@property (assign,nonatomic) BOOL canAccessDrafts;                 //@synthesize canAccessDrafts=_canAccessDrafts - In the implementation block
@property (nonatomic,readonly) BOOL hasDraftListID; 
@property (nonatomic,retain) NSString * draftListID;               //@synthesize draftListID=_draftListID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)channelID;
-(NSString *)draftListID;
-(BOOL)canAccessDrafts;
-(void)setChannelID:(NSString *)arg1 ;
-(void)setDraftListID:(NSString *)arg1 ;
-(void)setCanAccessDrafts:(BOOL)arg1 ;
-(BOOL)hasBase;
-(BOOL)hasChannelID;
-(void)setHasCanAccessDrafts:(BOOL)arg1 ;
-(BOOL)hasCanAccessDrafts;
-(BOOL)hasDraftListID;
@end

