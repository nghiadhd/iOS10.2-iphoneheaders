/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/0AppMigrator.migrator/0AppMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MIFileManager : NSObject
+(id)defaultManager;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)itemDoesNotExistAtURL:(id)arg1 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id*)arg5 ;
-(BOOL)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(BOOL)arg3 error:(id*)arg4 ;
-(id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
-(BOOL)_removeACLAtPath:(const char*)arg1 isDir:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_traverseDirectory:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)itemExistsAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)itemExistsAtURL:(id)arg1 ;
-(id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(BOOL)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
-(BOOL)_validateSymlink:(id)arg1 withStartingDepth:(unsigned)arg2 andEndingDepth:(unsigned*)arg3 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned)arg2 GID:(unsigned)arg3 validateSymlinks:(BOOL)arg4 removeACLs:(BOOL)arg5 error:(id*)arg6 ;
-(id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)dataProtectionClassOfItemAtURL:(id)arg1 class:(int*)arg2 error:(id*)arg3 ;
-(BOOL)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(BOOL)arg3 failureIsFatal:(BOOL)arg4 withError:(id*)arg5 ;
-(BOOL)markBundleAsPlaceholder:(id)arg1 withError:(id*)arg2 ;
-(BOOL)bundleAtURLIsPlaceholder:(id)arg1 ;
-(BOOL)setInstallType:(id)arg1 onBundle:(id)arg2 error:(id*)arg3 ;
-(id)installTypeForBundle:(id)arg1 error:(id*)arg2 ;
-(BOOL)setUniqueInstallID:(id)arg1 onBundle:(id)arg2 error:(id*)arg3 ;
-(id)uniqueInstallIDForBundle:(id)arg1 error:(id*)arg2 ;
@end

