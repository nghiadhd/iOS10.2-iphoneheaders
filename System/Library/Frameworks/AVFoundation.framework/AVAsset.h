/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetInternal, NSValue, NSArray;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetInternal* _asset;

}

@property (nonatomic,readonly) NSValue * pu_cachedDuration; 
@property (assign,setter=MP_setCanAffectNetworkPlayability:,getter=MP_canAffectNetworkPlayability,nonatomic) BOOL MP_canAffectNetworkPlayability; 
@property (readonly) NSArray * availableChapterLocales; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) BOOL isProxy; 
@property (nonatomic,readonly) SCD_Struct_AV2 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
+(id)assetWithURL:(id)arg1 figPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4 ;
+(id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)assetWithURL:(id)arg1 ;
-(UIImage*)previewImage;
-(CGImageSourceRef)newPreviewImageSource;
-(NSValue *)pu_cachedDuration;
-(void)_pu_setCachedDuration:(id)arg1 ;
-(SCD_Struct_AV2)pu_duration;
-(void)pu_loadDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)MP_canAffectNetworkPlayability;
-(void)MP_setCanAffectNetworkPlayability:(BOOL)arg1 ;
-(void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)createLanguageOptionGroups;
-(id)vcp_firstEnabledTrackWithMediaType:(id)arg1 ;
-(id)vcp_enabledTracksWithMediaType:(id)arg1 ;
-(BOOL)vcp_isShortMovie;
-(BOOL)vcp_isMontage;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isProxy;
-(unsigned long long)hash;
-(SCD_Struct_AV2)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGSize)naturalSize;
-(OpaqueFigAssetRef)_figAsset;
-(id)availableChapterLanguages;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(BOOL)_mindsFragments;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)trackGroups;
-(id)_firstTrackGroupWithMediaTypes:(id)arg1 ;
-(id)_mediaSelectionGroupDictionaries;
-(id)tracksWithMediaCharacteristics:(id)arg1 ;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(SCD_Struct_AV2)overallDurationHint;
-(id)_URLSessionOperationQueue;
-(id)_URLSessionDataDelegate;
-(id)_weakReference;
-(id)_comparisonToken;
-(long long)statusOfValueForKey:(id)arg1 ;
-(void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(BOOL)_needsLegacyChangeNotifications;
-(unsigned long long)referenceRestrictions;
-(id)audioAlternatesTrackGroup;
-(id)subtitleAlternatesTrackGroup;
-(id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2 ;
-(id)preferredMediaSelection;
-(id)_ID3Metadata;
-(id)_tracksWithClass:(Class)arg1 ;
-(void)_tracksDidChange;
-(BOOL)_hasResourceLoaderDelegate;
-(void)_handleURLRequest:(id)arg1 ;
-(id)_resourceLoaderURLSession;
-(void)_loadChapterInfo;
-(id)_chapterDataTypeForMediaSubType:(int)arg1 ;
-(unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(SCD_Struct_AV3)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4 ;
-(id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3 ;
-(id)_availableCanonicalizedChapterLanguages;
-(id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 ;
-(id)_chapterTracks;
-(BOOL)_containsAtLeastOnePlayableAudioTrack;
-(BOOL)_containsAtLeastOnePlayableVideoTrack;
-(id)_exportURL;
-(int)unusedTrackID;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(id)metadata;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)lyrics;
-(NSArray *)availableChapterLocales;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)trackReferences;
-(id)trackWithTrackID:(int)arg1 ;
-(BOOL)_isStreaming;
-(BOOL)hasProtectedContent;
-(id)availableMediaCharacteristicsWithMediaSelectionOptions;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)commonMetadata;
-(id)propertyListForProxy;
-(id)tracks;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)creationDate;
-(id)tracksWithMediaType:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGAffineTransform)preferredTransform;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isReadable;
-(void)cancelLoading;
@end

