/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSMutableDictionary, NSPropertyDescription;

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {

	int _cd_rc;
	struct {
		unsigned _isFault : 1;
		unsigned _mustPropagateDelete : 1;
		unsigned _ignoringIdempotentKVO : 1;
		unsigned _mustCopyOnWrite : 1;
		unsigned _isImmutableCopy : 1;
		unsigned _reserved : 11;
		unsigned _relationship : 16;
	}  _flags;
	id _realSet;
	NSManagedObject* _source;
	unsigned* _orderKeys;
	id _grottyHack;
	NSMutableDictionary* _forcedKeys;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) BOOL fault; 
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(Class)classForArchiver;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3 ;
-(void)willRead;
-(void)turnIntoFault;
-(void)willReadWithContents:(id)arg1 ;
-(BOOL)_shouldProcessKVOChange;
-(BOOL)_isIdenticalFault:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)_orderedObjectsAndKeys;
-(BOOL)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id*)arg2 ;
-(void)_assignOrderKeysUsingCount:(unsigned)arg1 ;
-(unsigned)_orderKeyForObject:(id)arg1 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setProcessingIdempotentKVO:(BOOL)arg1 ;
-(void)_updateOrderKeysFromOrderOfObjectIDs:(id)arg1 ;
-(void)_populateOrderKeysUsingSnapshot:(id)arg1 orderKeys:(id)arg2 newIndexes:(unsigned long long*)arg3 reorderedIndexes:(char**)arg4 ;
-(id)_newOrderKeys;
-(BOOL)_hasOrderKeys;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)description;
-(void)addObjectsFromArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)unionSet:(id)arg1 ;
-(id)allObjects;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(Class)classForCoder;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)minusSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSManagedObject *)source;
-(BOOL)_tryRetain;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(BOOL)isFault;
-(NSPropertyDescription *)relationship;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)willChange;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
@end

