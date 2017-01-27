/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTPasteMap : NSObject {

	set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> >* mRowTgtToPbMaps;
	set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> >* mColumnTgtToPbMaps;

}
-(NSRange)p_tgtRangeFromPbRange:(const TSTColumnOrRowMap*)arg1 andMap:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg2 ;
-(TSUCellRect)p_tgtRangeForPbRange:(TSUCellRect)arg1 givenColumnMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg2 rowMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg3 ;
-(unsigned short)p_indexForTgtToPbMaps:(set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg1 andMap:(TSTColumnOrRowMap*)arg2 ;
-(TSUCellCoord)p_tgtCellIDForPbCellID:(TSUCellCoord)arg1 givenColumnMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg2 rowMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg3 ;
-(TSUCellRect)pbRangeForTgtRange:(TSUCellRect)arg1 ;
-(TSUCellCoord)pbCellIDForTgtCellID:(TSUCellCoord)arg1 ;
-(vector<TSUCellRect, std::__1::allocator<TSUCellRect> >*)p_tgtRangesForPbRange:(TSUCellRect)arg1 givenColumnMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg2 rowMaps:(const multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >*)arg3 ;
-(id)initWithPbRange:(TSUCellRect)arg1 tgtRange:(TSUCellRect)arg2 ;
-(id)initWithPbTable:(id)arg1 pbRange:(TSUCellRect)arg2 tgtTable:(id)arg3 tgtRange:(TSUCellRect)arg4 flag:(int)arg5 ;
-(id)createTgtRegionFromPbRegion:(id)arg1 ;
-(id)createTgtRegionByIntersectingPbRegion:(id)arg1 andTgtRegion:(id)arg2 ;
-(id)createTgtMergeMapFromPbMergeMap:(id)arg1 andTgtRegion:(id*)arg2 andTgtBodyRange:(TSUCellRect)arg3 ;
@end

