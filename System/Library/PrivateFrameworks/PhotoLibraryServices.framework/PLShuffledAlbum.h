/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLIndexMappingCache.h>
#import <libobjc.A.dylib/PLAlbumProtocol.h>

@class PLManagedAsset, NSMutableOrderedSet, NSString, NSOrderedSet, NSArray, NSDate, NSNumber, UIImage, NSDictionary, NSURL;

@interface PLShuffledAlbum : NSObject <PLIndexMappingCache, PLAlbumProtocol> {

	CFArrayRef _toBackingMap;
	CFArrayRef _fromBackingMap;
	NSObject* _backingAlbum;
	PLManagedAsset* _startingAsset;
	NSMutableOrderedSet* _assets;

}

@property (nonatomic,retain,readonly) PLManagedAsset * startingAsset; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> backingAlbum; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
@property (nonatomic,retain) NSMutableOrderedSet * _assets;                                   //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
+(NSObject*)shuffledAlbum:(NSObject*)arg1 startingAsset:(id)arg2 ;
+(NSObject*)unshuffledAlbum:(NSObject*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(NSString *)description;
-(NSString *)name;
-(NSString *)title;
-(BOOL)isEmpty;
-(NSString *)localizedTitle;
-(NSNumber *)kind;
-(NSString *)uuid;
-(NSObject*<PLAlbumProtocol>)backingAlbum;
-(void)set_assets:(NSMutableOrderedSet *)arg1 ;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(id)initWithBackingAlbum:(NSObject*)arg1 startingAsset:(id)arg2 ;
-(void)createShuffledIndexesMapsIfNeeded;
-(PLManagedAsset *)startingAsset;
-(void)createShuffledIndexesMaps;
-(CFArrayRef)fromBackingMap;
-(unsigned long long)countOfShuffledAssets;
-(unsigned long long)indexInShuffledAssetsOfObject:(id)arg1 ;
-(id)objectInShuffledAssetsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inShuffledAssetsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromShuffledAssetsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInShuffledAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned long long)approximateCount;
-(UIImage *)posterImage;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(int)kindValue;
-(NSMutableOrderedSet *)mutableAssets;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1 ;
-(BOOL)isLibrary;
-(BOOL)isCameraAlbum;
-(BOOL)isPanoramasAlbum;
-(BOOL)isWallpaperAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isRecentlyAddedAlbum;
-(BOOL)isUserLibraryAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSDictionary *)slideshowSettings;
-(void)setSlideshowSettings:(NSDictionary *)arg1 ;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(int)pendingItemsCount;
-(void)setPendingItemsCount:(int)arg1 ;
-(int)pendingItemsType;
-(void)setPendingItemsType:(int)arg1 ;
-(NSOrderedSet *)assets;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(BOOL)canShowComments;
-(NSArray *)localizedLocationNames;
-(NSMutableOrderedSet *)_assets;
@end

