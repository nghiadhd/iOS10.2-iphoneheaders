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

@class NSString, NSMutableArray;

@interface NTPBReadingListAddRemove : PBCodable <NSCopying> {

	long long _personalizationTreatmentId;
	int _addRemoveReadingListLocation;
	NSString* _articleId;
	int _articleType;
	int _backendArticleVersion;
	NSString* _campaignId;
	NSString* _campaignType;
	int _characterCount;
	NSString* _creativeId;
	int _feedType;
	NSString* _language;
	NSMutableArray* _namedEntities;
	int _nextArticleAffordanceType;
	NSString* _nextArticleAffordanceTypeFeedId;
	NSString* _notificationId;
	int _publisherArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	int _userAction;
	BOOL _fromNextArticleAffordanceTap;
	BOOL _isCoverArticle;
	BOOL _isDigitalReplicaAd;
	BOOL _isFreeArticle;
	BOOL _isNotificationArticle;
	BOOL _isPaidSubscriberToSourceChannel;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT25 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                    //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                          //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasAddRemoveReadingListLocation; 
@property (assign,nonatomic) int addRemoveReadingListLocation;                        //@synthesize addRemoveReadingListLocation=_addRemoveReadingListLocation - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                             //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                         //@synthesize articleType=_articleType - In the implementation block
@property (assign,nonatomic) BOOL hasCharacterCount; 
@property (assign,nonatomic) int characterCount;                                      //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                     //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                          //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                             //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                               //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                            //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                          //@synthesize userAction=_userAction - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                          //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                          //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                            //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasIsDigitalReplicaAd; 
@property (assign,nonatomic) BOOL isDigitalReplicaAd;                                 //@synthesize isDigitalReplicaAd=_isDigitalReplicaAd - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                            //@synthesize feedType=_feedType - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                    //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasIsFreeArticle; 
@property (assign,nonatomic) BOOL isFreeArticle;                                      //@synthesize isFreeArticle=_isFreeArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                   //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                 //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                   //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNotificationArticle; 
@property (assign,nonatomic) BOOL isNotificationArticle;                              //@synthesize isNotificationArticle=_isNotificationArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationId; 
@property (nonatomic,retain) NSString * notificationId;                               //@synthesize notificationId=_notificationId - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                    //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
@property (assign,nonatomic) BOOL hasIsCoverArticle; 
@property (assign,nonatomic) BOOL isCoverArticle;                                     //@synthesize isCoverArticle=_isCoverArticle - In the implementation block
@property (assign,nonatomic) BOOL hasFromNextArticleAffordanceTap; 
@property (assign,nonatomic) BOOL fromNextArticleAffordanceTap;                       //@synthesize fromNextArticleAffordanceTap=_fromNextArticleAffordanceTap - In the implementation block
@property (assign,nonatomic) BOOL hasNextArticleAffordanceType; 
@property (assign,nonatomic) int nextArticleAffordanceType;                           //@synthesize nextArticleAffordanceType=_nextArticleAffordanceType - In the implementation block
@property (nonatomic,readonly) BOOL hasNextArticleAffordanceTypeFeedId; 
@property (nonatomic,retain) NSString * nextArticleAffordanceTypeFeedId;              //@synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId - In the implementation block
+(Class)namedEntitiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguage;
-(int)characterCount;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(int)publisherArticleVersion;
-(int)backendArticleVersion;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(void)setBackendArticleVersion:(int)arg1 ;
-(NSString *)articleId;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(BOOL)hasArticleId;
-(BOOL)hasReferencedArticleId;
-(BOOL)hasSourceChannelId;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(NSString *)referencedArticleId;
-(NSString *)sourceChannelId;
-(BOOL)isUserSubscribedToFeed;
-(void)addNamedEntities:(id)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleType;
-(id)articleTypeAsString:(int)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(void)clearNamedEntities;
-(unsigned long long)namedEntitiesCount;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(BOOL)hasSurfacedByChannelId;
-(BOOL)hasSurfacedBySectionId;
-(BOOL)hasSurfacedByTopicId;
-(BOOL)hasSectionHeadlineId;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(BOOL)hasIsDigitalReplicaAd;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(NSMutableArray *)namedEntities;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(NSString *)surfacedByChannelId;
-(NSString *)surfacedBySectionId;
-(NSString *)surfacedByTopicId;
-(NSString *)sectionHeadlineId;
-(BOOL)isDigitalReplicaAd;
-(long long)personalizationTreatmentId;
-(void)setNotificationId:(NSString *)arg1 ;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(BOOL)hasNotificationId;
-(BOOL)hasCampaignId;
-(BOOL)hasCampaignType;
-(BOOL)hasCreativeId;
-(NSString *)notificationId;
-(NSString *)campaignId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(void)setNextArticleAffordanceTypeFeedId:(NSString *)arg1 ;
-(void)setCharacterCount:(int)arg1 ;
-(void)setHasCharacterCount:(BOOL)arg1 ;
-(BOOL)hasCharacterCount;
-(void)setIsFreeArticle:(BOOL)arg1 ;
-(void)setHasIsFreeArticle:(BOOL)arg1 ;
-(BOOL)hasIsFreeArticle;
-(void)setIsCoverArticle:(BOOL)arg1 ;
-(void)setHasIsCoverArticle:(BOOL)arg1 ;
-(BOOL)hasIsCoverArticle;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(int)nextArticleAffordanceType;
-(void)setNextArticleAffordanceType:(int)arg1 ;
-(void)setHasNextArticleAffordanceType:(BOOL)arg1 ;
-(BOOL)hasNextArticleAffordanceType;
-(id)nextArticleAffordanceTypeAsString:(int)arg1 ;
-(int)StringAsNextArticleAffordanceType:(id)arg1 ;
-(BOOL)hasNextArticleAffordanceTypeFeedId;
-(BOOL)isFreeArticle;
-(BOOL)isCoverArticle;
-(BOOL)isPaidSubscriberToSourceChannel;
-(NSString *)nextArticleAffordanceTypeFeedId;
-(void)setFromNextArticleAffordanceTap:(BOOL)arg1 ;
-(void)setHasFromNextArticleAffordanceTap:(BOOL)arg1 ;
-(BOOL)hasFromNextArticleAffordanceTap;
-(BOOL)fromNextArticleAffordanceTap;
-(void)setIsNotificationArticle:(BOOL)arg1 ;
-(void)setHasIsNotificationArticle:(BOOL)arg1 ;
-(BOOL)hasIsNotificationArticle;
-(BOOL)isNotificationArticle;
-(int)addRemoveReadingListLocation;
-(void)setAddRemoveReadingListLocation:(int)arg1 ;
-(void)setHasAddRemoveReadingListLocation:(BOOL)arg1 ;
-(BOOL)hasAddRemoveReadingListLocation;
@end

