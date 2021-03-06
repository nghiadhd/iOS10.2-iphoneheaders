/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBBookmarkProvider.h>

@class WebBookmarkCollection, NSString;

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider> {

	WebBookmarkCollection* _collection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateBookmarks:(BOOL)arg1 andReadingListItems:(BOOL)arg2 matchingString:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned)arg2 onlyArchivedBookmarks:(BOOL)arg3 ;
-(id)databaseHealthInformation;
-(id)initReadonlySafariBookmarkCollection;
@end

