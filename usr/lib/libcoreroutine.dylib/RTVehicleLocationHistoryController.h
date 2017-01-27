/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSManagedObjectContext;

@interface RTVehicleLocationHistoryController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)_getAllVehicleEventsFromHistory;
-(BOOL)_deleteVehicleEventsBeforeDate:(id)arg1 ;
-(id)initWithQueue:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_evaluateUsualLocationWithVehicleEvent:(id)arg1 ;
-(BOOL)_persistVehicleEventToHistory:(id)arg1 ;
-(void)onPurgeNotification:(id)arg1 ;
@end
