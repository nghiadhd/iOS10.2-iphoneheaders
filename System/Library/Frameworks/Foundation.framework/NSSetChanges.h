/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>

@property (readonly) unsigned long long changeCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)_isToManyChangeInformation;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
-(long long)_toManyPropertyType;
-(void)applyChangesToSet:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(unsigned long long)changeCount;
@end

