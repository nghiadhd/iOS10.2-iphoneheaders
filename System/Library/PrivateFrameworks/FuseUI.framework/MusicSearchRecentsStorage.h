/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableArray;

@interface MusicSearchRecentsStorage : NSObject {

	long long _limit;
	NSURL* _persistenceURL;
	NSMutableArray* _recents;
	BOOL _hasChanges;
	long long _maximumNumberOfRecents;

}

@property (readonly) long long maximumNumberOfRecents;              //@synthesize maximumNumberOfRecents=_maximumNumberOfRecents - In the implementation block
+(id)sharedRecentsStorage;
-(void)load;
-(void)clear;
-(id)recentSearches;
-(void)save;
-(id)initWithLimit:(long long)arg1 persistenceURL:(id)arg2 ;
-(void)_addRecent:(id)arg1 replacingRecent:(id)arg2 ;
-(void)addRecent:(id)arg1 ;
-(void)replaceRecent:(id)arg1 withRecent:(id)arg2 ;
-(long long)maximumNumberOfRecents;
@end

