/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@protocol OS_dispatch_source;
@class ML3DatabaseConnection, NSMutableSet, NSObject;

@interface MLDProtoSyncImportOperation : MLDImportOperation {

	unsigned _totalSyncPackageCount;
	unsigned _syncPackageNum;
	BOOL _syncSessionStarted;
	int _syncType;
	ML3DatabaseConnection* _connection;
	BOOL _isServerImport;
	NSMutableSet* _syncIdsToUnlink;
	NSObject*<OS_dispatch_source> _readSource;

}
-(unsigned long long)importSource;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_processSyncPackage:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(void)_unlinkUnavailableMediaItems;
-(BOOL)_processSyncHeader:(id)arg1 ;
-(BOOL)_processSyncError:(id)arg1 ;
-(BOOL)_processSyncOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processMediaItemOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processPlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(void)cancel;
-(void)main;
@end

