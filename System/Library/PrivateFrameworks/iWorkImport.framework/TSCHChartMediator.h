/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TSCHNotifyOnModify;
@class TSCHChartInfo, TSUIntToIntDictionary;

@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying> {

	id<TSCHNotifyOnModify> mObjectToNotify;
	TSCHChartInfo* mChartInfo;
	TSUIntToIntDictionary* mRemoteSeriesIndexForGridSeriesIndex;
	TSUIntToIntDictionary* mGridSeriesIndexForRemoteSeriesIndex;

}

@property (assign,nonatomic) TSCHChartInfo * chartInfo; 
@property (assign,nonatomic) id<TSCHNotifyOnModify> objectToNotify; 
@property (nonatomic,readonly) BOOL isPhantom; 
@property (nonatomic,readonly) int direction; 
+(id)propertiesThatInvalidateMediator;
-(void)willModify;
-(id)copyWithContext:(id)arg1 ;
-(TSCHChartInfo *)chartInfo;
-(void)clearParent;
-(id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2 ;
-(id<TSCHNotifyOnModify>)objectToNotify;
-(void)setObjectToNotify:(id<TSCHNotifyOnModify>)arg1 ;
-(id)initWithChartInfo:(id)arg1 ;
-(void)setChartInfo:(TSCHChartInfo *)arg1 ;
-(BOOL)isPhantom;
-(void)invalidateAndSynchronizeMediator;
-(void)loadFromArchive:(const ChartMediatorArchive*)arg1 ;
-(id)p_errorBarDataForSeries:(unsigned long long)arg1 withSpec:(SCD_Struct_TS534*)arg2 updateType:(int)arg3 ;
-(void)updateGridWithSpec:(SCD_Struct_TS534*)arg1 ;
-(id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1 ;
-(id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
-(id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2 ;
-(id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2 ;
-(id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4 ;
-(id)categoryLabelFormulas;
-(id)commandToChangeCategoryLabelFormulas:(id)arg1 ;
-(id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3 ;
-(id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2 ;
-(id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2 ;
-(id)seriesDataFormulaForSeriesDimension:(id)arg1 ;
-(id)commandToSetNewSeriesIndex:(unsigned long long)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(unsigned long long)p_remoteSeriesIndexForGridSeriesIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned long long)arg1 ;
-(BOOL)preferSeriesToValues;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)direction;
-(BOOL)isEditing;
-(void)saveToArchive:(ChartMediatorArchive*)arg1 ;
@end

