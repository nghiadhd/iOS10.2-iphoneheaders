/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartModel, NSArray, TSCH3DChartType, TSCHChartSeriesType, TSCHChartAxis, TSCHChartSeries, TSCHChartInfo;

@interface TSCH3DChartModelEnumerator : NSObject {

	TSCHChartModel* mModel;
	NSArray* mSeriesList;
	unsigned long long mNumberOfValues;
	TSCH3DChartType* mChartType;
	TSCHChartSeriesType* mSeriesType;
	TSCHChartAxis* mCoordinateAxis;
	TSCHChartAxis* mValueAxis;
	double mIntercept;
	double mUnitSpaceIntercept;
	ValueEnumerator mSeries;
	ValueEnumerator mCoordinate;
	vector<double, std::__1::allocator<double> >* mSeriesValues;
	vector<double, std::__1::allocator<double> >* mCoordinateValues;

}

@property (nonatomic,readonly) TSCHChartSeries * series; 
@property (nonatomic,readonly) tvec2<int> size; 
@property (nonatomic,readonly) TSCHChartModel * model; 
@property (nonatomic,readonly) TSCHChartInfo * info; 
@property (nonatomic,readonly) TSCH3DChartType * chartType; 
@property (nonatomic,readonly) TSCHChartSeriesType * seriesType; 
+(id)enumeratorWithModel:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3 ;
-(unsigned long long)numberOfSeries;
-(TSCHChartSeriesType *)seriesType;
-(double)unitSpaceIntercept;
-(id)seriesEnumerator;
-(id)nextSeries;
-(id)elementEnumerator;
-(id)nextElement;
-(id)reverseSeriesEnumerator;
-(unsigned)valueLabelPositionForAxisValue:(double)arg1 ;
-(BOOL)isValidNonZero;
-(id)initWithModel:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3 ;
-(void)resetForReverseSeriesEnumeration:(BOOL)arg1 ;
-(id)p_resetCoordinateEnumeration;
-(unsigned long long)countSeries;
-(void)updateAxes;
-(double)axisSpaceValue;
-(double)intercept;
-(id)nextSeries:(unsigned long long)arg1 ;
-(id)nextElement:(unsigned long long)arg1 ;
-(double)groupValue;
-(double)unitSpaceValue;
-(BOOL)isStackedPercentageThatRoundsDownToZero;
-(double)unitSpaceValueForAxisValue:(double)arg1 ;
-(id)valueStringForLabelResources:(id)arg1 ;
-(BOOL)showValueLabels;
-(BOOL)showSeriesName;
-(id)seriesFill;
-(id)seriesFillOrStrokeColor;
-(BOOL)skipZeroValues;
-(tvec2<int>)size;
-(void)dealloc;
-(BOOL)isValid;
-(tvec2<int>)position;
-(TSCHChartInfo *)info;
-(TSCHChartModel *)model;
-(unsigned long long)index;
-(id)seriesName;
-(TSCHChartSeries *)series;
-(id)valueString;
-(unsigned long long)elementIndex;
-(TSCH3DChartType *)chartType;
-(void)updateValue;
@end

