/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface NNMKProtoBatchedFetchResult : PBCodable <NSCopying> {

	NSData* _dateForRequestingMoreMessages;
	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSMutableArray* _messageAdditions;
	NSMutableArray* _messageDeletions;
	NSMutableArray* _messageUpdates;
	BOOL _shouldTrimDatabase;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                             //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                                  //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageAdditions;                    //@synthesize messageAdditions=_messageAdditions - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageUpdates;                      //@synthesize messageUpdates=_messageUpdates - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageDeletions;                    //@synthesize messageDeletions=_messageDeletions - In the implementation block
@property (nonatomic,readonly) BOOL hasDateForRequestingMoreMessages; 
@property (nonatomic,retain) NSData * dateForRequestingMoreMessages;               //@synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages - In the implementation block
@property (assign,nonatomic) BOOL hasShouldTrimDatabase; 
@property (assign,nonatomic) BOOL shouldTrimDatabase;                              //@synthesize shouldTrimDatabase=_shouldTrimDatabase - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(NSData *)dateSynced;
-(void)setDateForRequestingMoreMessages:(NSData *)arg1 ;
-(BOOL)hasDateForRequestingMoreMessages;
-(NSData *)dateForRequestingMoreMessages;
-(void)addMessageDeletion:(id)arg1 ;
-(unsigned long long)messageDeletionsCount;
-(void)clearMessageDeletions;
-(id)messageDeletionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)messageDeletions;
-(void)setMessageDeletions:(NSMutableArray *)arg1 ;
-(void)addMessageAddition:(id)arg1 ;
-(void)addMessageUpdate:(id)arg1 ;
-(unsigned long long)messageAdditionsCount;
-(void)clearMessageAdditions;
-(id)messageAdditionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)messageUpdatesCount;
-(void)clearMessageUpdates;
-(id)messageUpdateAtIndex:(unsigned long long)arg1 ;
-(void)setShouldTrimDatabase:(BOOL)arg1 ;
-(void)setHasShouldTrimDatabase:(BOOL)arg1 ;
-(BOOL)hasShouldTrimDatabase;
-(NSMutableArray *)messageAdditions;
-(void)setMessageAdditions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)messageUpdates;
-(void)setMessageUpdates:(NSMutableArray *)arg1 ;
-(BOOL)shouldTrimDatabase;
@end

