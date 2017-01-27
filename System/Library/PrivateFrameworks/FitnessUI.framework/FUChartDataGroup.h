/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FUChartDataSetDataSource.h>

@protocol FUChartDataGroupDataSource;
@class NSArray, NSString;

@interface FUChartDataGroup : NSObject <FUChartDataSetDataSource> {

	id<FUChartDataGroupDataSource> _dataSource;
	NSArray* _dataSets;

}

@property (nonatomic,retain) NSArray * dataSets;                                            //@synthesize dataSets=_dataSets - In the implementation block
@property (assign,nonatomic,__weak) id<FUChartDataGroupDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<FUChartDataGroupDataSource>)arg1 ;
-(void)reloadData;
-(NSString *)description;
-(id<FUChartDataGroupDataSource>)dataSource;
-(id)dataSetAtIndex:(unsigned long long)arg1 ;
-(NSArray *)dataSets;
-(void)setDataSets:(NSArray *)arg1 ;
-(unsigned long long)numberOfDataPointsForDataSet:(id)arg1 ;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2 ;
-(id)dataPointsForSet:(id)arg1 ;
-(id)labelsForSet:(id)arg1 ;
-(unsigned long long)_getNumberOfDataSets;
-(id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1 ;
-(void)_reloadDataSet:(id)arg1 ;
-(unsigned long long)_getNumberOfDataPointsInSetAtIndex:(unsigned long long)arg1 ;
-(id)_getPointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(id)_getPointsForSetAtIndex:(unsigned long long)arg1 ;
-(id)_getLabelsForSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDataSets;
-(void)reloadDataInSetAtIndex:(unsigned long long)arg1 ;
-(void)reloadDataPointInSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(void)addDataPointWithXValue:(float)arg1 yValue:(float)arg2 setIndex:(unsigned long long)arg3 ;
-(void)removeDataPointFromSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2 ;
-(id)minXValue;
-(id)maxXValue;
-(id)minYValue;
-(id)maxYValue;
@end

