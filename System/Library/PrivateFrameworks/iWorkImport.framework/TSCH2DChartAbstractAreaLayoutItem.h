/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAbstractAreaLayoutItem.h>

@class TSCHChartTitleLayoutItem, TSCHChartDataSetNameLayoutItem, TSCHChartBodyLayoutItem;

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {

	TSCHChartTitleLayoutItem* mTitleElement;
	TSCHChartDataSetNameLayoutItem* mDataSetNameElement;
	TSCHChartBodyLayoutItem* mChartBody;

}

@property (nonatomic,readonly) TSCHChartBodyLayoutItem * bodyLayoutItem; 
-(void)setChartBodyLayoutSize:(CGSize)arg1 ;
-(CGRect)chartBodyLayoutRect;
-(TSCHChartBodyLayoutItem *)bodyLayoutItem;
-(CGRect)i_currentBufferAreaUnitRect;
-(void)dealloc;
@end

