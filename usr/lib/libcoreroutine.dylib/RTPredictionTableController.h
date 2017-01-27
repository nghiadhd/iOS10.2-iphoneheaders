/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, RTPersistenceManager;

@interface RTPredictionTableController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _predictionTableName;
	RTPersistenceManager* _persistenceManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * predictionTableName;                         //@synthesize predictionTableName=_predictionTableName - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchPredictionTablePropertyListRepresentationWithHandler:(/*^block*/id)arg1 ;
-(void)dumpPredictionTable:(/*^block*/id)arg1 ;
-(id)initWithPredictionTableName:(id)arg1 persistenceManager:(id)arg2 ;
-(void)_createPredictionTableWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_deletePredictionTableWithContext:(id)arg1 save:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)_createFeatureAddonsFromConditionsMO:(id)arg1 ;
-(id)_combinedFilterPredicateFromAddons:(id)arg1 ;
-(id)_fetchPredictionTable:(id)arg1 error:(id*)arg2 ;
-(void)_addResults:(id)arg1 featureAddons:(id)arg2 predictionTable:(id)arg3 ;
-(void)_dumpPredictionTable:(id)arg1 ;
-(void)createPredictionTable:(/*^block*/id)arg1 ;
-(void)deletePredictionTable:(/*^block*/id)arg1 ;
-(id)_evaluateAddonsAndFilterPredictionsForObject:(id)arg1 predictionTable:(id)arg2 ;
-(void)addResults:(id)arg1 featureAddons:(id)arg2 ;
-(NSString *)predictionTableName;
-(void)setPredictionTableName:(NSString *)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)_predictionTableMetricWithHandler:(/*^block*/id)arg1 ;
-(id)_predictionTableMetricOfPredictionTable:(id)arg1 ;
-(void)predictionTableMetricWithHandler:(/*^block*/id)arg1 ;
-(void)logRecommendedApps;
-(void)_logRecommendedApps:(id)arg1 ;
@end

