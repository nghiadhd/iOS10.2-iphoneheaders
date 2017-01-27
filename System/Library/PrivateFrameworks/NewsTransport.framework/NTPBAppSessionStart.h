/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBAppSessionStart : PBCodable <NSCopying> {

	long long _lastAppSessionTimestamp;
	NSString* _campaignId;
	NSString* _campaignType;
	int _channelSubscriptionCount;
	NSString* _creativeId;
	NSString* _notificationArticleId;
	NSMutableArray* _notificationChannelIds;
	int _notificationEnabledChannelsCount;
	NSString* _notificationId;
	NSString* _notificationSenderChannelId;
	NSString* _notificationSourceChannelId;
	int _notitificationsEnabledChannelsCount;
	NSMutableArray* _paidSubscriptionChannelIds;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	int _topicSubscriptionCount;
	NSString* _userActivityType;
	NSMutableArray* _visibleViews;
	BOOL _startedFromNotification;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasLastAppSessionTimestamp; 
@property (assign,nonatomic) long long lastAppSessionTimestamp;                        //@synthesize lastAppSessionTimestamp=_lastAppSessionTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleViews;                            //@synthesize visibleViews=_visibleViews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSubscriptionCount; 
@property (assign,nonatomic) int channelSubscriptionCount;                             //@synthesize channelSubscriptionCount=_channelSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopicSubscriptionCount; 
@property (assign,nonatomic) int topicSubscriptionCount;                               //@synthesize topicSubscriptionCount=_topicSubscriptionCount - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                    //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                  //@synthesize referringUrl=_referringUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityType; 
@property (nonatomic,retain) NSString * userActivityType;                              //@synthesize userActivityType=_userActivityType - In the implementation block
@property (nonatomic,retain) NSMutableArray * paidSubscriptionChannelIds;              //@synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasStartedFromNotification; 
@property (assign,nonatomic) BOOL startedFromNotification;                             //@synthesize startedFromNotification=_startedFromNotification - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationId; 
@property (nonatomic,retain) NSString * notificationId;                                //@synthesize notificationId=_notificationId - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationSenderChannelId; 
@property (nonatomic,retain) NSString * notificationSenderChannelId;                   //@synthesize notificationSenderChannelId=_notificationSenderChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationSourceChannelId; 
@property (nonatomic,retain) NSString * notificationSourceChannelId;                   //@synthesize notificationSourceChannelId=_notificationSourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasNotitificationsEnabledChannelsCount; 
@property (assign,nonatomic) int notitificationsEnabledChannelsCount;                  //@synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationChannelIds;                  //@synthesize notificationChannelIds=_notificationChannelIds - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationArticleId; 
@property (nonatomic,retain) NSString * notificationArticleId;                         //@synthesize notificationArticleId=_notificationArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                    //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                  //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                    //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationEnabledChannelsCount; 
@property (assign,nonatomic) int notificationEnabledChannelsCount;                     //@synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount - In the implementation block
+(Class)visibleViewsType;
+(Class)paidSubscriptionChannelIdsType;
+(Class)notificationChannelIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addVisibleViews:(id)arg1 ;
-(void)addPaidSubscriptionChannelIds:(id)arg1 ;
-(void)addNotificationChannelIds:(id)arg1 ;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(void)setReferringUrl:(NSString *)arg1 ;
-(void)setUserActivityType:(NSString *)arg1 ;
-(void)setNotificationId:(NSString *)arg1 ;
-(void)setNotificationSenderChannelId:(NSString *)arg1 ;
-(void)setNotificationSourceChannelId:(NSString *)arg1 ;
-(void)setNotificationArticleId:(NSString *)arg1 ;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setLastAppSessionTimestamp:(long long)arg1 ;
-(void)setHasLastAppSessionTimestamp:(BOOL)arg1 ;
-(BOOL)hasLastAppSessionTimestamp;
-(void)clearVisibleViews;
-(unsigned long long)visibleViewsCount;
-(id)visibleViewsAtIndex:(unsigned long long)arg1 ;
-(void)setChannelSubscriptionCount:(int)arg1 ;
-(void)setHasChannelSubscriptionCount:(BOOL)arg1 ;
-(BOOL)hasChannelSubscriptionCount;
-(void)setTopicSubscriptionCount:(int)arg1 ;
-(void)setHasTopicSubscriptionCount:(BOOL)arg1 ;
-(BOOL)hasTopicSubscriptionCount;
-(BOOL)hasReferringSourceApplication;
-(BOOL)hasReferringUrl;
-(BOOL)hasUserActivityType;
-(void)clearPaidSubscriptionChannelIds;
-(unsigned long long)paidSubscriptionChannelIdsCount;
-(id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setStartedFromNotification:(BOOL)arg1 ;
-(void)setHasStartedFromNotification:(BOOL)arg1 ;
-(BOOL)hasStartedFromNotification;
-(BOOL)hasNotificationId;
-(BOOL)hasNotificationSenderChannelId;
-(BOOL)hasNotificationSourceChannelId;
-(void)setNotitificationsEnabledChannelsCount:(int)arg1 ;
-(void)setHasNotitificationsEnabledChannelsCount:(BOOL)arg1 ;
-(BOOL)hasNotitificationsEnabledChannelsCount;
-(void)clearNotificationChannelIds;
-(unsigned long long)notificationChannelIdsCount;
-(id)notificationChannelIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNotificationArticleId;
-(BOOL)hasCampaignId;
-(BOOL)hasCampaignType;
-(BOOL)hasCreativeId;
-(void)setNotificationEnabledChannelsCount:(int)arg1 ;
-(void)setHasNotificationEnabledChannelsCount:(BOOL)arg1 ;
-(BOOL)hasNotificationEnabledChannelsCount;
-(long long)lastAppSessionTimestamp;
-(NSMutableArray *)visibleViews;
-(void)setVisibleViews:(NSMutableArray *)arg1 ;
-(int)channelSubscriptionCount;
-(int)topicSubscriptionCount;
-(NSString *)referringSourceApplication;
-(NSString *)referringUrl;
-(NSString *)userActivityType;
-(NSMutableArray *)paidSubscriptionChannelIds;
-(void)setPaidSubscriptionChannelIds:(NSMutableArray *)arg1 ;
-(BOOL)startedFromNotification;
-(NSString *)notificationId;
-(NSString *)notificationSenderChannelId;
-(NSString *)notificationSourceChannelId;
-(int)notitificationsEnabledChannelsCount;
-(NSMutableArray *)notificationChannelIds;
-(void)setNotificationChannelIds:(NSMutableArray *)arg1 ;
-(NSString *)notificationArticleId;
-(NSString *)campaignId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(int)notificationEnabledChannelsCount;
@end

