/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>
#import <iWorkImport/TSDTextSelection.h>

@class TSTCellRegion, NSString;

@interface TSTCellSelection : TSKSelection <TSDTextSelection> {

	long long mSelectionType;
	TSUCellCoord mAnchorCellID;
	TSTCellRegion* mCellRegion;
	TSTCellRegion* mBaseRegion;
	TSUCellCoord mCursorCellID;
	NSRange mSearchReferenceRange;

}

@property (nonatomic,readonly) TSTCellRegion * cellRegion; 
@property (nonatomic,readonly) long long selectionType; 
@property (nonatomic,readonly) TSUCellCoord anchorCellID; 
@property (nonatomic,readonly) TSTCellRegion * baseRegion; 
@property (nonatomic,readonly) TSUCellCoord cursorCellID; 
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (assign,nonatomic) NSRange searchReferenceRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) BOOL isAtEndOfLine; 
+(Class)archivedSelectionClass;
+(id)selectionWithTableModel:(id)arg1 cellID:(TSUCellCoord)arg2 ;
+(id)selectionWithTableModel:(id)arg1 cellRegion:(id)arg2 ;
+(id)selectionWithTableModel:(id)arg1 rowIndices:(id)arg2 ;
+(id)selectionWithTableModel:(id)arg1 columnIndices:(id)arg2 ;
+(id)selectionWithTableModel:(id)arg1 cellUID:(const TSTCellUID*)arg2 ;
-(void)saveToArchive:(SelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 baseRegion:(id)arg5 selectionType:(long long)arg6 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 baseRegion:(id)arg5 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 selectionType:(long long)arg5 ;
-(id)initWithTableModel:(id)arg1 cellRange:(TSUCellRect)arg2 type:(long long)arg3 anchorCellID:(TSUCellCoord)arg4 cursorCellID:(TSUCellCoord)arg5 ;
-(id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3 ;
-(id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3 ;
-(TSTCellRegion *)cellRegion;
-(TSUCellCoord)anchorCellID;
-(TSUCellCoord)cursorCellID;
-(TSTCellRegion *)baseRegion;
-(id)initWithTableModel:(id)arg1 andCellID:(TSUCellCoord)arg2 ;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 ;
-(id)initWithTableModel:(id)arg1 rowIndices:(id)arg2 ;
-(id)initWithTableModel:(id)arg1 columnIndices:(id)arg2 ;
-(NSRange)searchReferenceRange;
-(BOOL)containsSingleCellOrMergeInTable:(id)arg1 ;
-(BOOL)canEditWithCellSubselectionInTable:(id)arg1 ;
-(BOOL)isAtEndOfLine;
-(id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 ;
-(id)initWithTableModel:(id)arg1 selectionType:(long long)arg2 ;
-(id)initWithTableModel:(id)arg1 andCellRange:(TSUCellRect)arg2 ;
-(id)initWithTableModel:(id)arg1 cellID:(TSUCellCoord)arg2 selectionType:(long long)arg3 ;
-(id)initWithTableModel:(id)arg1 rowOrColumn:(long long)arg2 index:(unsigned)arg3 count:(unsigned)arg4 ;
-(id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(SCD_Struct_TS304)arg3 ;
-(id)selectionByExtendingWithCellRange:(TSUCellRect)arg1 inTable:(id)arg2 selectionType:(long long)arg3 cursorCell:(TSUCellCoord)arg4 ;
-(id)selectionByAddingCellRange:(TSUCellRect)arg1 inTable:(id)arg2 withAnchor:(TSUCellCoord)arg3 cursor:(TSUCellCoord)arg4 selectionType:(long long)arg5 ;
-(id)selectionByRemovingCellRange:(TSUCellRect)arg1 inTable:(id)arg2 withAnchor:(TSUCellCoord)arg3 cursor:(TSUCellCoord)arg4 selectionType:(long long)arg5 ;
-(id)selectionAdjustedForRowVisibilityInTableInfo:(id)arg1 ;
-(id)selectionAdjustedForColumnVisibilityInTableInfo:(id)arg1 ;
-(id)selectionAdjustedForGeometryInTableInfo:(id)arg1 ;
-(void)setCellRange:(TSUCellRect)arg1 ;
-(void)insert:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3 ;
-(void)remove:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3 ;
-(BOOL)areCellsInTheSameRegionInTable:(id)arg1 ;
-(BOOL)containsSelection:(id)arg1 ;
-(BOOL)containsCell:(TSUCellCoord)arg1 ;
-(BOOL)canEditWithControlCellSubselectionInTable:(id)arg1 ;
-(BOOL)intersectsPartialMergeRangeInTable:(id)arg1 ;
-(void)setSearchReferenceRange:(NSRange)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(BOOL)isEqualToSelection:(id)arg1 ;
-(long long)selectionType;
-(unsigned long long)cellCount;
@end

