/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {

	NSMutableSet* _set;
	NSMutableDictionary* _recentTouches;
	double _secondsToExpire;

}
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(BOOL)_didExpireObject:(id)arg1 ;
-(void)_touch:(id)arg1 ;
-(id)initWithSecondsToExpire:(double)arg1 ;
@end

