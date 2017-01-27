/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebStorageManager : NSObject
+(id)sharedWebStorageManager;
+(void)setStorageDatabaseIdleInterval:(double)arg1 ;
+(void)closeIdleLocalStorageDatabases;
+(id)_storageDirectoryPath;
-(unsigned long long)diskUsageForOrigin:(id)arg1 ;
-(id)origins;
-(void)deleteOrigin:(id)arg1 ;
-(void)deleteAllOrigins;
-(void)syncLocalStorage;
-(void)syncFileSystemAndTrackerDatabase;
-(id)init;
@end

