/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_KSTextReplacementStoreProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, _KSTextReplacementCoreDataStore, _KSCloudKitManager, NSString;

@interface _KSTextReplacementCKStore : NSObject <_KSTextReplacementStoreProtocol> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _dataQueue;
	BOOL _ckMigrationStatusOnCloud;
	BOOL _didRequestFirstPullForAccount;
	_KSTextReplacementCoreDataStore* _coreDataStore;
	_KSCloudKitManager* _cloudKitManager;

}

@property (nonatomic,retain) _KSTextReplacementCoreDataStore * coreDataStore;              //@synthesize coreDataStore=_coreDataStore - In the implementation block
@property (nonatomic,retain) _KSCloudKitManager * cloudKitManager;                         //@synthesize cloudKitManager=_cloudKitManager - In the implementation block
@property (assign,nonatomic) BOOL ckMigrationStatusOnCloud;                                //@synthesize ckMigrationStatusOnCloud=_ckMigrationStatusOnCloud - In the implementation block
@property (assign,nonatomic) BOOL didRequestFirstPullForAccount;                           //@synthesize didRequestFirstPullForAccount=_didRequestFirstPullForAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isMigrationCompleted;
-(void)dealloc;
-(void)removeAllEntries;
-(void)accountDidChange:(id)arg1 ;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)textReplacementEntries;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)userIdentity;
-(_KSCloudKitManager *)cloudKitManager;
-(void)setCloudKitManager:(_KSCloudKitManager *)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)pushMigrationStatusToCloud:(BOOL)arg1 ;
-(void)pushAllLocalData;
-(BOOL)isAccountAvailable;
-(void)queryMigrationStatusOnCloudWithCallback:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)recordSyncStatus;
-(void)importSampleShortcutsIfNecessary;
-(_KSTextReplacementCoreDataStore *)coreDataStore;
-(void)pullRemoteDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDidRequestFirstPullForAccount:(BOOL)arg1 ;
-(void)setCkMigrationStatusOnCloud:(BOOL)arg1 ;
-(BOOL)didRequestFirstPullForAccount;
-(void)queryCloudIfFirstPullOrAccountChanged;
-(BOOL)ckMigrationStatusOnCloud;
-(void)pushLocalChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)queryUpdatedLocalEntries;
-(id)queryDeletedEntries;
-(id)localEntriesFromCloudEntries:(id)arg1 ;
-(id)cloudEntriesFromLocalEntries:(id)arg1 ;
-(id)cloudRecordIDsForLocalEntries:(id)arg1 ;
-(void)removeAllEntriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCoreDataStore:(_KSTextReplacementCoreDataStore *)arg1 ;
@end

