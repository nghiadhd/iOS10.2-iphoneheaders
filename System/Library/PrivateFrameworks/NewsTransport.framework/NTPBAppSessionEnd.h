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

@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {

	long long _appSessionDuration;
	int _channelSubscriptionCount;
	NSMutableArray* _lastVisibleViews;
	NSMutableArray* _notificationChannelIds;
	int _notificationEnabledChannelsCount;
	int _notitificationsEnabledChannelsCount;
	NSMutableArray* _paidSubscriptionChannelIds;
	int _sessionEndReason;
	int _topicSubscriptionCount;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasSessionEndReason; 
@property (assign,nonatomic) int sessionEndReason;                                     //@synthesize sessionEndReason=_sessionEndReason - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastVisibleViews;                        //@synthesize lastVisibleViews=_lastVisibleViews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSubscriptionCount; 
@property (assign,nonatomic) int channelSubscriptionCount;                             //@synthesize channelSubscriptionCount=_channelSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopicSubscriptionCount; 
@property (assign,nonatomic) int topicSubscriptionCount;                               //@synthesize topicSubscriptionCount=_topicSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppSessionDuration; 
@property (assign,nonatomic) long long appSessionDuration;                             //@synthesize appSessionDuration=_appSessionDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * paidSubscriptionChannelIds;              //@synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasNotitificationsEnabledChannelsCount; 
@property (assign,nonatomic) int notitificationsEnabledChannelsCount;                  //@synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationChannelIds;                  //@synthesize notificationChannelIds=_notificationChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationEnabledChannelsCount; 
@property (assign,nonatomic) int notificationEnabledChannelsCount;                     //@synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount - In the implementation block
+(Class)paidSubscriptionChannelIdsType;
+(Class)notificationChannelIdsType;
+(Class)lastVisibleViewsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addPaidSubscriptionChannelIds:(id)arg1 ;
-(void)addNotificationChannelIds:(id)arg1 ;
-(void)setChannelSubscriptionCount:(int)arg1 ;
-(void)setHasChannelSubscriptionCount:(BOOL)arg1 ;
-(BOOL)hasChannelSubscriptionCount;
-(void)setTopicSubscriptionCount:(int)arg1 ;
-(void)setHasTopicSubscriptionCount:(BOOL)arg1 ;
-(BOOL)hasTopicSubscriptionCount;
-(void)clearPaidSubscriptionChannelIds;
-(unsigned long long)paidSubscriptionChannelIdsCount;
-(id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setNotitificationsEnabledChannelsCount:(int)arg1 ;
-(void)setHasNotitificationsEnabledChannelsCount:(BOOL)arg1 ;
-(BOOL)hasNotitificationsEnabledChannelsCount;
-(void)clearNotificationChannelIds;
-(unsigned long long)notificationChannelIdsCount;
-(id)notificationChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setNotificationEnabledChannelsCount:(int)arg1 ;
-(void)setHasNotificationEnabledChannelsCount:(BOOL)arg1 ;
-(BOOL)hasNotificationEnabledChannelsCount;
-(int)channelSubscriptionCount;
-(int)topicSubscriptionCount;
-(NSMutableArray *)paidSubscriptionChannelIds;
-(void)setPaidSubscriptionChannelIds:(NSMutableArray *)arg1 ;
-(int)notitificationsEnabledChannelsCount;
-(NSMutableArray *)notificationChannelIds;
-(void)setNotificationChannelIds:(NSMutableArray *)arg1 ;
-(int)notificationEnabledChannelsCount;
-(void)addLastVisibleViews:(id)arg1 ;
-(int)sessionEndReason;
-(void)setSessionEndReason:(int)arg1 ;
-(void)setHasSessionEndReason:(BOOL)arg1 ;
-(BOOL)hasSessionEndReason;
-(void)clearLastVisibleViews;
-(unsigned long long)lastVisibleViewsCount;
-(id)lastVisibleViewsAtIndex:(unsigned long long)arg1 ;
-(void)setAppSessionDuration:(long long)arg1 ;
-(void)setHasAppSessionDuration:(BOOL)arg1 ;
-(BOOL)hasAppSessionDuration;
-(NSMutableArray *)lastVisibleViews;
-(void)setLastVisibleViews:(NSMutableArray *)arg1 ;
-(long long)appSessionDuration;
@end

