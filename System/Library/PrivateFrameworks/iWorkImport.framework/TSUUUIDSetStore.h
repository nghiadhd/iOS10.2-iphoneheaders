/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, TSUSparseArray, NSMutableDictionary;

@interface TSUUUIDSetStore : NSObject <NSCopying> {

	NSLock* _lock;
	TSUSparseArray* _uuidSetForIndex;
	NSMutableDictionary* _indexesUsingUuid;
	unsigned _highestIndex;

}

@property (readonly) unsigned long long count; 
-(void)foreachUuidSet:(/*^block*/id)arg1 ;
-(unsigned)indexOfSet:(id)arg1 ;
-(void)p_addSet:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)indexesUsingUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)setForIndex:(unsigned)arg1 ;
-(void)_foreachUuidSet:(/*^block*/id)arg1 ;
-(unsigned)addSetForUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeSetAtIndex:(unsigned)arg1 ;
-(BOOL)containsUuidSet:(id)arg1 ;
-(id)indexesUsingAnyOfUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)subsetStoreForIndexes:(id)arg1 ;
-(unsigned)addSetForSingleUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)initFromMessage:(const UuidSetStoreArchive*)arg1 ;
-(void)encodeToArchive:(UuidSetStoreArchive*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)addSet:(id)arg1 ;
@end

