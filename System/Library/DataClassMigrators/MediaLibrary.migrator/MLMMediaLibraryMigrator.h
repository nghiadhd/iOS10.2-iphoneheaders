/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/MediaLibrary.migrator/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ML3MusicLibrary;

@interface MLMMediaLibraryMigrator : DataClassMigrator {

	ML3MusicLibrary* _library;
	BOOL _migrated;

}
-(float)migrationProgress;
-(id)init;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

