/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject {

	NSMutableSet* _mutable;
	NSSet* _immutable;

}

@property (readonly) unsigned long long count; 
-(id)immutableSet;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)description;
-(BOOL)containsObject:(id)arg1 ;
@end

