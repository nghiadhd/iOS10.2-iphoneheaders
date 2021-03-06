/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/MobileSlideShow.migrator/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class NSMutableArray;

@interface MobileSlideShowDataMigrator : DataClassMigrator {

	NSMutableArray* _fileGroupsToMigrate;
	NSMutableArray* _fileGroupProcessingOptions;
	NSMutableArray* _strayFileGroups;
	double _migrationProgress;
	unsigned long long _secondsToCleanupModel;
	BOOL _didSetOTARestoreToken;

}
-(BOOL)_migrateMetadatFilesToPhotoData;
-(BOOL)_isDCIMAssetsDirectory:(id)arg1 ;
-(void)_migrateAssetsdPrefs;
-(BOOL)_migrateCameraRollFiles;
-(id)_fileGroupProcessingOptions;
-(id)_fileGroupsToMigrate;
-(void)_removeOldLargeThubnails;
-(void)_generateMigrationFilegroupsAndOptions;
-(id)_strayFileGroups;
-(void)_setOTARestoreTokenIfNeeded;
-(float)migrationProgress;
-(id)init;
-(void)dealloc;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

