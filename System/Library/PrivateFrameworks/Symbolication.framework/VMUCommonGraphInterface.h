/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VMUClassInfoMap;


@protocol VMUCommonGraphInterface <NSObject>
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) unsigned vmPageSize; 
@property (nonatomic,readonly) VMUClassInfoMap * realizedClasses; 
@property (nonatomic,readonly) unsigned zoneCount; 
@property (nonatomic,readonly) unsigned regionCount; 
@property (nonatomic,readonly) unsigned nodeCount; 
@property (nonatomic,readonly) unsigned nodeNamespaceSize; 
@required
-(unsigned)enumerateObjectsWithBlock:(/*^block*/id)arg1;
-(unsigned)nodeCount;
-(VMUClassInfoMap *)realizedClasses;
-(unsigned)zoneCount;
-(id)zoneNameForIndex:(unsigned)arg1;
-(unsigned)vmPageSize;
-(unsigned)enumerateRegionsWithBlock:(/*^block*/id)arg1;
-(unsigned)nodeNamespaceSize;
-(/*function pointer*/void**)nodeDetails:(unsigned)arg1;
-(id)labelForNode:(unsigned)arg1;
-(id)vmuVMRegionForNode:(unsigned)arg1;
-(void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2;
-(void*)copyUserMarked;
-(unsigned)enumerateMarkedObjects:(void*)arg1 withBlock:(/*^block*/id)arg2;
-(unsigned)enumerateReferencesWithBlock:(/*^block*/id)arg1;
-(void)refineTypesWithOverlay:(id)arg1;
-(void*)contentForNode:(unsigned)arg1;
-(unsigned)regionCount;
-(int)pid;

@end

