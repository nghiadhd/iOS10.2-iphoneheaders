/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUUUIDSet.h>

@interface TSUMutableUUIDSet : TSUUUIDSet
-(void)removeAllUuids;
-(BOOL)addUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(BOOL)removeUUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)addUUIDs:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeUUIDs:(const unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)addUuidsFromSet:(id)arg1 ;
-(void)addUuidsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeUuidsFromSet:(id)arg1 ;
-(void)removeUuidsFromVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
@end

