/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/KeyboardUIMigrator.migrator/KeyboardUIMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class TIImageCacheClient;

@interface KeyboardUIMigrator : DataClassMigrator {

	TIImageCacheClient* _store;

}

@property (readonly) TIImageCacheClient * store; 
-(void)dealloc;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
-(TIImageCacheClient *)store;
@end

