/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>

@class OADTableGrid, NSMutableArray;

@interface OADTable : OADDrawable {

	OADTableGrid* mGrid;
	NSMutableArray* mRows;

}
+(void)applyTextStyle:(id)arg1 toParagraphProperties:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)rowCount;
-(id)grid;
-(id)tableProperties;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(id)addRow;
-(void)flipTableRTL;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(id)cellAtPos:(OADTMatrixPos)arg1 ;
-(OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)arg1 ;
-(id)masterCellOfPos:(OADTMatrixPos)arg1 ;
-(void)flattenStyle;
@end

