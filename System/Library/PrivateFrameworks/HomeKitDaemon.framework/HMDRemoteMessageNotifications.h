/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface HMDRemoteMessageNotifications : NSObject {

	NSMapTable* _sessionNotificationPayloads;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,retain) NSMapTable * sessionNotificationPayloads;                //@synthesize sessionNotificationPayloads=_sessionNotificationPayloads - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
+(void)initialize;
+(id)messagesWithNotificationResponses;
+(BOOL)messageExpectsNotificationResponse:(id)arg1 ;
-(id)init;
-(id)description;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMapTable *)sessionNotificationPayloads;
-(id)_notificationPayloadsForDevice:(id)arg1 ;
-(void)addNotificationPayload:(id)arg1 identifier:(id)arg2 device:(id)arg3 ;
-(void)removeNotificationPayloadWithIdentifier:(id)arg1 device:(id)arg2 ;
-(id)notificationPayloadWithIdentifier:(id)arg1 device:(id)arg2 ;
-(void)clearNotificationsForDevice:(id)arg1 ;
-(void)setSessionNotificationPayloads:(NSMapTable *)arg1 ;
@end

