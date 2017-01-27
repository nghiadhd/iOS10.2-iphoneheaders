/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSMutableArray, NSString;

@interface SYBatchSyncChunk : PBCodable <NSCopying> {

	unsigned _chunkIndex;
	SYMessageHeader* _header;
	NSMutableArray* _objects;
	NSString* _syncID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                     //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) unsigned chunkIndex;                   //@synthesize chunkIndex=_chunkIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
+(Class)objectsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(SYMessageHeader *)header;
-(NSMutableArray *)objects;
-(void)setSyncID:(NSString *)arg1 ;
-(NSString *)syncID;
-(void)setChunkIndex:(unsigned)arg1 ;
-(unsigned)chunkIndex;
-(void)addObjects:(id)arg1 ;
-(unsigned long long)objectsCount;
-(void)clearObjects;
-(id)objectsAtIndex:(unsigned long long)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
@end

