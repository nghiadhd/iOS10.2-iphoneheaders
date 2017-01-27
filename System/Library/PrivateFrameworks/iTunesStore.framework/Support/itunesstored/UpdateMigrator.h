/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ISLoadURLBagOperation, NSMutableArray;

@interface UpdateMigrator : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned long long _updateType;
	ISLoadURLBagOperation* _loadURLBagOperation;
	NSMutableArray* _migrations;

}
+(id)sharedInstance;
-(void)_queueMigration:(id)arg1 ;
-(void)_loadBagAndPerformMigration;
-(void)destroyInstance;
-(void)restoreDemotedBundleIdentifiers:(id)arg1 options:(id)arg2 ;
-(BOOL)performMigration:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)_performMigration;
@end

