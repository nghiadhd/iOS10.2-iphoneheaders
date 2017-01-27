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

@class NSData, NSString, NSMutableArray;

@interface NTPBGroupViewExposure : PBCodable <NSCopying> {

	NSData* _feedViewExposureId;
	int _groupArticleCountInForYou;
	int _groupDisplayRankInForYou;
	NSString* _groupFeedId;
	int _groupType;
	NSMutableArray* _groupedArticleIds;
	BOOL _isSubscribedToGroupFeed;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                          //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupedArticleIds;              //@synthesize groupedArticleIds=_groupedArticleIds - In the implementation block
@property (assign,nonatomic) BOOL hasGroupDisplayRankInForYou; 
@property (assign,nonatomic) int groupDisplayRankInForYou;                    //@synthesize groupDisplayRankInForYou=_groupDisplayRankInForYou - In the implementation block
@property (assign,nonatomic) BOOL hasGroupArticleCountInForYou; 
@property (assign,nonatomic) int groupArticleCountInForYou;                   //@synthesize groupArticleCountInForYou=_groupArticleCountInForYou - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                   //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasIsSubscribedToGroupFeed; 
@property (assign,nonatomic) BOOL isSubscribedToGroupFeed;                    //@synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                     //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
+(Class)groupedArticleIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)groupType;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasGroupFeedId;
-(void)setGroupType:(int)arg1 ;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(void)setHasIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(BOOL)hasIsSubscribedToGroupFeed;
-(NSString *)groupFeedId;
-(BOOL)isSubscribedToGroupFeed;
-(void)addGroupedArticleIds:(id)arg1 ;
-(void)clearGroupedArticleIds;
-(unsigned long long)groupedArticleIdsCount;
-(id)groupedArticleIdsAtIndex:(unsigned long long)arg1 ;
-(void)setGroupDisplayRankInForYou:(int)arg1 ;
-(void)setHasGroupDisplayRankInForYou:(BOOL)arg1 ;
-(BOOL)hasGroupDisplayRankInForYou;
-(void)setGroupArticleCountInForYou:(int)arg1 ;
-(void)setHasGroupArticleCountInForYou:(BOOL)arg1 ;
-(BOOL)hasGroupArticleCountInForYou;
-(NSMutableArray *)groupedArticleIds;
-(void)setGroupedArticleIds:(NSMutableArray *)arg1 ;
-(int)groupDisplayRankInForYou;
-(int)groupArticleCountInForYou;
@end

