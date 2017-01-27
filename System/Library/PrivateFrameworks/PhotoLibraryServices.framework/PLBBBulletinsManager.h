/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLBBPendingBulletinsBatchDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSMutableArray, NSMutableIndexSet, NSArray, NSString;

@interface PLBBBulletinsManager : NSObject <PLBBPendingBulletinsBatchDelegate> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_source> _saveTimerSource;
	NSObject*<OS_dispatch_source> _pendingChangesTimerSource;
	NSMutableDictionary* _dirtyPlist;
	NSMutableArray* _pendingBulletins;
	NSMutableArray* _pendingBatches;
	NSMutableIndexSet* _pendingDeleteRecordIDs;
	BOOL _badgeCountIsInvalid;
	BOOL _enableTemporaryDebugMode;
	void* _addressBook;
	int _alertFiltrationEnabled;

}

@property (readonly) NSArray * currentBulletinDictionaries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)discardAllBulletins;
-(void)noteDidReceiveAsset:(id)arg1 atIndex:(unsigned long long)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4 ;
-(void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4 ;
-(void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1 ;
-(void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(long long)arg2 mstreamdInfo:(id)arg3 ;
-(id)_initSharedInstance;
-(id)_currentPlistContents;
-(BOOL)_shouldAllowAlertsFromContactWithEmail:(id)arg1 ;
-(BOOL)_invitationBulletinExistsForAlbum:(id)arg1 ;
-(void)_addPendingBulletins:(id)arg1 ;
-(void)_deleteBulletinsForAlbumWithUUID:(id)arg1 bulletinTypes:(id)arg2 ;
-(void)_scheduleProcessPendingChanges;
-(void)_deleteBulletinsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeBulletins:(BOOL)arg2 shouldDeletePhotosAddedToAlbumBulletins:(BOOL)arg3 ;
-(BOOL)enableTemporaryDebugMode;
-(id)_currentPendingBatch;
-(id)_editablePlistContents;
-(id)_albumCloudGUIDForRecordID:(unsigned long long)arg1 ;
-(BOOL)_bulletinType:(long long)arg1 matchesCommentsOrLikeBulletins:(BOOL)arg2 andPhotosAddedToAlbumBulletins:(BOOL)arg3 ;
-(void)_processPendingChanges;
-(unsigned long long)_generateUniqueRecordID;
-(void)_saveDirtyChanges;
-(id)_plistFilePath;
-(void)_setNeedsSaving;
-(void)setEnableTemporaryDebugMode:(BOOL)arg1 ;
-(BOOL)_alertFiltrationEnabled;
-(void)bulletinsBatch:(id)arg1 didProcessReadyBulletins:(id)arg2 stillPending:(BOOL)arg3 ;
-(BOOL)bulletinsBatch:(id)arg1 shouldAllowAlertsFromContactWithEmail:(id)arg2 ;
-(id)bulletinsBatch:(id)arg1 bulletinByMergingPersistedListWithBulletin:(id)arg2 ;
-(NSArray *)currentBulletinDictionaries;
-(void)noteDidReceiveInvitationForSharedAlbum:(id)arg1 ;
-(void)noteDidDeleteSharedAlbum:(id)arg1 ;
-(void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteSharedAlbumUnseenStatusDidChange:(id)arg1 ;
-(void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1 ;
-(void)noteUserDidViewCloudFeedContent:(long long)arg1 ;
-(void)noteUserDidNavigateIntoSharedAlbum:(id)arg1 ;
-(void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1 ;
-(void)noteUserDidReadCommentOnSharedAsset:(id)arg1 ;
-(void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1 ;
-(void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1 ;
-(void)noteUserDidLeavePhotosApplication;
-(void)clearAllBulletinsUpToRecordID:(unsigned long long)arg1 ;
-(void)userViewedBulletinWithRecordID:(unsigned long long)arg1 ;
-(void)calculateCurrentBadgeCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getThumbnailImageDataForBulletinWithRecordID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceWriteUnsavedChanges;
-(void)sendResponse:(BOOL)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2 ;
-(void)_resetAlertFiltration;
-(void*)addressBook;
@end

