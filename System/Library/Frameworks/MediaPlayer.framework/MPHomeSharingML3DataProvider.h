/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol OS_dispatch_queue, MPArtworkDataSource;
@class HSHomeSharingLibrary, NSMutableDictionary, NSMutableSet, NSObject;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {

	HSHomeSharingLibrary* _homeSharingLibrary;
	NSMutableDictionary* _tokenDataForDSIDs;
	NSMutableSet* _loadedContainerPIDs;
	NSMutableDictionary* _blocksForLoadingContainerPIDs;
	NSObject*<OS_dispatch_queue> _containerFillQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _databaseID;
	id<MPArtworkDataSource> _artworkDataSource;

}

@property (nonatomic,readonly) HSHomeSharingLibrary * homeSharingLibrary;              //@synthesize homeSharingLibrary=_homeSharingLibrary - In the implementation block
@property (nonatomic,readonly) BOOL isSupportedSharingVersion; 
@property (assign,nonatomic) unsigned databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
+(void)beginScanningForLibraries;
+(void)endScanningForLibraries;
+(id)homeSharingGroupID;
+(void)_determineHomeSharingGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)isScanningForLibraries;
-(void)dealloc;
-(id)name;
-(id)uniqueIdentifier;
-(void)disconnect;
-(id)errorResolverForItem:(id)arg1 ;
-(id)artworkDataSource;
-(id)protectedContentSupportStorageURL;
-(void)connectWithAuthenticationData:(id)arg1 completionBlock:(/*^block*/id)arg2 progressHandler:(/*^block*/id)arg3 ;
-(BOOL)hasGeniusMixes;
-(unsigned)databaseID;
-(id)URLForItemDataRequest:(id)arg1 ;
-(BOOL)requiresAuthentication;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(id)initWithHomeSharingLibrary:(id)arg1 ;
-(HSHomeSharingLibrary *)homeSharingLibrary;
-(void)_homeSharingGroupIDDidChangeNotification:(id)arg1 ;
-(void)_homeSharingLibraryDidUpdateRevisionNumber:(id)arg1 ;
-(void)_homeSharingLibraryDidBecomeUnavailable:(id)arg1 ;
-(BOOL)isSupportedSharingVersion;
-(void)_fetchTokensForAuthorizedDSIDs;
-(void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_tokenDataForAccountID:(unsigned long long)arg1 ;
-(void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2 ;
-(void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1 ;
-(void)setDatabaseID:(unsigned)arg1 ;
@end

