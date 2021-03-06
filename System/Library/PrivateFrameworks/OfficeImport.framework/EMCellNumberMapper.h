/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class EDStyle, EDWorkbook;

@interface EMCellNumberMapper : CMMapper {

	double edValue;
	EDStyle* edStyle;
	EDWorkbook* workbook;
	double _columnWidth;

}

@property (assign) double columnWidth;              //@synthesize columnWidth=_columnWidth - In the implementation block
-(double)columnWidth;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithDoubleValue:(double)arg1 style:(id)arg2 columnWidth:(double)arg3 workbook:(id)arg4 parent:(id)arg5 ;
-(id)formatValueAsNumber;
-(id)insertRedSpanIfNegativeAt:(id)arg1 ;
-(void)setColumnWidth:(double)arg1 ;
@end

