/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary;

@interface iPhotoMigrationSupport : NSObject {

	int _inFlightMigrationCount;
	PLPhotoLibrary* _pl_library;

}

@property (setter=setPL_library:,nonatomic,retain) PLPhotoLibrary * pl_library;              //@synthesize pl_library=_pl_library - In the implementation block
@property (nonatomic,readonly) BOOL migrationWasInterrupted; 
+(id)sharedInstance;
-(id)_preMigratediPhotoDir;
-(id)_inFlightMigrationMarkerFilePath;
-(BOOL)_validateUuid:(id)arg1 ;
-(id)_migratediPhotoDir;
-(PLPhotoLibrary *)pl_library;
-(void)_incrementInFlightMigrationCount;
-(id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1 ;
-(id)_iPhotoToPhotosUuidMapTable;
-(void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3 ;
-(id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id*)arg2 ;
-(void)setCaption:(id)arg1 forAsset:(id)arg2 ;
-(void)addKeywordIfDoesNotExist:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)_createParentDirectoryIfNecessaryWithPath:(id)arg1 ;
-(id)_premigratedProjectUuidMapTable;
-(id)_iPhotoUuidsWithProjectDict:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_decrementInFlightMigrationCount;
-(void)setPL_library:(id)arg1 ;
-(void)_migrateiPhotoLibraryWorkerWithProgressHandler:(/*^block*/id)arg1 iPhotoLibraryDir:(id)arg2 ;
-(void)checkForUnmigratediPhotoContentWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)migrationWasInterrupted;
-(BOOL)_isMigrating;
-(void)fireMigrationOfiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
-(id)_displayableUuidWithUuid:(id)arg1 ;
@end

