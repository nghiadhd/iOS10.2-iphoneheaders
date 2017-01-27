/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/MusicLibrary.syncBundle/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/ATClient.h>
#import <libobjc.A.dylib/ATSyncClient.h>
#import <libobjc.A.dylib/ATAssetClient.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>
#import <libobjc.A.dylib/ATSessionObserver.h>

@protocol ATSyncClientDelegate, OS_dispatch_queue, OS_dispatch_source, ATMessageLink;
@class ML3MusicLibrary, NSMutableDictionary, NSArray, NSDate, NSMutableArray, NSNotificationCenter, NSObject, ATEnvironmentMonitor, NSMutableSet, NSDictionary, MLSyncKeepLocalSessionManager, NSString;

@interface MLSyncClient : NSObject <ATEnvironmentMonitorObserver, LSApplicationWorkspaceObserverProtocol, ATClient, ATSyncClient, ATAssetClient, ATMessageLinkObserver, ATMessageLinkRequestHandler, ATSessionObserver> {

	ML3MusicLibrary* _library;
	NSMutableDictionary* _pendingUploads;
	NSArray* _autoCreatedSmartPlaylistsPIDs;
	long long _syncStartRevision;
	long long _cloudAssetBaseLocationID;
	BOOL _hasCloudGeniusData;
	unsigned _grappaID;
	BOOL _hadUnsucessfulAssetTransfer;
	unsigned long long _currentAssetNumber;
	NSDate* _lastAssetNumberPostDate;
	NSMutableArray* _streams;
	NSNotificationCenter* _notificationCenter;
	id<ATSyncClientDelegate> _syncClientDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _utilityQueue;
	NSObject*<OS_dispatch_queue> _cachedSettingsQueue;
	NSMutableDictionary* _assetSyncDownloadRequests;
	NSObject*<OS_dispatch_source> _requestTimer;
	BOOL _performPostSyncUpdates;
	id _nanoSyncSettings;
	id<ATMessageLink> _messageLink;
	ATEnvironmentMonitor* _environmentalMonitor;
	NSMutableArray* _downloadedAssets;
	NSMutableSet* _modifiedPlaylistsPIDs;
	unsigned long long _lastSyncedRevision;
	NSDictionary* _cachedPlaylistSettings;
	MLSyncKeepLocalSessionManager* _keepLocalManager;
	NSMutableArray* _observedSessions;
	NSMutableDictionary* _temporaryDownloads;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldSyncPlaylistWithPersistentId:(long long)arg1 forSupportedMediaTypes:(id)arg2 includeNonLibraryContent:(BOOL)arg3 ;
-(void)_invokeHasChangesCallbackWithPriority:(int)arg1 ;
-(id)_geniusAssetsToSync;
-(id)_existingOutstandingAssetTransfersWithDownloadManager:(id)arg1 ;
-(void)_syncUpdatedSettingsToPairedDevice;
-(BOOL)_hasRelevantChangesToSync;
-(void)_deleteTrackForFailedAsset:(id)arg1 withError:(id)arg2 action:(id)arg3 ;
-(id)_tracksToSyncPredicate;
-(void)_processGeniusConfigPlist:(id)arg1 ;
-(void)getDataForTrackAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleStoreFrontDidChange;
-(void)_handleSyncPrefsChangedNotification:(id)arg1 ;
-(BOOL)_rebuildCachedPlaylistSettings;
-(id)_artworkAssetsToSyncWithMaximumTotalSize:(unsigned long long)arg1 totalSize:(unsigned long long*)arg2 ;
-(void)_processCompletedTrackAsset:(id)arg1 ;
-(id)_trackAssetsToSyncWithMaximumTotalSize:(unsigned long long)arg1 totalSize:(unsigned long long*)arg2 ;
-(void)_handleDisplayValuesChangedNotification:(id)arg1 ;
-(void)_handleAccountsDidChange;
-(void)_processGeniusPlist:(id)arg1 geniusIDString:(id)arg2 geniusChecksum:(long long)arg3 ;
-(void)_adjustRequestQueue;
-(void)_disableKeepLocalStatusAndCancelDownloadForAssetId:(long long)arg1 ;
-(void)_processCompletedGeniusAsset:(id)arg1 ;
-(id)_songArtworkSizeVariant;
-(void)_handleUpdateSettingsRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_clearCachedPlaylistSettings;
-(BOOL)_activeStoreAccountIsEligibleForFuse;
-(void)_validatePlaylistSettings;
-(BOOL)_verifySyncPlistFiles;
-(id)_tracksNeedingDownloadPredicate;
-(void)_processCompletedArtworkAsset:(id)arg1 ;
-(void)_postCurrentAssetNumber:(unsigned long long)arg1 ;
-(BOOL)_processUploadTrackOperations;
-(BOOL)_synchronousRemoveTrackWithPersistentID:(long long)arg1 ;
-(void)_applyPlaylistSyncSettings;
-(void)_handleContentsChangedNotification:(id)arg1 ;
-(id)_getPlaylistSyncSettings;
-(void)_handleNonContentsPropertiesDidChangeNotification:(id)arg1 ;
-(void)_handleStatusReportRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_syncPlaylistToCurrentRevision;
-(void)_updateSyncPlaylistToCurrentRevision;
-(BOOL)_syncedPlaylistIdInMediaLibrary;
-(id)_syncPlistFiles;
-(void)_resumeObservingChangeNotifications;
-(BOOL)_evaluateUploadTrackDatabaseChangeStep:(id)arg1 ;
-(id)_trackPidsMatchingPlaylistSettings;
-(void)getDataForArtworkAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_sendUpdatedSettings;
-(void)_processCompletedAssets;
-(void)_pauseObservingChangeNotifications;
-(void)_postAssetTotal:(unsigned long long)arg1 ;
-(BOOL)_processArtworkIdentifier:(id)arg1 artworkToken:(id)arg2 artworkType:(long long)arg3 mediaType:(unsigned)arg4 sourceType:(long long)arg5 ;
-(void)getDataForGeniusAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)revisionVersionToken;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEnabled;
-(unsigned long long)currentRevision;
-(id)supportedDataclasses;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(id)disabledAssetTypes;
-(id)syncDataClass;
-(void)getChangesForSyncType:(unsigned)arg1 endpointType:(int)arg2 afterRevision:(unsigned long long)arg3 upToRevision:(unsigned long long)arg4 withSyncParams:(id)arg5 intoOutputStream:(id)arg6 withStartHandler:(/*^block*/id)arg7 withProgressHandler:(/*^block*/id)arg8 withCompletionHandler:(/*^block*/id)arg9 ;
-(void)applyChangesForSyncType:(unsigned)arg1 endpointType:(int)arg2 fromStream:(id)arg3 withSyncParams:(id)arg4 withProgressHandler:(/*^block*/id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)resetSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(void)syncCompletedWithError:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)environmentMonitorDidChangePower:(id)arg1 ;
-(id)outstandingAssetTransfersWithDownloadManager:(id)arg1 ;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)assetInstallFailed:(id)arg1 withError:(id)arg2 ;
-(void)initiateAssetDownloadsWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelSyncOperations;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 grappaID:(unsigned)arg3 hostVersion:(id)arg4 error:(id*)arg5 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)assetDataClass;
-(void)assetsToSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)getDataForAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)assetSync:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)assetSync:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)assetSyncDidCompleteWithError:(id)arg1 ;
-(void)metadataUpdate:(id)arg1 forAsset:(id)arg2 withNewAnchor:(id)arg3 ;
-(id)currentSyncAnchor;
-(BOOL)reconcileRestoreWithError:(id*)arg1 ;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1 ;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2 ;
-(id)appleIDsForAssets;
-(void)clearSyncData;
-(id)installedAssetMetrics;
@end

