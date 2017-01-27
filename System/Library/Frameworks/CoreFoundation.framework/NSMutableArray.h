/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <libobjc.A.dylib/FCOrderedMutableCollectionAdditions.h>

@interface NSMutableArray : NSArray <FCOrderedMutableCollectionAdditions>
+(id)nonRetainingArray;
+(id)nonRetainingArray;
+(id)copyNonRetainingArray;
+(id)nonRetainingArray;
+(id)cd_arrayWithDoubleValue:(double)arg1 repeated:(unsigned long long)arg2 ;
+(id)cd_arrayWithDoubleValuesStarting:(double)arg1 ending:(double)arg2 count:(unsigned long long)arg3 ;
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjectFromBlock:(/*^block*/id)arg2 ;
-(BOOL)empty;
-(id)dequeue;
-(void)enqueue:(id)arg1 ;
-(id)tk_lastEnqueuedObject;
-(void)tk_enqueueObject:(id)arg1 ;
-(id)tk_nextDequeuedObject;
-(id)tk_dequeueObject;
-(void)tk_ensureHasItemsOrNullUpToIndex:(unsigned long long)arg1 ;
-(void)safelyAddObject:(id)arg1 ;
-(void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1 ;
-(void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)fc_removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1 ;
-(void)fc_removeFirstObject;
-(void)fc_safelyAddObject:(id)arg1 ;
-(void)fc_trimToMaxCount:(unsigned long long)arg1 ;
-(id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)fc_popLastObject;
-(void)fc_rotateRightWithCount:(unsigned long long)arg1 ;
-(void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2 ;
-(void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2 ;
-(id)fc_popFirstObject;
-(void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2 ;
-(void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2 ;
-(void)fc_safelyAddObjectsFromArray:(id)arg1 ;
-(void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2 ;
-(void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2 ;
-(void)fc_reverseObjects;
-(void)removeAllObjectsWithClass:(Class)arg1 ;
-(id)_gkMutableOrderedSet;
-(void)removeExactObject:(id)arg1 ;
-(void)removeExactObjectsInArray:(id)arg1 ;
-(void)fm_safeAddObject:(id)arg1 ;
-(void)hk_removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)nc_pop;
-(void)nc_push:(id)arg1 ;
-(id)nc_peek;
-(unsigned long long)_mapkit_insertSortedAnnotationView:(id)arg1 reverse:(BOOL)arg2 ;
-(unsigned long long)_mapkit_insertSortedAnnotationView:(id)arg1 ;
-(void)_mapkit_sortUsingLatitudeAscending:(BOOL)arg1 ;
-(void)_mapkit_sortUsingLongitudeAscending:(BOOL)arg1 ;
-(void)_mapkit_sortUsingDistanceFromCoordinate:(CLLocationCoordinate2D)arg1 ascending:(BOOL)arg2 ;
-(id)_mapkit_popLastObject;
-(void)_mapkit_sortUsingLatitude;
-(void)_mapkit_sortUsingLongitude;
-(void)_mapkit_sortUsingDistanceFromCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_mapkit_makeObjectsPerformSelector:(SEL)arg1 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)bl_addObjectIfNotPresent:(id)arg1 ;
-(void)bl_addObjectIfIdenticalNotPresent:(id)arg1 ;
-(void)bl_addObjectIfNotNil:(id)arg1 ;
-(void)bl_addObjectsFromArrayIfNotPresent:(id)arg1 ;
-(void)bl_addObjectsFromArrayIfIdenticalNotPresent:(id)arg1 ;
-(void)bl_insertObject:(id)arg1 usingFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)bl_moveIdenticalObjectToFirst:(id)arg1 ;
-(void)addItemsMatchingExtensions:(id)arg1 orTypes:(id)arg2 fromFolder:(id)arg3 ;
-(void)addItemsMatchingType:(id)arg1 fromFolder:(id)arg2 ;
-(void)ic_addNonNilObject:(id)arg1 ;
-(void)removeAllObjectsWithClass:(Class)arg1 ;
-(void)shuffle;
-(void)cr_removeObjectsStartingAtIndex:(unsigned long long)arg1 ;
-(void)cr_insertObject:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)cr_addObject:(id)arg1 orPlaceholder:(id)arg2 ;
-(void)cr_addNonNilObject:(id)arg1 ;
-(unsigned long long)mf_removeObject:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(unsigned long long)mf_insertObject:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 allowDuplicates:(BOOL)arg4 ;
-(unsigned long long)mf_insertObject:(id)arg1 usingComparator:(/*^block*/id)arg2 allowDuplicates:(BOOL)arg3 ;
-(unsigned long long)mf_removeObject:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(BOOL)mf_addObjectIfAbsentAccordingToEquals:(id)arg1 ;
-(void)mf_addObject:(id)arg1 orPlaceholder:(id)arg2 ;
-(void)mf_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)mf_reverseObjects;
-(BOOL)mf_addObjectIfAbsent:(id)arg1 ;
-(void)na_safeAddObject:(id)arg1 ;
-(void)vcp_sortBySize;
-(void)pl_addCFString:(CFStringRef)arg1 ;
-(void)pl_valuesChanged:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(void)_pl_addNonNilObject:(id)arg1 ;
-(void)MSRemoveOneObjectByPointerComparison:(id)arg1 ;
-(void)MSRemoveOneObject:(id)arg1 ;
-(void)ps_addPossibleObject:(id)arg1 ;
-(void)ps_insertObject:(id)arg1 afterObject:(id)arg2 ;
-(void)ps_insertObjectsFromArray:(id)arg1 afterObject:(id)arg2 ;
-(void)performSpecifierUpdatesUsingBlock:(/*^block*/id)arg1 ;
-(void)_cn_addNonNilObjectIfNotPresent:(id)arg1 ;
-(void)_cn_addObject:(id)arg1 orPlaceholder:(id)arg2 ;
-(void)_cn_insertNonNilObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_cn_removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)_cn_sortUsingAuxiliarySortOrder:(id)arg1 transform:(/*^block*/id)arg2 ;
-(void)_cn_addNonNilObject:(id)arg1 ;
-(void)__imRandomizeArray;
-(void)removeFirstObject;
-(void)axSafelyAddObject:(id)arg1 ;
-(void)axSafelyAddObjectsFromArray:(id)arg1 ;
-(void)ax_enqueueObject:(id)arg1 ;
-(id)ax_dequeueObject;
-(id)ax_lastEnqueuedObject;
-(id)ax_nextDequeuedObject;
-(void)cd_divideElementsByDouble:(double)arg1 ;
-(void)cd_elementwiseAddArray:(id)arg1 ;
-(void)cd_elementwiseAddSquaredArray:(id)arg1 ;
-(void)cd_elementwiseAddArray:(id)arg1 weightedBy:(double)arg2 ;
-(void)cd_elementwiseMultiplyArray:(id)arg1 ;
-(void)cd_inplaceCummulativeSum;
-(void)_ui_enqueue:(id)arg1 ;
-(id)_ui_peek;
-(id)_ui_dequeue;
-(void)removeViewsFromSuperview;
-(id)_syncQueue;
-(BOOL)_listContainsOrderedItems;
-(void)_set_listContainsOrderedItems:(BOOL)arg1 ;
-(void)_set_syncQueue:(id)arg1 ;
-(void)_uikbrtInsert:(id)arg1 before:(id)arg2 ;
-(void)_uikbrtInsert:(id)arg1 after:(id)arg2 ;
-(void)_uikbrtInsert:(id)arg1 beforeItemPassingTest:(/*^block*/id)arg2 ;
-(void)_uikbrtRemove:(id)arg1 ;
-(void)_kb_reverse;
-(void)_addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)bw_empty;
-(void)bw_push:(id)arg1 ;
-(id)bw_pop;
-(id)bw_peek;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bs_safeAddObject:(id)arg1 ;
-(void)un_safeAddObject:(id)arg1 class:(Class)arg2 ;
-(void)un_safeAddObject:(id)arg1 classes:(id)arg2 ;
-(void)section_push:(id)arg1 ;
-(id)section_pop;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(void)removeObjectsFromIndices:(unsigned long long*)arg1 numIndices:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)_mutate;
-(void)insertObjectsFromArray:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inSet:(id)arg2 ;
-(void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)replaceObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromSet:(id)arg2 ;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeLastObject;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)removeObjectIdenticalTo:(id)arg1 ;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)setArray:(id)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setSet:(id)arg1 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeFirstObject;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectsInSet:(id)arg1 ;
@end

