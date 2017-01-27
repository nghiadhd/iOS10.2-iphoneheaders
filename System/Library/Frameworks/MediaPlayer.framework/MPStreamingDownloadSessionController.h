/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMapTable, NSMutableArray, NSOperationQueue;

@interface MPStreamingDownloadSessionController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMapTable* _assetDownloadSessionToDownloadSessions;
	NSMapTable* _assetDownloadSessionToPlaybackMetadata;
	NSMutableArray* _assetDownloadSessionsPendingStart;
	unsigned long long _pausingAllDownloadsTransactionCount;
	vector<unsigned long long, std::__1::allocator<unsigned long long> >* _prioritizedDownloadTokens;
	NSOperationQueue* _streamingOperationQueue;
	NSMapTable* _uniqueKeyToDownloadSessions;

}
+(id)sharedDownloadSessionController;
-(id)init;
-(void)dealloc;
-(void)endPrioritizingDownloadSession:(id)arg1 ;
-(void)acquireDownloadSessionWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDownloadSession:(id)arg1 ;
-(void)releaseDownloadSession:(id)arg1 ;
-(void)beginPrioritizingDownloadSession:(id)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_unregisterDownloadSession:(id)arg1 withAssetDownloadSession:(id)arg2 playbackItemMetadata:(id)arg3 returningWasLastAssociatedDownloadSession:(BOOL*)arg4 ;
-(void)_removeFileForAssetDownloadSession:(id)arg1 playbackItemMetadata:(id)arg2 ;
-(id)_uniqueKeyForRequest:(id)arg1 ;
-(id)_createNewDownloadSessionWithExistingDownloadSessionForUniqueKey:(id)arg1 ;
-(id)_preferredAssetFlavorsForAssetQuality:(unsigned long long)arg1 ;
-(id)_newDownloadSessionForPlaybackItemMetadata:(id)arg1 sourceURL:(id)arg2 downloadKey:(id)arg3 sinfs:(id)arg4 pathExtension:(id)arg5 assetFlavor:(id)arg6 allowAssetCaching:(BOOL)arg7 protectionType:(unsigned long long)arg8 returningAssetDownloadSession:(id*)arg9 ;
-(void)_handleNewDownloadSession:(id)arg1 withAssetDownloadSession:(id)arg2 forPlaybackItemMetadata:(id)arg3 uniqueKey:(id)arg4 ;
-(id)_assetDownloadSessionForDownloadSession:(id)arg1 returningAllDownloadSessions:(id*)arg2 playbackItemMetadata:(id*)arg3 ;
-(void)_postFailedForDownloadSession:(id)arg1 ;
-(void)_handlePrioritizationForFinishingAssetDownloadSession:(id)arg1 ;
-(void)_postFailedForDownloadSession:(id)arg1 withError:(id)arg2 ;
-(void)_auditNetworkConstraintsForAssetDownloadSession:(id)arg1 playbackItemMetadata:(id)arg2 ;
-(void)_auditAssetDownloadSession:(id)arg1 withNetworkConstraints:(id)arg2 ;
-(void)_getNetworkConstraintsForPlaybackItemMetadata:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_registerForNotificationsForAssetDownloadSession:(id)arg1 ;
-(void)_registerForNotificationsForPlaybackItemMetadata:(id)arg1 ;
-(unsigned long long)_assetQualityForAssetFlavor:(id)arg1 ;
-(id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2 ;
-(id)_sinfsByCleaningSinfs:(id)arg1 ;
-(void)_assetDownloadSessionDownloadFailedNotification:(id)arg1 ;
-(void)_assetDownloadSessionDownloadSucceededNotification:(id)arg1 ;
-(void)_assetDownloadSessionFileSizeAvailableNotification:(id)arg1 ;
-(void)_playbackItemMetadataNetworkConstraintsDidChangeNotification:(id)arg1 ;
-(void)_unregisterForNotificationsForAssetDownloadSession:(id)arg1 ;
-(void)_unregisterForNotificationsForPlaybackItemMetadata:(id)arg1 ;
-(void)beginPausingAllDownloadSessions;
-(void)endPausingAllDownloadSessions;
@end

