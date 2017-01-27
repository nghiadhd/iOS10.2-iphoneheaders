/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableSet, NSMutableDictionary, NSArray, NSMapTable, PXPlacesMapViewPort;

@interface PXPlacesMapPipelineExecutionContext : NSObject {

	NSDate* _start;
	NSMutableSet* _dataSources;
	NSMutableDictionary* _timerStartDataSource;
	NSMutableDictionary* _timerStopDataSource;
	NSMutableDictionary* _timerStartPipeline;
	NSMutableDictionary* _timerStopPipeline;
	NSDate* _timerStartPlanResultsExecution;
	NSDate* _timerStopPlanResultsExecution;
	/*^block*/id _completionHandler;
	BOOL _stopped;
	NSArray* _callstack;
	double _duration;
	NSMapTable* _changesForDataSources;
	NSArray* _updatePlanResults;
	PXPlacesMapViewPort* _viewPort;

}

@property (readonly) NSArray * dataSources; 
@property (readonly) NSMapTable * changesForDataSources;              //@synthesize changesForDataSources=_changesForDataSources - In the implementation block
@property (readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (retain) NSArray * updatePlanResults;                       //@synthesize updatePlanResults=_updatePlanResults - In the implementation block
@property (retain) PXPlacesMapViewPort * viewPort;                    //@synthesize viewPort=_viewPort - In the implementation block
-(double)duration;
-(void)stop;
-(void)start;
-(NSArray *)dataSources;
-(PXPlacesMapViewPort *)viewPort;
-(void)setViewPort:(PXPlacesMapViewPort *)arg1 ;
-(id)initWithViewPort:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addDataSources:(id)arg1 changesForDataSources:(id)arg2 ;
-(void)startTimerForDataSource:(id)arg1 ;
-(void)stopTimerForDataSource:(id)arg1 ;
-(id)durationForDataSources;
-(void)startTimerForPipeline:(id)arg1 ;
-(void)stopTimerForPipeline:(id)arg1 ;
-(id)durationForPipelines;
-(void)startTimerForExecutionOfPlanResults;
-(void)stopTimerForExecutionOfPlanResults;
-(double)durationForExecutionOfPlanResults;
-(NSMapTable *)changesForDataSources;
-(NSArray *)updatePlanResults;
-(void)setUpdatePlanResults:(NSArray *)arg1 ;
@end

