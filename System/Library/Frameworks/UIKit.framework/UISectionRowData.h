/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet, UITableViewRowData;

@interface UISectionRowData : NSObject <NSCopying> {

	BOOL _valid;
	double _headerHeight;
	double _maxHeaderTitleWidth;
	double _footerHeight;
	double _maxFooterTitleWidth;
	double _headerOffset;
	double _footerOffset;
	unsigned long long _numRows;
	unsigned long long _arrayLength;
	float* _rowHeights;
	NSMutableIndexSet* _forcedNegativeRows;
	double* _rowOffsets;
	BOOL _estimatesHeights;
	double _sectionHeight;
	long long _headerAlignment;
	long long _footerAlignment;
	UITableViewRowData* _rowData;
	BOOL _sectionOffsetValid;
	double _sectionOffset;
	long long _sectionRowOffset;

}
-(void)dealloc;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)heightForHeaderInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(double)heightForFooterInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(void)invalidateSectionOffset;
-(void)updateSectionHeightWithDelta:(double)arg1 section:(long long)arg2 updateFooterOffset:(BOOL)arg3 ;
-(double)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(BOOL)arg4 stripPaddingForAbuttingView:(BOOL)arg5 isTopHeader:(BOOL)arg6 ;
-(double)heightForEmptySection:(long long)arg1 inTableView:(id)arg2 rowData:(id)arg3 ;
-(double)_defaultSectionHeaderHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(double)_defaultSectionFooterHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(double)defaultSectionFooterHeight;
-(void)deleteRowAtIndex:(long long)arg1 ;
-(void)addOffset:(double)arg1 fromRow:(long long)arg2 ;
-(double)_offsetForFirstRow;
-(double)offsetForRow:(long long)arg1 ;
-(long long)_rowForPoint:(CGPoint)arg1 beginningWithRow:(long long)arg2 numberOfRows:(long long)arg3 extraHitSpaceBetweenRows:(double)arg4 ;
-(id)initWithRowData:(id)arg1 ;
-(void)setHeight:(double)arg1 forRow:(long long)arg2 inSection:(long long)arg3 ;
-(double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3 ;
-(void)refreshWithSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(void)insertRowAtIndex:(long long)arg1 inSection:(long long)arg2 rowHeight:(double)arg3 tableViewRowData:(id)arg4 ;
-(int)sectionLocationForRow:(long long)arg1 ;
-(int)sectionLocationForReorderedRow:(long long)arg1 ;
-(long long)_rowForPoint:(CGPoint)arg1 extraHitSpaceBetweenRows:(double)arg2 ;
-(double)defaultSectionHeaderHeight;
@end

