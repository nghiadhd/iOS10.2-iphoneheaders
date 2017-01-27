/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDSoftwareUpdateProtocol <NSObject>
@required
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1;
-(void)getUpdateableFirstPartyAppMetadataWithCompletion:(/*^block*/id)arg1;
-(void)refreshUpdateCountWithCompletionBlock:(/*^block*/id)arg1;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1;
-(void)showApplicationUpdatesBulletin;
-(void)updateAll:(/*^block*/id)arg1;
-(void)migrateUpdatesStoreWithCompletionBlock:(/*^block*/id)arg1;

@end

