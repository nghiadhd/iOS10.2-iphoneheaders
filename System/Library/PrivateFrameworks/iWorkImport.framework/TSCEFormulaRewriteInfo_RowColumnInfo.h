/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCEFormulaRewrite_Uids, NSArray, TSUMutableUUIDSet, NSIndexSet, TSUUUIDSet;

@interface TSCEFormulaRewriteInfo_RowColumnInfo : NSObject {

	UUIDData<TSP::UUIDData> _tableUID;
	UUIDData<TSP::UUIDData> _conditionalStyleOwnerUID;
	TSCEFormulaRewrite_Uids* _rowOrColumnUids;
	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _rowOrColumnUuids;
	BOOL _isRows;
	NSArray* _rangeEntries;
	TSCERangeCoordinate _tableRange;
	TSCEFormulaRewriteInfo_RowColumnInfo* _auxRowColumnInfo;
	TSUMutableUUIDSet* _expandedRowColumnUuids;
	UUIDData<TSP::UUIDData> _insertAtUid;

}

@property (nonatomic,readonly) const UUIDData<TSP::UUIDData>* tableUID;                                  //@synthesize tableUID=_tableUID - In the implementation block
@property (nonatomic,readonly) const UUIDData<TSP::UUIDData>* conditionalStyleOwnerUID;                  //@synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID - In the implementation block
@property (nonatomic,readonly) BOOL isRows;                                                              //@synthesize isRows=_isRows - In the implementation block
@property (nonatomic,readonly) BOOL isColumns; 
@property (nonatomic,retain,readonly) TSCEFormulaRewrite_Uids * rowOrColumnUids;                         //@synthesize rowOrColumnUids=_rowOrColumnUids - In the implementation block
@property (nonatomic,readonly) const vector<TSU::UUIDData<TSP::UUIDData>* rowOrColumnUuids;              //@synthesize rowOrColumnUuids=_rowOrColumnUuids - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * rowOrColumnIndices; 
@property (nonatomic,retain,readonly) TSUUUIDSet * expandedRowColumnUuids;                               //@synthesize expandedRowColumnUuids=_expandedRowColumnUuids - In the implementation block
@property (nonatomic,retain) TSCEFormulaRewriteInfo_RowColumnInfo * auxRowColumnInfo;                    //@synthesize auxRowColumnInfo=_auxRowColumnInfo - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> insertAtUid;                                        //@synthesize insertAtUid=_insertAtUid - In the implementation block
-(void)saveToMessage:(ColumnOrRowUuidsInfoArchive*)arg1 ;
-(id)initFromMessage:(const ColumnOrRowUuidsInfoArchive*)arg1 ;
-(const UUIDData<TSP::UUIDData>*)tableUID;
-(const UUIDData<TSP::UUIDData>*)conditionalStyleOwnerUID;
-(void)unloadIndexes;
-(BOOL)isRows;
-(const vector<TSU::UUIDData<TSP::UUIDData>*)rowOrColumnUuids;
-(id)initWithFormulaOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 uuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 areRows:(BOOL)arg3 ;
-(unsigned short)offsetForRowIndex:(unsigned short)arg1 ;
-(TSCEFormulaRewrite_Uids *)rowOrColumnUids;
-(unsigned short)offsetForUpdatedRowIndex:(unsigned short)arg1 isRemoveRows:(BOOL)arg2 ;
-(TSCERangeCoordinate)affectedRangeForRemoveRows;
-(TSCEFormulaRewriteInfo_RowColumnInfo *)auxRowColumnInfo;
-(NSIndexSet *)rowOrColumnIndices;
-(BOOL)isColumns;
-(void)loadIndexesForTable:(id)arg1 forRemoveRows:(BOOL)arg2 ;
-(void)createAuxRowColumnInfoForMove;
-(TSUCellCoord)updatedCellCoordinateForRewriteType:(int)arg1 forTableUID:(const UUIDData<TSP::UUIDData>*)arg2 originalCellCoordinate:(TSUCellCoord)arg3 ;
-(TSUCellCoord)previousCellCoordinateForRewriteType:(int)arg1 forTableUID:(const UUIDData<TSP::UUIDData>*)arg2 updatedCellCoordinate:(TSUCellCoord)arg3 ;
-(BOOL)indexIsAffected:(unsigned short)arg1 ;
-(UUIDData<TSP::UUIDData>)uuidForIndex:(unsigned short)arg1 ;
-(unsigned short)indexForUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(TSCERangeCoordinate)affectedRangeForInsertRows;
-(TSCERangeCoordinate)affectedRangeForMoveRows;
-(vector<TSCERangeCoordinate, std::__1::allocator<TSCERangeCoordinate> >*)coordRangesForInsertRemove;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)uuidsForRowsInRange:(NSRange)arg1 ;
-(void)setAuxRowColumnInfo:(TSCEFormulaRewriteInfo_RowColumnInfo *)arg1 ;
-(TSUUUIDSet *)expandedRowColumnUuids;
-(UUIDData<TSP::UUIDData>)insertAtUid;
-(void)setInsertAtUid:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)dealloc;
-(id)description;
-(TSCERangeCoordinate)tableRange;
@end

