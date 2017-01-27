/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface FMXPCNotificationsUtil : NSObject {

	NSMutableDictionary* _darwinNotificationHandlers;
	NSMutableDictionary* _distributedNotificationHandlers;
	NSObject*<OS_dispatch_queue> _modificationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * darwinNotificationHandlers;                   //@synthesize darwinNotificationHandlers=_darwinNotificationHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * distributedNotificationHandlers;              //@synthesize distributedNotificationHandlers=_distributedNotificationHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modificationQueue;                     //@synthesize modificationQueue=_modificationQueue - In the implementation block
+(id)sharedInstance;
+(void)handleDarwinNotificationsWithHandlers:(id)arg1 ;
+(void)handleDistributedNotificationsWithHandlers:(id)arg1 ;
-(id)init;
-(void)registerHandler:(/*^block*/id)arg1 forDarwinNotification:(id)arg2 ;
-(void)_didReceiveDarwinNotification:(id)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 forDistributedNotification:(id)arg2 ;
-(void)_didReceiveDistributedNotification:(id)arg1 withContext:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)modificationQueue;
-(NSMutableDictionary *)darwinNotificationHandlers;
-(NSMutableDictionary *)distributedNotificationHandlers;
-(BOOL)isHandlerRegisteredForDarwinNotification:(id)arg1 ;
-(void)deregisterHandlerForDarwinNotification:(id)arg1 ;
-(BOOL)isHandlerRegisteredForDistributedNotification:(id)arg1 ;
-(void)deregisterHandlerForDistributedNotification:(id)arg1 ;
-(void)setDarwinNotificationHandlers:(NSMutableDictionary *)arg1 ;
-(void)setDistributedNotificationHandlers:(NSMutableDictionary *)arg1 ;
-(void)setModificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

