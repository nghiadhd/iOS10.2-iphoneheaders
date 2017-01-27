/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCClassifiable.h>
#import <libobjc.A.dylib/FCFeedTransformationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSDate, NSArray;

@interface NTPBFeedItem : PBCodable <FCClassifiable, FCFeedTransformationItem, NSCopying> {

	unsigned long long _contentType;
	unsigned long long _feedHalfLifeMilliseconds;
	double _globalUserFeedback;
	long long _minimumNewsVersion;
	unsigned long long _order;
	unsigned long long _publishDateMilliseconds;
	long long _publisherArticleVersion;
	NSString* _articleID;
	NSString* _clusterID;
	NSString* _feedID;
	NSString* _sourceChannelID;
	NSMutableArray* _topicIDs;
	BOOL _hasCoverArt;
	BOOL _hasThumbnail;
	BOOL _isExplicitContent;
	BOOL _isFromBlockedStorefront;
	BOOL _isPaid;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (nonatomic,readonly) unsigned long long articleContentType; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) unsigned long long articleRecordModificationDateMilliseconds; 
@property (nonatomic,readonly) BOOL canBePurchased; 
@property (nonatomic,readonly) BOOL hasFeedID; 
@property (nonatomic,retain) NSString * feedID;                                                           //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                                        //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) BOOL hasOrder; 
@property (assign,nonatomic) unsigned long long order;                                                    //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) BOOL hasPublishDateMilliseconds; 
@property (assign,nonatomic) unsigned long long publishDateMilliseconds;                                  //@synthesize publishDateMilliseconds=_publishDateMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFeedHalfLifeMilliseconds; 
@property (assign,nonatomic) unsigned long long feedHalfLifeMilliseconds;                                 //@synthesize feedHalfLifeMilliseconds=_feedHalfLifeMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalUserFeedback; 
@property (assign,nonatomic) double globalUserFeedback;                                                   //@synthesize globalUserFeedback=_globalUserFeedback - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                                        //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelID; 
@property (nonatomic,retain) NSString * sourceChannelID;                                                  //@synthesize sourceChannelID=_sourceChannelID - In the implementation block
@property (assign,nonatomic) BOOL hasHasThumbnail; 
@property (assign,nonatomic) BOOL hasThumbnail;                                                           //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromBlockedStorefront; 
@property (assign,nonatomic) BOOL isFromBlockedStorefront;                                                //@synthesize isFromBlockedStorefront=_isFromBlockedStorefront - In the implementation block
@property (assign,nonatomic) BOOL hasIsExplicitContent; 
@property (assign,nonatomic) BOOL isExplicitContent;                                                      //@synthesize isExplicitContent=_isExplicitContent - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNewsVersion; 
@property (assign,nonatomic) long long minimumNewsVersion;                                                //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) unsigned long long contentType;                                              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIDs;                                                   //@synthesize topicIDs=_topicIDs - In the implementation block
@property (assign,nonatomic) BOOL hasHasCoverArt; 
@property (assign,nonatomic) BOOL hasCoverArt;                                                            //@synthesize hasCoverArt=_hasCoverArt - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaid; 
@property (assign,nonatomic) BOOL isPaid;                                                                 //@synthesize isPaid=_isPaid - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;                                           //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
+(id)cloudKitKeys;
+(id)feedItemWithCKFeedItemAndArticleRecord:(id)arg1 storefrontID:(id)arg2 ;
+(Class)topicIDsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSDate *)publishDate;
-(long long)compareOrderDescending:(id)arg1 ;
-(unsigned long long)articleRecordModificationDateMilliseconds;
-(BOOL)hasFeature:(id)arg1 ;
-(void)enumerateFeaturesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)canBePurchased;
-(NSString *)sourceFeedID;
-(unsigned long long)halfLife;
-(NSString *)publisherID;
-(BOOL)hasGlobalUserFeedback;
-(unsigned long long)articleContentType;
-(long long)compareOrder:(id)arg1 ;
-(BOOL)mustShow;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)order;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isExplicitContent;
-(BOOL)hasThumbnail;
-(unsigned long long)contentType;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(NSString *)feedID;
-(NSArray *)topicIDs;
-(void)setFeedID:(NSString *)arg1 ;
-(unsigned long long)publishDateMilliseconds;
-(NSString *)sourceChannelID;
-(NSString *)clusterID;
-(void)setContentType:(unsigned long long)arg1 ;
-(long long)publisherArticleVersion;
-(void)setTopicIDs:(NSArray *)arg1 ;
-(long long)minimumNewsVersion;
-(BOOL)isPaid;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(void)setClusterID:(NSString *)arg1 ;
-(void)setMinimumNewsVersion:(long long)arg1 ;
-(void)setIsPaid:(BOOL)arg1 ;
-(void)setIsExplicitContent:(BOOL)arg1 ;
-(unsigned long long)feedHalfLifeMilliseconds;
-(double)globalUserFeedback;
-(BOOL)isFromBlockedStorefront;
-(BOOL)hasGlobalUserFeedback;
-(void)setGlobalUserFeedback:(double)arg1 ;
-(void)setPublishDateMilliseconds:(unsigned long long)arg1 ;
-(void)setFeedHalfLifeMilliseconds:(unsigned long long)arg1 ;
-(void)setSourceChannelID:(NSString *)arg1 ;
-(void)setIsFromBlockedStorefront:(BOOL)arg1 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(void)setHasCoverArt:(BOOL)arg1 ;
-(BOOL)hasCoverArt;
-(void)setHasOrder:(BOOL)arg1 ;
-(BOOL)hasOrder;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(void)addTopicIDs:(id)arg1 ;
-(BOOL)hasFeedID;
-(BOOL)hasArticleID;
-(void)setHasPublishDateMilliseconds:(BOOL)arg1 ;
-(BOOL)hasPublishDateMilliseconds;
-(void)setHasFeedHalfLifeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasFeedHalfLifeMilliseconds;
-(void)setHasGlobalUserFeedback:(BOOL)arg1 ;
-(BOOL)hasClusterID;
-(BOOL)hasSourceChannelID;
-(void)setHasHasThumbnail:(BOOL)arg1 ;
-(BOOL)hasHasThumbnail;
-(void)setHasIsFromBlockedStorefront:(BOOL)arg1 ;
-(BOOL)hasIsFromBlockedStorefront;
-(void)setHasIsExplicitContent:(BOOL)arg1 ;
-(BOOL)hasIsExplicitContent;
-(void)setHasMinimumNewsVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumNewsVersion;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(void)clearTopicIDs;
-(unsigned long long)topicIDsCount;
-(id)topicIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasHasCoverArt:(BOOL)arg1 ;
-(BOOL)hasHasCoverArt;
-(void)setHasIsPaid:(BOOL)arg1 ;
-(BOOL)hasIsPaid;
@end

