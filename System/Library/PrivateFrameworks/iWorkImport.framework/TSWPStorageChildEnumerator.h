/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class TSWPStorage, NSArray;

@interface TSWPStorageChildEnumerator : NSEnumerator {

	TSWPStorage* _storage;
	unsigned _index;
	NSArray* _charOffsetArray;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithStorage:(id)arg1 ;
@end
