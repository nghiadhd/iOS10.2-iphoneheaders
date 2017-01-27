/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableSet, NSPredicate, NSArray, NSString, PHPhotoLibrary, NSSet;

@interface PHFetchOptions : NSObject <NSCopying> {

	NSNumber* _includeHiddenAssetsNumber;
	NSNumber* _includeAllBurstAssetsNumber;
	NSNumber* _includeAssetSourceTypesNumber;
	NSNumber* _fetchLimitNumber;
	NSNumber* _wantsIncrementalChangeDetailsNumber;
	NSNumber* _chunkSizeForFetchNumber;
	NSNumber* _cacheSizeForFetchNumber;
	NSNumber* _reverseSortOrderNumber;
	NSNumber* _includeWallpaperAssetsNumber;
	NSNumber* _includeDuplicateAssetsNumber;
	NSNumber* _includePendingMemoriesNumber;
	NSNumber* _includeRejectedMemoriesNumber;
	NSNumber* _personContextNumber;
	NSNumber* _includeTrashedAssetsNumber;
	NSNumber* _includeFavoriteMemoriesCollectionListNumber;
	NSNumber* _includePlacesSmartAlbumNumber;
	NSNumber* _excludeMontageAssetsNumber;
	NSNumber* _minimumVerifiedFaceCountNumber;
	NSNumber* _minimumUnverifiedFaceCountNumber;
	NSNumber* _includeNonvisibleFacesNumber;
	NSMutableSet* _propertySets;
	NSNumber* _shouldPrefetchCountNumber;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSArray* _customObjectIDSortOrder;
	NSString* _transientIdentifier;
	NSPredicate* _internalPredicate;
	NSArray* _internalSortDescriptors;
	NSPredicate* _internalInclusionPredicate;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSSet * fetchPropertySetsAsSet; 
@property (nonatomic,retain) NSArray * customObjectIDSortOrder;                          //@synthesize customObjectIDSortOrder=_customObjectIDSortOrder - In the implementation block
@property (assign,nonatomic) BOOL includeTrashedAssets; 
@property (nonatomic,retain) NSArray * fetchPropertySets; 
@property (assign,nonatomic) long long chunkSizeForFetch; 
@property (assign,nonatomic) long long cacheSizeForFetch; 
@property (nonatomic,retain) NSString * transientIdentifier;                             //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,retain) NSPredicate * internalPredicate;                            //@synthesize internalPredicate=_internalPredicate - In the implementation block
@property (nonatomic,retain) NSArray * internalSortDescriptors;                          //@synthesize internalSortDescriptors=_internalSortDescriptors - In the implementation block
@property (nonatomic,retain) NSPredicate * internalInclusionPredicate;                   //@synthesize internalInclusionPredicate=_internalInclusionPredicate - In the implementation block
@property (assign,nonatomic) BOOL reverseSortOrder; 
@property (assign,nonatomic) BOOL includeWallpaperAssets; 
@property (assign,nonatomic) BOOL includeDuplicateAssets; 
@property (assign,nonatomic) BOOL includePendingMemories; 
@property (assign,nonatomic) BOOL includeRejectedMemories; 
@property (assign,nonatomic) BOOL includeFavoriteMemoriesCollectionList; 
@property (assign,nonatomic) BOOL includePlacesSmartAlbum; 
@property (assign,nonatomic) unsigned long long minimumVerifiedFaceCount; 
@property (assign,nonatomic) unsigned long long minimumUnverifiedFaceCount; 
@property (assign,nonatomic) BOOL includeNonvisibleFaces; 
@property (assign,nonatomic) long long personContext; 
@property (assign,nonatomic) BOOL excludeMontageAssets; 
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL shouldPrefetchCount; 
@property (nonatomic,retain) NSPredicate * predicate;                                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenAssets; 
@property (assign,nonatomic) BOOL includeAllBurstAssets; 
@property (assign,nonatomic) unsigned long long includeAssetSourceTypes; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@property (assign,nonatomic) BOOL wantsIncrementalChangeDetails; 
+(id)px_standardFetchOptions;
+(id)fetchOptionsWithInclusiveDefaults;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)setCustomObjectIDSortOrder:(NSArray *)arg1 ;
-(void)setIncludeTrashedAssets:(BOOL)arg1 ;
-(void)setIncludeWallpaperAssets:(BOOL)arg1 ;
-(NSPredicate *)internalInclusionPredicate;
-(NSArray *)internalSortDescriptors;
-(void)setTransientIdentifier:(NSString *)arg1 ;
-(NSArray *)customObjectIDSortOrder;
-(unsigned long long)minimumVerifiedFaceCount;
-(void)setMinimumVerifiedFaceCount:(unsigned long long)arg1 ;
-(unsigned long long)minimumUnverifiedFaceCount;
-(void)setMinimumUnverifiedFaceCount:(unsigned long long)arg1 ;
-(BOOL)wantsIncrementalChangeDetails;
-(BOOL)includeAllBurstAssets;
-(BOOL)includeHiddenAssets;
-(long long)chunkSizeForFetch;
-(long long)cacheSizeForFetch;
-(BOOL)includeWallpaperAssets;
-(unsigned long long)includeAssetSourceTypes;
-(BOOL)includeDuplicateAssets;
-(void)setIncludeDuplicateAssets:(BOOL)arg1 ;
-(BOOL)includePendingMemories;
-(BOOL)includeRejectedMemories;
-(long long)personContext;
-(BOOL)includeTrashedAssets;
-(BOOL)includeFavoriteMemoriesCollectionList;
-(BOOL)includePlacesSmartAlbum;
-(BOOL)excludeMontageAssets;
-(BOOL)shouldPrefetchCount;
-(void)mergeWithFetchOptions:(id)arg1 ;
-(NSSet *)fetchPropertySetsAsSet;
-(BOOL)includeNonvisibleFaces;
-(void)setIncludeNonvisibleFaces:(BOOL)arg1 ;
-(void)setInternalPredicate:(NSPredicate *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setIncludeFavoriteMemoriesCollectionList:(BOOL)arg1 ;
-(void)setIncludePlacesSmartAlbum:(BOOL)arg1 ;
-(void)setInternalSortDescriptors:(NSArray *)arg1 ;
-(NSString *)transientIdentifier;
-(void)setWantsIncrementalChangeDetails:(BOOL)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setReverseSortOrder:(BOOL)arg1 ;
-(NSPredicate *)internalPredicate;
-(void)setIncludeAssetSourceTypes:(unsigned long long)arg1 ;
-(void)setIncludeAllBurstAssets:(BOOL)arg1 ;
-(void)setExcludeMontageAssets:(BOOL)arg1 ;
-(void)setIncludeHiddenAssets:(BOOL)arg1 ;
-(void)addFetchPropertySets:(id)arg1 ;
-(void)setIncludePendingMemories:(BOOL)arg1 ;
-(void)setChunkSizeForFetch:(long long)arg1 ;
-(void)setFetchPropertySets:(NSArray *)arg1 ;
-(void)setPersonContext:(long long)arg1 ;
-(void)setShouldPrefetchCount:(BOOL)arg1 ;
-(BOOL)reverseSortOrder;
-(unsigned long long)fetchLimit;
-(NSArray *)fetchPropertySets;
-(void)setInternalInclusionPredicate:(NSPredicate *)arg1 ;
-(void)setIncludeRejectedMemories:(BOOL)arg1 ;
-(void)setCacheSizeForFetch:(long long)arg1 ;
@end

