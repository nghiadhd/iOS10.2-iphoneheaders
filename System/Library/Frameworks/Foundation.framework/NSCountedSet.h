/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface NSCountedSet : NSMutableSet {

	id _table;
	void* _reserved;

}
+(BOOL)supportsSecureCoding;
-(id)hf_mostCommonObject;
-(id)fc_description;
-(id)mf_debugDescription;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithArray:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
@end

