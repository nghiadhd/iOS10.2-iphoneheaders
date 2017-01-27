/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCNotificationsConfiguration : NSObject {

	NSArray* _preSubscribedNotificationsChannelIDs;
	NSArray* _recommendedNotificationChannels;

}

@property (nonatomic,readonly) NSArray * preSubscribedNotificationsChannelIDs;              //@synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs - In the implementation block
@property (nonatomic,readonly) NSArray * recommendedNotificationChannelIDs; 
@property (nonatomic,readonly) NSArray * recommendedNotificationChannels;                   //@synthesize recommendedNotificationChannels=_recommendedNotificationChannels - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDefaults;
-(NSArray *)recommendedNotificationChannels;
-(id)initWithPresubscribedChannels:(id)arg1 recommendedPBNotificationChannels:(id)arg2 ;
-(NSArray *)recommendedNotificationChannelIDs;
-(NSArray *)preSubscribedNotificationsChannelIDs;
@end

