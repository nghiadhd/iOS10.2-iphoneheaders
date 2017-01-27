/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSURLCompletionDataSource;
#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSURLCompletionDatabase : NSObject {

	Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16>* _fullTextBookmarkMatchesCache;
	Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16>* _fullTextHistoryMatchesCache;
	Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16>* _prefixBookmarkMatchesCache;
	Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16>* _prefixHistoryMatchesCache;
	NSString* _fullTextBookmarkMatchesCacheString;
	NSString* _fullTextHistoryMatchesCacheString;
	NSString* _prefixBookmarkMatchesCacheString;
	NSString* _prefixHistoryMatchesCacheString;
	id<WBSURLCompletionDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<WBSURLCompletionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(void)initializeURLCompletionOnMainThread;
-(id)init;
-(void)setDataSource:(id<WBSURLCompletionDataSource>)arg1 ;
-(id<WBSURLCompletionDataSource>)dataSource;
-(void)_getSortedPrefixMatchesForTypedString:(id)arg1 topHits:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg2 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg5 bookmarkLimit:(unsigned long long)arg6 ;
-(void)_getSortedFullTextMatchesForTypedString:(id)arg1 topHits:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg2 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg5 bookmarkLimit:(unsigned long long)arg6 ;
-(void)clearBookmarkMatchesCachesKeepingEmptyValues:(BOOL)arg1 ;
-(void)clearBookmarkMatchesCaches;
-(void)clearHistoryMatchesCache;
-(void)_getSortedMatchesForTypedString:(id)arg1 topHits:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg2 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg5 bookmarkLimit:(unsigned long long)arg6 prefixMatchesOnly:(BOOL)arg7 ;
-(void)_getUnsortedPrefixMatchesForTypedString:(id)arg1 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg2 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg3 ;
-(void)_getUnsortedFullTextMatchesForTypedString:(id)arg1 historyMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg2 bookmarkMatches:(Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16>*)arg3 dataTypes:(unsigned)arg4 ;
-(void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned long long)arg4 ;
-(void)clearMatchesCaches;
@end

