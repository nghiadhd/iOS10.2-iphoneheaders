/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@protocol CloudKitProtocol;
@class TransactionLog, AutoSync, NSString;

@interface SyncEngine : CHSynchronizedLoggable {

	id<CloudKitProtocol> _cloudKit;
	TransactionLog* _txLog;
	id _autoSyncRef;
	id _fetchChangesRef;
	id _remoteTransactionsAppliedRef;
	long long _fetchChangesQualityOfService;
	AutoSync* _autoSync;
	unsigned long long _fetchIterations;
	unsigned long long _mergeResultInsertCount;
	unsigned long long _mergeResultUpdateCount;
	unsigned long long _mergeResultDeleteCount;
	NSString* _errorMessage;
	/*^block*/id _callback;

}
-(void)removeOperationInProgress_sync;
-(void)begin_sync:(/*^block*/id)arg1 ;
-(BOOL)checkAndSetOperationInProgress_sync:(/*^block*/id)arg1 ;
-(void)uploadChanges_sync;
-(void)downloadChanges_sync;
-(void)handleOperationComplete_sync;
-(void)handleRemoteTransactionsApplied_sync:(id)arg1 ;
-(void)updateMergeResult_sync:(id)arg1 ;
-(void)downloadChanges:(/*^block*/id)arg1 ;
-(void)handleRemoteTransactionsApplied:(id)arg1 ;
-(id)initWithCloudKit:(id)arg1 withTransactionLog:(id)arg2 withAutoSync:(id)arg3 ;
-(void)dealloc;
-(void)begin:(/*^block*/id)arg1 ;
-(void)registerForNotifications;
@end

