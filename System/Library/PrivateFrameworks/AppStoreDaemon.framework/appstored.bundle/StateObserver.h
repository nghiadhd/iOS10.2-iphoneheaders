/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface StateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _stateUpdates;
	NSMutableDictionary* _stateObservers;

}
+(id)defaultObserver;
-(id)copyUpdateForDownloadID:(long long)arg1 ;
-(id)copyUpdateForInstallID:(long long)arg1 ;
-(void)removeUpdateForJobID:(long long)arg1 ;
-(void)relateDownloadID:(long long)arg1 toJobID:(long long)arg2 ;
-(void)updateDownloadID:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeUpdateForInstallID:(long long)arg1 ;
-(id)_copyUpdateForEntityID:(long long)arg1 ;
-(void)_registerObserver:(id)arg1 forEntity:(long long)arg2 ;
-(void)_relateChildID:(long long)arg1 toParentID:(long long)arg2 ;
-(void)_removeUpdateWithEntityID:(long long)arg1 ;
-(void)_updateEntityID:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_fetchOrCreateUpdateWithEntityID:(long long)arg1 ;
-(void)_notifyObserversForUpdate:(id)arg1 ;
-(id)copyUpdateForJobID:(long long)arg1 ;
-(void)registerObserver:(id)arg1 forJobID:(long long)arg2 ;
-(void)relateInstallID:(long long)arg1 toJobID:(long long)arg2 ;
-(void)removeUpdateForDownloadID:(long long)arg1 ;
-(void)updateInstallID:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)updateJobID:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

