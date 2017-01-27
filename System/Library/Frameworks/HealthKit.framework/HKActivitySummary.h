/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents, HKQuantity, NSDate;

@interface HKActivitySummary : NSObject <NSSecureCoding, NSCopying> {

	long long _activitySummaryIndex;
	NSDateComponents* _dateComponents;
	HKQuantity* _activeEnergyBurned;
	HKQuantity* _appleExerciseTime;
	HKQuantity* _appleStandHours;
	HKQuantity* _distanceWalkingRunning;
	HKQuantity* _stepCount;
	HKQuantity* _activeEnergyBurnedGoal;
	HKQuantity* _appleExerciseTimeGoal;
	HKQuantity* _appleStandHoursGoal;
	HKQuantity* _deepBreathingDuration;
	HKQuantity* _pushCount;
	HKQuantity* _flightsClimbed;
	long long _wheelchairUse;
	BOOL _dataLoading;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _creationDate;
	NSDate* _energyBurnedGoalDate;

}

@property (setter=_setGregorianDateComponents:,getter=_gregorianDateComponents,nonatomic,copy) NSDateComponents * gregorianDateComponents; 
@property (assign,setter=_setActivitySummaryIndex:,getter=_activitySummaryIndex,nonatomic) long long activitySummaryIndex; 
@property (setter=_setStartDate:,getter=_startDate,nonatomic,retain) NSDate * startDate;                                                                //@synthesize startDate=_startDate - In the implementation block
@property (setter=_setEndDate:,getter=_endDate,nonatomic,retain) NSDate * endDate;                                                                      //@synthesize endDate=_endDate - In the implementation block
@property (setter=_setCreationDate:,getter=_creationDate,nonatomic,retain) NSDate * creationDate;                                                       //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=_activeEnergyCompletionPercentage,nonatomic,readonly) double activeEnergyCompletionPercentage; 
@property (getter=_exerciseTimeCompletionPercentage,nonatomic,readonly) double exerciseTimeCompletionPercentage; 
@property (getter=_standHoursCompletionPercentage,nonatomic,readonly) double standHoursCompletionPercentage; 
@property (getter=_deepBreathingSessionCount,nonatomic,readonly) HKQuantity * deepBreathingSessionCount; 
@property (setter=_setDeepBreathingDuration:,getter=_deepBreathingDuration,nonatomic,retain) HKQuantity * deepBreathingDuration; 
@property (setter=_setPushCount:,getter=_pushCount,nonatomic,retain) HKQuantity * pushCount; 
@property (assign,setter=_setWheelchairUse:,getter=_wheelchairUse,nonatomic) long long wheelchairUse; 
@property (setter=_setFlightsClimbed:,getter=_flightsClimbed,nonatomic,retain) HKQuantity * flightsClimbed; 
@property (assign,setter=_setDataLoading:,getter=_isDataLoading,nonatomic) BOOL dataLoading;                                                            //@synthesize dataLoading=_dataLoading - In the implementation block
@property (setter=_setEnergyBurnedGoalDate:,getter=_energyBurnedGoalDate,nonatomic,retain) NSDate * energyBurnedGoalDate;                               //@synthesize energyBurnedGoalDate=_energyBurnedGoalDate - In the implementation block
@property (nonatomic,retain) HKQuantity * distanceWalkingRunning; 
@property (nonatomic,retain) HKQuantity * stepCount; 
@property (getter=_hasMoveGoal,nonatomic,readonly) BOOL hasMoveGoal; 
@property (nonatomic,retain) HKQuantity * activeEnergyBurned; 
@property (nonatomic,retain) HKQuantity * appleExerciseTime; 
@property (nonatomic,retain) HKQuantity * appleStandHours; 
@property (nonatomic,retain) HKQuantity * activeEnergyBurnedGoal; 
@property (nonatomic,retain) HKQuantity * appleExerciseTimeGoal; 
@property (nonatomic,retain) HKQuantity * appleStandHoursGoal; 
+(BOOL)supportsSecureCoding;
+(BOOL)_validateActivitySummaryDateComponents:(id)arg1 errorMessage:(id*)arg2 ;
+(BOOL)_validateActivitySummaryDateComponentsRange:(id)arg1 endDateComponents:(id)arg2 errorMessage:(id*)arg3 ;
+(id)_highestEnergyBurnedActivityCacheAmongCaches:(id)arg1 ;
+(id)_mostSignificantCacheAmongCaches:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_startDate;
-(HKQuantity *)stepCount;
-(double)_activeEnergyCompletionPercentage;
-(id)_creationDate;
-(void)_setCreationDate:(id)arg1 ;
-(long long)_wheelchairUse;
-(id)_energyBurnedGoalDate;
-(id)_flightsClimbed;
-(id)_decodeQuantityFromCoder:(id)arg1 forKey:(id)arg2 unit:(id)arg3 ;
-(void)_encodeQuantity:(id)arg1 withCoder:(id)arg2 key:(id)arg3 unit:(id)arg4 ;
-(void)_validateQuantityAssignment:(id)arg1 expectedUnit:(id)arg2 propertyName:(id)arg3 ;
-(double)_percentageCompleteWithQuantity:(id)arg1 goalQuantity:(id)arg2 unit:(id)arg3 ;
-(void)_setEnergyBurnedGoalDate:(id)arg1 ;
-(id)_deepBreathingSessionCount;
-(double)_exerciseTimeCompletionPercentage;
-(double)_standHoursCompletionPercentage;
-(void)setStepCount:(HKQuantity *)arg1 ;
-(id)_deepBreathingDuration;
-(id)_pushCount;
-(id)_endDate;
-(BOOL)_hasMoveGoal;
-(void)_setStartDate:(id)arg1 ;
-(void)_setEndDate:(id)arg1 ;
-(id)_gregorianDateComponents;
-(HKQuantity *)activeEnergyBurnedGoal;
-(long long)_activitySummaryIndex;
-(void)_setGregorianDateComponents:(id)arg1 ;
-(void)setActiveEnergyBurnedGoal:(HKQuantity *)arg1 ;
-(HKQuantity *)activeEnergyBurned;
-(HKQuantity *)appleExerciseTime;
-(HKQuantity *)appleStandHours;
-(id)_initWithActivityCache:(id)arg1 shouldIncludePrivateProperties:(BOOL)arg2 ;
-(void)_setFlightsClimbed:(id)arg1 ;
-(void)_setActivitySummaryIndex:(long long)arg1 ;
-(void)_setDataLoading:(BOOL)arg1 ;
-(BOOL)_allFieldsAreEqual:(id)arg1 ;
-(void)_setPushCount:(id)arg1 ;
-(void)_setWheelchairUse:(long long)arg1 ;
-(void)_setDeepBreathingDuration:(id)arg1 ;
-(id)dateComponentsForCalendar:(id)arg1 ;
-(void)setActiveEnergyBurned:(HKQuantity *)arg1 ;
-(void)setAppleExerciseTime:(HKQuantity *)arg1 ;
-(void)setAppleExerciseTimeGoal:(HKQuantity *)arg1 ;
-(void)setAppleStandHours:(HKQuantity *)arg1 ;
-(void)setAppleStandHoursGoal:(HKQuantity *)arg1 ;
-(void)setDistanceWalkingRunning:(HKQuantity *)arg1 ;
-(HKQuantity *)distanceWalkingRunning;
-(HKQuantity *)appleExerciseTimeGoal;
-(HKQuantity *)appleStandHoursGoal;
-(BOOL)_isDataLoading;
@end

