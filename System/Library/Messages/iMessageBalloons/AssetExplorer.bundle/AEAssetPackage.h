/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <libobjc.A.dylib/PUCAMReviewAsset.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class NSString, CLLocation, NSDate, UIImage, NSDictionary, NSURL, PHLivePhoto, AVAsset, AVAudioMix, PFAssetAdjustments, NSObject, NSMutableDictionary, NSMutableSet;

@interface AEAssetPackage : NSObject <PUCAMReviewAsset, NSCopying, NSMutableCopying> {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> __packageContentQueue;
	NSMutableDictionary* __contentQueue_finalURLs;
	NSMutableDictionary* __contentQueueSidecar;
	NSMutableSet* __contentQueue_suppressedURLKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double duration; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) unsigned long long fullsizeDataFormat; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_AE1 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_AE1 photoIrisVideoDuration; 
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (getter=isHDR,nonatomic,readonly) BOOL HDR; 
@property (getter=isLivePhoto,nonatomic,readonly) BOOL livePhoto; 
@property (getter=isLivePhotoPlaceholder,nonatomic,readonly) BOOL livePhotoPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_AE1 livePhotoSynchronizedDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_AE1 livePhotoDuration; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) UIImage * providedPreviewImage; 
@property (nonatomic,readonly) NSDictionary * providedImageMetadata; 
@property (nonatomic,readonly) NSURL * providedFullsizeImageURL; 
@property (nonatomic,readonly) NSURL * providedFullsizeRenderImageURL; 
@property (nonatomic,readonly) PHLivePhoto * providedLivePhoto; 
@property (nonatomic,readonly) AVAsset * providedAVAsset; 
@property (nonatomic,readonly) AVAudioMix * providedAudioMix; 
@property (nonatomic,readonly) NSURL * providedVideoURL; 
@property (nonatomic,readonly) NSURL * providedFullsizeRenderVideoURL; 
@property (nonatomic,readonly) PFAssetAdjustments * assetAdjustments; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _packageContentQueue;                    //@synthesize _packageContentQueue=__packageContentQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _contentQueue_finalURLs;                        //@synthesize _contentQueue_finalURLs=__contentQueue_finalURLs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _contentQueueSidecar;                           //@synthesize _contentQueueSidecar=__contentQueueSidecar - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _contentQueue_suppressedURLKeys;                       //@synthesize _contentQueue_suppressedURLKeys=__contentQueue_suppressedURLKeys - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
-(long long)_sendSourceFromMediaOrigin:(long long)arg1 ;
-(id)reviewAssetFromPackageMetadata;
-(id)durableURLsSnapshot;
-(BOOL)containsSuppressedLivePhoto;
-(NSMutableDictionary *)_contentQueueSidecar;
-(NSMutableSet *)_contentQueue_suppressedURLKeys;
-(long long)mediaOrigin;
-(id)currentURLForType:(id)arg1 ;
-(id)sidecarSnapshot;
-(NSMutableDictionary *)_contentQueue_finalURLs;
-(BOOL)containsLivePhotoContent;
-(id)sidecarObjectForKey:(id)arg1 ;
-(id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 sidecar:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)_packageContentQueue;
-(id)browserItemPayload;
-(BOOL)isURLSuppressedForType:(id)arg1 ;
-(id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 suppressedURLKeys:(id)arg3 sidecar:(id)arg4 ;
-(id)init;
-(double)duration;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)uuid;
-(unsigned long long)mediaType;
-(BOOL)canPlayPhotoIris;
-(BOOL)isPhotoIrisPlaceholder;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(BOOL)representsBurst;
-(BOOL)isHDR;
-(NSString *)burstIdentifier;
-(unsigned long long)numberOfRepresentedAssets;
-(NSDate *)creationDate;
-(BOOL)isFavorite;
-(BOOL)isTemporaryPlaceholder;
-(PFAssetAdjustments *)assetAdjustments;
-(SCD_Struct_AE1)photoIrisStillDisplayTime;
-(BOOL)isLivePhoto;
-(UIImage *)providedPreviewImage;
-(double)aspectRatio;
-(unsigned long long)mediaSubtypes;
-(NSDate *)modificationDate;
-(BOOL)isLivePhotoPlaceholder;
-(SCD_Struct_AE1)livePhotoSynchronizedDisplayTime;
-(SCD_Struct_AE1)livePhotoDuration;
-(NSDictionary *)providedImageMetadata;
-(NSURL *)providedFullsizeImageURL;
-(NSURL *)providedFullsizeRenderImageURL;
-(PHLivePhoto *)providedLivePhoto;
-(AVAsset *)providedAVAsset;
-(AVAudioMix *)providedAudioMix;
-(NSURL *)providedVideoURL;
-(NSURL *)providedFullsizeRenderVideoURL;
-(unsigned long long)isContentEqualTo:(id)arg1 ;
-(NSString *)localizedGeoDescription;
-(unsigned long long)fullsizeDataFormat;
-(SCD_Struct_AE1)photoIrisVideoDuration;
-(BOOL)hasPhotoColorAdjustments;
@end
