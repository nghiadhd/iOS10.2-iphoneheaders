/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray, NSString;

@interface DownloadEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * allAssetCookies; 
@property (nonatomic,readonly) NSString * downloadKind; 
@property (nonatomic,readonly) unsigned long long itemIdentifier; 
@property (nonatomic,readonly) NSString * ITunesSafeGUID; 
+(id)copyValueDictionaryWithMetadata:(id)arg1 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(Class)memoryEntityClass;
+(void)initialize;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
-(id)finishWithFinalPhase:(id)arg1 ;
-(void)deleteScratchDirectory;
-(id)setAssetsUsingDownload:(id)arg1 ;
-(id)copyDownloadingIPodLibraryItem;
-(NSString *)ITunesSafeGUID;
-(id)anyAssetForAssetType:(id)arg1 ;
-(id)copyStoreDownloadMetadata;
-(long long)addPersistentDownloadsWithClientID:(id)arg1 kind:(id)arg2 ;
-(BOOL)_shouldSuppressDialogForError:(id)arg1 ;
-(NSArray *)allAssetCookies;
-(void)_applyPhase:(id)arg1 toUpdateWithStoreItemIdentifier:(long long)arg2 changeset:(id)arg3 ;
-(void)_resetAssetProperty:(id)arg1 ;
-(id)_databaseAssetForAsset:(id)arg1 ;
-(void)_deleteTransaction;
-(id)copyAdditionalMetadataForStoreDownload:(id)arg1 ;
-(id)copyAssetsWithAssetType:(id)arg1 ;
-(void)resetAssetLocalPaths;
-(void)resetAssetURLs;
-(NSString *)downloadKind;
-(id)retryDownload;
-(unsigned long long)itemIdentifier;
-(id)rentalInformation;
-(BOOL)deleteFromDatabase;
-(id)failWithError:(id)arg1 ;
@end

