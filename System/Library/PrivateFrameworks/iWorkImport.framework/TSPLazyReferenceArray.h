/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray, NSArray;

@interface TSPLazyReferenceArray : NSMutableArray {

	NSMutableArray* _references;
	unsigned long long _mutations;

}

@property (nonatomic,readonly) NSArray * references;              //@synthesize references=_references - In the implementation block
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS23*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeLastObject;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(NSArray *)references;
-(void)addReference:(id)arg1 ;
-(id)referenceAtIndex:(unsigned long long)arg1 ;
@end
