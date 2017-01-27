/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDAchievementEngineDelegate.h>
#import <libobjc.A.dylib/_HKAchievementPredicateWorkoutsEnvironmentDataSource.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, HDTransientAchievementDataStore, NSCalendar, HKActivitySummary, NSMutableArray, NSString;

@interface HDAchievementDoctor : NSObject <HDAchievementEngineDelegate, _HKAchievementPredicateWorkoutsEnvironmentDataSource> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	HDTransientAchievementDataStore* _dataStore;
	NSCalendar* _calendar;
	HKActivitySummary* _currentActivitySummary;
	HKActivitySummary* _yesterdayActivitySummary;
	NSMutableArray* _workouts;
	NSMutableArray* _workoutEndDates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)currentDate;
-(BOOL)_queue_detectMissingAchievements:(id*)arg1 resultingKeyValues:(id*)arg2 error:(id*)arg3 ;
-(BOOL)_queue_saveMissingAchievements:(id)arg1 keyValues:(id)arg2 error:(id*)arg3 ;
-(void)_addWorkout:(id)arg1 ;
-(id)_fetchActivitySummariesOrderedByCacheIndexWithError:(id*)arg1 ;
-(id)_fetchWorkoutsSortedByEndDateWithError:(id*)arg1 ;
-(id)_fetchAchievementsWithError:(id*)arg1 ;
-(id)_queue_detectAchievementsForActivitySummaries:(id)arg1 workouts:(id)arg2 getResultingKeyValues:(id*)arg3 ;
-(id)_queue_findExpectedAchievements:(id)arg1 missingFromAchievements:(id)arg2 ;
-(id)_newEmptyActivitySummaryWithStartDate:(id)arg1 startDateComponents:(id)arg2 calorieGoal:(id)arg3 ;
-(BOOL)_isActivitySummary:(id)arg1 oneDayAfterActivitySummary:(id)arg2 ;
-(id)_runAchievementEngine:(id)arg1 withPredicateEnvironment:(id)arg2 dataStore:(id)arg3 todayActivitySummary:(id)arg4 yesterdayActivitySummary:(id)arg5 currentDate:(id)arg6 addedWorkouts:(id)arg7 ;
-(id)_achievementsGroupedByActivityCacheIndex:(id)arg1 ;
-(long long)activitySummaryIndexToday;
-(id)energyBurnedGoalYesterday;
-(id)energyBurnedGoalToday;
-(double)caloriesBurnedYesterday;
-(double)caloriesBurnedToday;
-(double)briskMinutesYesterday;
-(double)briskMinutesToday;
-(unsigned long long)standingHoursYesterday;
-(unsigned long long)standingHoursToday;
-(unsigned long long)stepsTakenYesterday;
-(unsigned long long)stepsTakenToday;
-(id)workoutsEndingAfterAnchor:(long long)arg1 newAnchor:(long long*)arg2 ;
-(long long)mostRecentWorkoutAnchor;
-(id)workoutsOfType:(id)arg1 ;
-(id)workoutsInDateRangeStart:(id)arg1 end:(id)arg2 ;
-(id)initWithProfile:(id)arg1 targetQueue:(id)arg2 ;
-(void)runAchievementsFixupAsDryRun:(BOOL)arg1 persistingResultingKeyValues:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

