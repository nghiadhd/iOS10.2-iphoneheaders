/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet, NSDictionary, NSMutableOrderedSet, NSString, NSArray, NSSet, NSOrderedSet;

@interface DownloadsChangeset : NSObject <NSCopying> {

	NSMutableArray* _appWakeRequests;
	NSMutableArray* _applicationWorkspaceChanges;
	NSMutableSet* _canceledAppDataRestoreIDs;
	NSMutableSet* _canceledIPodLibraryDownloadIDs;
	NSMutableSet* _changedDownloadKinds;
	NSDictionary* _changedDownloadProperties;
	NSDictionary* _changedExternalDownloadProperties;
	NSMutableArray* _cookies;
	NSMutableArray* _deletedHTTPCookies;
	NSMutableSet* _deletedIPodLibraryDownloadIDs;
	long long _downloadChangeTypes;
	NSMutableSet* _finishedDownloadKinds;
	NSMutableArray* _ipodLibraryItems;
	NSMutableOrderedSet* _pipelineAdditions;
	NSMutableOrderedSet* _pipelineRestarts;
	NSMutableOrderedSet* _policyChangedDownloadIDs;
	NSMutableOrderedSet* _removedDownloadIDs;
	NSMutableOrderedSet* _removedPersistentDownloadIDs;
	NSMutableOrderedSet* _restorableDownloadIDs;
	NSString* _restoreReason;
	NSMutableSet* _statusChangedDownloadIDs;
	NSMutableSet* _updatedDownloadIDs;

}

@property (nonatomic,copy,readonly) NSArray * applicationWorkspaceChanges;                    //@synthesize applicationWorkspaceChanges=_applicationWorkspaceChanges - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appWakeRequests;                                //@synthesize appWakeRequests=_appWakeRequests - In the implementation block
@property (nonatomic,copy,readonly) NSSet * canceledAppDataRestoreIDs;                        //@synthesize canceledAppDataRestoreIDs=_canceledAppDataRestoreIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * canceledIPodLibraryDownloadIDs;                   //@synthesize canceledIPodLibraryDownloadIDs=_canceledIPodLibraryDownloadIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * changedDownloadKinds;                             //@synthesize changedDownloadKinds=_changedDownloadKinds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedHTTPCookies;                             //@synthesize deletedHTTPCookies=_deletedHTTPCookies - In the implementation block
@property (nonatomic,copy,readonly) NSSet * deletedIPodLibraryDownloadIDs;                    //@synthesize deletedIPodLibraryDownloadIDs=_deletedIPodLibraryDownloadIDs - In the implementation block
@property (nonatomic,readonly) long long downloadChangeTypes;                                 //@synthesize downloadChangeTypes=_downloadChangeTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * finishedDownloadKinds;                            //@synthesize finishedDownloadKinds=_finishedDownloadKinds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * HTTPCookies;                                    //@synthesize cookies=_cookies - In the implementation block
@property (nonatomic,copy,readonly) NSArray * IPodLibraryItems;                               //@synthesize ipodLibraryItems=_ipodLibraryItems - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * policyChangedDownloadIDs;                  //@synthesize policyChangedDownloadIDs=_policyChangedDownloadIDs - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * pipelineAdditions;                         //@synthesize pipelineAdditions=_pipelineAdditions - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * pipelineRestarts;                          //@synthesize pipelineRestarts=_pipelineRestarts - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * removedDownloadIDs;                        //@synthesize removedDownloadIDs=_removedDownloadIDs - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * removedPersistentDownloadIDs;              //@synthesize removedPersistentDownloadIDs=_removedPersistentDownloadIDs - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * restorableDownloadIDs;                     //@synthesize restorableDownloadIDs=_restorableDownloadIDs - In the implementation block
@property (nonatomic,copy) NSString * restoreReason;                                          //@synthesize restoreReason=_restoreReason - In the implementation block
@property (nonatomic,copy,readonly) NSSet * statusChangedDownloadIDs;                         //@synthesize statusChangedDownloadIDs=_statusChangedDownloadIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * updatedDownloadIDs;                               //@synthesize updatedDownloadIDs=_updatedDownloadIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * changedDownloadProperties;                          //@synthesize changedDownloadProperties=_changedDownloadProperties - In the implementation block
@property (nonatomic,copy) NSDictionary * changedExternalDownloadProperties;                  //@synthesize changedExternalDownloadProperties=_changedExternalDownloadProperties - In the implementation block
-(NSSet *)canceledAppDataRestoreIDs;
-(NSArray *)applicationWorkspaceChanges;
-(NSArray *)deletedHTTPCookies;
-(NSArray *)HTTPCookies;
-(NSArray *)IPodLibraryItems;
-(NSSet *)deletedIPodLibraryDownloadIDs;
-(NSSet *)canceledIPodLibraryDownloadIDs;
-(NSArray *)appWakeRequests;
-(long long)downloadChangeTypes;
-(NSString *)restoreReason;
-(NSOrderedSet *)restorableDownloadIDs;
-(NSSet *)changedDownloadKinds;
-(NSOrderedSet *)removedPersistentDownloadIDs;
-(NSOrderedSet *)policyChangedDownloadIDs;
-(NSOrderedSet *)pipelineRestarts;
-(NSOrderedSet *)pipelineAdditions;
-(void)addDownloadsToPipelineWithIDs:(id)arg1 ;
-(void)addDownloadChangeTypes:(long long)arg1 ;
-(void)addDownloadKind:(id)arg1 ;
-(void)addUpdatedDownloadID:(long long)arg1 ;
-(void)unionChangeset:(id)arg1 ;
-(void)addIPodLibraryItem:(id)arg1 ;
-(void)addAppPlaceholderWithHandle:(id)arg1 ;
-(void)addRestorableDownloadID:(long long)arg1 ;
-(void)addStatusChangedDownloadID:(long long)arg1 ;
-(void)setChangedDownloadProperties:(NSDictionary *)arg1 ;
-(void)addPausedAppWithHandle:(id)arg1 ;
-(void)restartDownloadsInPipelineWithIDs:(id)arg1 ;
-(void)addDownloadToPipelineWithID:(long long)arg1 ;
-(void)addPolicyChangedDownloadID:(long long)arg1 ;
-(id)_initDownloadsChangeset;
-(id)_appWakeRequests;
-(id)_applicationWorkspaceChanges;
-(void)_addApplicationWorkspaceChangeWithHandle:(id)arg1 changeType:(long long)arg2 ;
-(id)_canceledAppDataRestoreIDs;
-(id)_canceledIPodLibraryDownloadIDs;
-(id)_deletedHTTPCookies;
-(id)_deletedIPodLibraryDownloadIDs;
-(id)_finishedDownloadKinds;
-(id)_cookies;
-(id)_policyChangedDownloadIDs;
-(NSDictionary *)changedDownloadProperties;
-(NSDictionary *)changedExternalDownloadProperties;
-(void)setChangedExternalDownloadProperties:(NSDictionary *)arg1 ;
-(NSSet *)finishedDownloadKinds;
-(NSOrderedSet *)removedDownloadIDs;
-(NSSet *)statusChangedDownloadIDs;
-(NSSet *)updatedDownloadIDs;
-(void)addApplicationWorkspaceChange:(id)arg1 ;
-(void)addAppWakeRequest:(id)arg1 ;
-(void)addCanceledAppWithHandle:(id)arg1 ;
-(void)addCanceledAppDataRestoreID:(id)arg1 ;
-(void)addCanceledIPodLibraryDownloadID:(long long)arg1 ;
-(void)addDeletedHTTPCookies:(id)arg1 ;
-(void)addDeletedIPodLibraryDownloadID:(long long)arg1 ;
-(void)addFailedAppWithHandle:(id)arg1 ;
-(void)addFinishedAppWithHandle:(id)arg1 ;
-(void)addFinishedDownloadKind:(id)arg1 ;
-(void)addHTTPCookie:(id)arg1 ;
-(void)addRemovedDownloadID:(long long)arg1 ;
-(void)addRemovedPersistentDownloadID:(long long)arg1 ;
-(void)addRetryAppWithHandle:(id)arg1 ;
-(void)removeDownloadFromPipelineWithID:(long long)arg1 ;
-(void)setRestoreReason:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

