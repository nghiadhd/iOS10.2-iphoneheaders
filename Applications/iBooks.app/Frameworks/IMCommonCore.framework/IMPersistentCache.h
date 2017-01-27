/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCommonCore/IMCommonCore-Structs.h>
@class IMDatabaseHandle, IMAdminTable, NSMutableSet, NSTimer, NSString;

@interface IMPersistentCache : NSObject {

	IMDatabaseHandle* _db;
	IMAdminTable* _adminTable;
	NSMutableSet* _accessedIds;
	os_unfair_lock_s _accessedIdsLock;
	NSMutableSet* _unknownKeys;
	os_unfair_lock_s _unknownKeysLock;
	unsigned long long _cacheSize;
	os_unfair_lock_s _cacheSizeLock;
	unsigned long long _maxSize;
	NSTimer* _scanTimer;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(BOOL)hasItemForKey:(id)arg1 ;
-(BOOL)insertCGImages:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3 baseSize:(CGSize)arg4 properties:(id)arg5 ;
-(void)deleteItemForKey:(id)arg1 ;
-(void)deleteItemsWithKeyLike:(id)arg1 ;
-(unsigned long long)resourceSizeForKey:(id)arg1 ;
-(id)metadataForKey:(id)arg1 ;
-(id)CGImagesForKey:(id)arg1 size:(CGSize*)arg2 resourceSize:(long long*)arg3 ;
-(BOOL)_createStorageForDb:(id)arg1 ;
-(unsigned long long)_loadCacheSize;
-(void)_updateCaches:(id)arg1 ;
-(void)_createCacheTable:(id)arg1 ;
-(void)_adjustCacheSizeBy:(long long)arg1 ;
-(void)_unknownKeysRemoveObject:(id)arg1 ;
-(BOOL)_insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 scale:(double)arg4 properties:(id)arg5 ;
-(BOOL)_insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 ;
-(BOOL)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 scale:(double)arg4 properties:(id)arg5 ;
-(BOOL)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 properties:(id)arg4 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 resourceSize:(long long*)arg2 ;
-(void)_accessedIdsAddObject:(id)arg1 ;
-(BOOL)_unknownKeysContainsObject:(id)arg1 ;
-(void)_unknownKeysAddObject:(id)arg1 ;
-(CGImageRef)_copyCGImageForRow:(id)arg1 size:(CGSize*)arg2 resourceSize:(long long*)arg3 scale:(double*)arg4 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 resourceSize:(long long*)arg2 scale:(double*)arg3 ;
-(void)deleteItemsWithAllKeysContaining:(id)arg1 ;
-(void)insertData:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3 ;
-(void)_saveCacheSize:(long long)arg1 ;
-(void)_accessedIdsRemoveAllObjects;
-(void)_LRUCleanupForMimeType:(id)arg1 ;
-(id)initWithPath:(id)arg1 maxSize:(unsigned long long)arg2 ;
-(BOOL)enableCaseSensitiveLike;
-(BOOL)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 ;
-(BOOL)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 ;
-(id)firstImageKeyWithRootKey:(id)arg1 ;
-(id)itemsForMimeType:(id)arg1 ;
-(id)deleteItemsForMimeType:(id)arg1 ;
-(void)replaceDataForKey:(id)arg1 withData:(id)arg2 mimeType:(id)arg3 ;
-(id)dataForKey:(id)arg1 mimeType:(id)arg2 ;
-(id)allKeys;
-(NSString *)path;
-(void)clear;
-(long long)version;
-(id)dataForKey:(id)arg1 ;
@end

