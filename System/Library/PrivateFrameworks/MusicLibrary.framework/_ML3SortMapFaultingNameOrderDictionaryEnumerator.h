/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, ML3DatabaseConnection;

@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator {

	NSEnumerator* _dirtyInsertsEnumerator;
	ML3DatabaseConnection* _connection;
	unsigned long long _offset;

}
-(id)nextObject;
-(id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2 ;
@end

