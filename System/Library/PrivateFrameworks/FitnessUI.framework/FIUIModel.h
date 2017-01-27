/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIUIAchievementsModelDelegate.h>

@protocol OS_dispatch_queue;
@class FIUIWeeklyGoalModel, FIUIAchievementsModel, NSHashTable, NSMutableDictionary, _HKCurrentActivitySummaryQuery, HKCurrentActivityCacheQuery, HKActivitySummary, HKActivityCache, NSObject, NSArray, NSPredicate, HKHealthStore, NSDictionary, NSString;

@interface FIUIModel : NSObject <FIUIAchievementsModelDelegate> {

	FIUIWeeklyGoalModel* _weeklyGoalModel;
	FIUIAchievementsModel* _achievementsModel;
	NSHashTable* _observers;
	NSMutableDictionary* _currentActivitySummaryQueryClients;
	NSMutableDictionary* _currentActivityCacheQueryClients;
	_HKCurrentActivitySummaryQuery* _queue_currentActivitySummaryQuery;
	HKCurrentActivityCacheQuery* _queue_currentActivityCacheQuery;
	long long _queue_activitySummaryQueryRetries;
	long long _queue_activityCacheQueryRetries;
	HKActivitySummary* _queue_currentActivitySummaryForClients;
	HKActivityCache* _queue_currentActivityCacheForClients;
	NSObject*<OS_dispatch_queue> _activityQueryClientQueue;
	NSArray* _queue_currentMoveResults;
	NSArray* _queue_currentExerciseResults;
	NSArray* _queue_currentStandResults;
	NSPredicate* _sourcesPredicate;
	NSObject*<OS_dispatch_queue> _sourcesQueue;
	HKHealthStore* _healthStore;
	NSDictionary* _currentActivitySummaryQueryCollectionIntervalOverrides;

}

@property (nonatomic,readonly) FIUIWeeklyGoalModel * weeklyGoalModel; 
@property (nonatomic,readonly) FIUIAchievementsModel * achievementsModel; 
@property (nonatomic,readonly) NSPredicate * sourcesPredicate; 
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSDictionary * currentActivitySummaryQueryCollectionIntervalOverrides;              //@synthesize currentActivitySummaryQueryCollectionIntervalOverrides=_currentActivitySummaryQueryCollectionIntervalOverrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isWheelchairUser;
+(id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
+(id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
+(id)activityChartQueryForStartDate:(id)arg1 endDate:(id)arg2 moveintervalSize:(id)arg3 exerciseIntervalSize:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)executeQuery:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_setKnownSources:(id)arg1 ;
-(void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2 ;
-(id)_createCurrentActivityCacheQuery;
-(void)_queue_restartCurrentActivityCacheQueryAfterError;
-(id)_createCurrentActivitySummaryQuery;
-(void)_queue_restartCurrentActivitySummaryQueryAfterError;
-(NSPredicate *)sourcesPredicate;
-(void)achievementsDidChangeInModel:(id)arg1 ;
-(FIUIWeeklyGoalModel *)weeklyGoalModel;
-(void)_printStatisticsCollection:(id)arg1 ;
-(void)_printUpdatedStatistics:(id)arg1 ;
-(FIUIAchievementsModel *)achievementsModel;
-(void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(id)startCurrentActivityCacheWithChartsQueryWithHandler:(/*^block*/id)arg1 ;
-(void)stopCurrentActivityCacheWithGraphsQueryForClientToken:(id)arg1 ;
-(id)startCurrentActivitySummaryQueryWithHandler:(/*^block*/id)arg1 ;
-(void)stopCurrentActivitySummaryQueryForClientToken:(id)arg1 ;
-(void)weeklySummaryInfoForDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)basalEnergyBurnTotalForDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)basalMetabolicRateForDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)currentActivitySummaryQueryCollectionIntervalOverrides;
-(void)setCurrentActivitySummaryQueryCollectionIntervalOverrides:(NSDictionary *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)stopQuery:(id)arg1 ;
@end

