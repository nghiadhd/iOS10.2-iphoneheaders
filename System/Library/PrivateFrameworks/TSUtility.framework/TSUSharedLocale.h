/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSArray;

@interface TSUSharedLocale : NSObject {

	CFLocaleRef mCurrentLocale;
	NSArray* mObserverObjects;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedLocale;
-(id)init;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFLocaleRef)currentLocale;
-(void)datePreferencesChanged:(id)arg1 ;
@end

