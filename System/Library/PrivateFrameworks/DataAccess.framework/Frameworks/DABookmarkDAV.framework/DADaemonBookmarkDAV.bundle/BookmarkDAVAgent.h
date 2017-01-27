/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DACoreDAVAgent.h>
#import <DADaemonBookmarkDAV/DABookmarkRootFolderConsumer.h>
#import <DADaemonBookmarkDAV/DABookmarkUpdateConsumer.h>
#import <DADaemonBookmarkDAV/DADataclassLockWatcher.h>
#import <DADaemonBookmarkDAV/DARefreshManagerDelegate.h>
#import <DADaemonBookmarkDAV/DAValidityCheckConsumer.h>

@class DATrustHandler, NSURL, NSString;

@interface BookmarkDAVAgent : DACoreDAVAgent <DABookmarkRootFolderConsumer, DABookmarkUpdateConsumer, DADataclassLockWatcher, DARefreshManagerDelegate, DAValidityCheckConsumer> {

	BOOL _isSyncing;
	BOOL _isWaitingToSync;
	BOOL _isSyncingHierarchy;
	NSURL* _serverTokenRegistrationURL;
	NSString* _containerPushKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
-(id)waiterID;
-(id)scheduleIdentifier;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(id)onBehalfOfBundleIdentifier;
-(id)initWithAccount:(id)arg1 ;
-(id)username;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(id)serverTokenRegistrationURL;
-(BOOL)_hasEnoughDataToSync;
-(void)_setUpBookmarkNotifications;
-(void)_tearDownBookmarkNotifications;
-(void)_setUpPushNotifications;
-(void)successfullyRetrievedRootFolder;
-(void)failedToRetrieveRootFolderWithError:(id)arg1 ;
-(void)successfullySyncedBookmarkTree;
-(void)failedToSyncBookmarkTreeWithError:(id)arg1 ;
-(void)_validateAndSync:(BOOL)arg1 ;
-(void)_handlePotential503Error:(id)arg1 ;
-(BOOL)APSTopicHasValidPrefix:(id)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2 ;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startMonitoring;
-(id)password;
@end

