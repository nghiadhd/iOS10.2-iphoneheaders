/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/MLDDatabaseOperation.h>

@interface MLDRemovePlaylistsOperation : MLDDatabaseOperation
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(BOOL)_removeSource:(int)arg1 usingTransaction:(id)arg2 ;
-(BOOL)_removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3 ;
-(BOOL)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)arg1 ;
-(unsigned long long)type;
-(void)main;
@end

