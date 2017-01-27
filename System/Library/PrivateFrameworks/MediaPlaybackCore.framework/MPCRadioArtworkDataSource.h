/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class CPLRUDictionary, NSObject;

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource {

	unsigned long long _backgroundCacheSize;
	unsigned long long _cacheSize;
	CPLRUDictionary* _cachedArtworkRepresentations;
	NSObject*<OS_dispatch_queue> _cachedArtworkRepresentationsAccessQueue;
	long long _resumeToForegroundCacheSize;

}
+(id)sharedRadioArtworkDataSource;
-(id)init;
-(void)dealloc;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(void)_clearCache;
-(void)_handleDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleDidReceiveMemoryWarningNotification:(id)arg1 ;
-(void)_handleWillEnterForegroundNotification:(id)arg1 ;
-(void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2 ;
-(void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(BOOL)arg2 ;
@end

