/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCMutableReadingHistoryItem.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable <FCMutableReadingHistoryItem, FCKeyValueStoreCoding, NSCopying> {

	unsigned long long _maxVersionRead;
	NSString* _articleID;
	unsigned _flags;
	NTPBDate* _lastVisitedDate;
	SCD_Struct_NT5 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSDate * lastVisitedAt; 
@property (nonatomic,readonly) unsigned long long maxVersionRead; 
@property (nonatomic,readonly) BOOL hasArticleBeenRead; 
@property (nonatomic,readonly) BOOL hasArticleBeenSeen; 
@property (nonatomic,readonly) BOOL hasArticleBeenMarkedOffensive; 
@property (nonatomic,readonly) BOOL hasArticleBeenConsumed; 
@property (nonatomic,readonly) unsigned long long articleLikingStatus; 
@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedDate;                            //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                        //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionRead; 
@property (assign,nonatomic) unsigned long long maxVersionRead;                     //@synthesize maxVersionRead=_maxVersionRead - In the implementation block
+(id)readingHistoryItemWithCKRecord:(id)arg1 ;
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(NSString *)identifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)lastVisitedAt;
-(BOOL)hasArticleBeenRead;
-(BOOL)hasArticleBeenSeen;
-(BOOL)hasArticleBeenConsumed;
-(void)setHasArticleBeenRead:(BOOL)arg1 ;
-(void)setLastVisitedAt:(NSDate *)arg1 ;
-(void)setHasArticleBeenSeen:(BOOL)arg1 ;
-(unsigned long long)articleLikingStatus;
-(void)setArticleLikingStatus:(unsigned long long)arg1 ;
-(BOOL)hasArticleBeenMarkedOffensive;
-(void)setHasArticleBeenMarkedOffensive:(BOOL)arg1 ;
-(void)setHasArticleBeenConsumed:(BOOL)arg1 ;
-(void)writeToKeyValuePair:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(NSString *)articleID;
-(unsigned long long)maxVersionRead;
-(void)setMaxVersionRead:(unsigned long long)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(NTPBDate *)lastVisitedDate;
-(void)setLastVisitedDate:(NTPBDate *)arg1 ;
-(BOOL)hasArticleID;
-(BOOL)hasLastVisitedDate;
-(void)setHasMaxVersionRead:(BOOL)arg1 ;
-(BOOL)hasMaxVersionRead;
@end

