/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate, NSNumber, NSTimeZone;

@interface _HKFitnessFriendActivitySnapshot : HKSample <NSCopying> {

	BOOL _hasCarriedForwardGoals;
	NSUUID* _friendUUID;
	NSUUID* _sourceUUID;
	long long _snapshotIndex;
	NSDate* _snapshotUploadedDate;
	NSNumber* _timeZoneOffsetFromUTCForNoon;
	double _activeHours;
	double _activeHoursGoal;
	double _briskMinutes;
	double _briskMinutesGoal;
	double _energyBurned;
	double _energyBurnedGoal;
	double _stepCount;
	double _pushCount;
	long long _wheelchairUse;
	double _walkingAndRunningDistance;

}

@property (nonatomic,retain) NSUUID * friendUUID;                                  //@synthesize friendUUID=_friendUUID - In the implementation block
@property (nonatomic,retain) NSUUID * sourceUUID;                                  //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (assign,nonatomic) long long snapshotIndex;                              //@synthesize snapshotIndex=_snapshotIndex - In the implementation block
@property (nonatomic,retain) NSDate * snapshotUploadedDate;                        //@synthesize snapshotUploadedDate=_snapshotUploadedDate - In the implementation block
@property (nonatomic,retain) NSNumber * timeZoneOffsetFromUTCForNoon;              //@synthesize timeZoneOffsetFromUTCForNoon=_timeZoneOffsetFromUTCForNoon - In the implementation block
@property (assign,nonatomic) double activeHours;                                   //@synthesize activeHours=_activeHours - In the implementation block
@property (assign,nonatomic) double activeHoursGoal;                               //@synthesize activeHoursGoal=_activeHoursGoal - In the implementation block
@property (assign,nonatomic) double briskMinutes;                                  //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) double briskMinutesGoal;                              //@synthesize briskMinutesGoal=_briskMinutesGoal - In the implementation block
@property (assign,nonatomic) double energyBurned;                                  //@synthesize energyBurned=_energyBurned - In the implementation block
@property (assign,nonatomic) double energyBurnedGoal;                              //@synthesize energyBurnedGoal=_energyBurnedGoal - In the implementation block
@property (assign,nonatomic) double stepCount;                                     //@synthesize stepCount=_stepCount - In the implementation block
@property (assign,nonatomic) double pushCount;                                     //@synthesize pushCount=_pushCount - In the implementation block
@property (assign,nonatomic) long long wheelchairUse;                              //@synthesize wheelchairUse=_wheelchairUse - In the implementation block
@property (assign,nonatomic) double walkingAndRunningDistance;                     //@synthesize walkingAndRunningDistance=_walkingAndRunningDistance - In the implementation block
@property (nonatomic,readonly) double energyBurnedGoalPercentage; 
@property (nonatomic,readonly) double briskMinutesGoalPercentage; 
@property (nonatomic,readonly) double activeHoursGoalPercentage; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (assign,nonatomic) BOOL hasCarriedForwardGoals;                          //@synthesize hasCarriedForwardGoals=_hasCarriedForwardGoals - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)snapshotWithActivitySummary:(id)arg1 ;
+(id)_mostSignificantSnapshotAmongSnapshots:(id)arg1 ;
+(id)_fitnessFriendActivitySnapshotWithSnapshotIndex:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceUUID:(id)arg4 ;
+(id)_fitnessFriendActivitySnapshotWithFriendUUID:(id)arg1 sourceUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 snapshotIndex:(long long)arg5 snapshotUploadedDate:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSTimeZone *)timeZone;
-(double)stepCount;
-(double)energyBurnedGoalPercentage;
-(double)briskMinutesGoalPercentage;
-(double)activeHoursGoalPercentage;
-(BOOL)hasCarriedForwardGoals;
-(void)setHasCarriedForwardGoals:(BOOL)arg1 ;
-(void)setEnergyBurned:(double)arg1 ;
-(void)setBriskMinutes:(double)arg1 ;
-(void)setActiveHours:(double)arg1 ;
-(void)setStepCount:(double)arg1 ;
-(void)setEnergyBurnedGoal:(double)arg1 ;
-(void)setWalkingAndRunningDistance:(double)arg1 ;
-(void)setPushCount:(double)arg1 ;
-(void)setWheelchairUse:(long long)arg1 ;
-(double)energyBurned;
-(double)briskMinutes;
-(double)activeHours;
-(double)energyBurnedGoal;
-(double)walkingAndRunningDistance;
-(double)pushCount;
-(long long)wheelchairUse;
-(NSUUID *)friendUUID;
-(NSDate *)snapshotUploadedDate;
-(NSUUID *)sourceUUID;
-(long long)snapshotIndex;
-(void)setSourceUUID:(NSUUID *)arg1 ;
-(void)setFriendUUID:(NSUUID *)arg1 ;
-(double)activeHoursGoal;
-(void)setActiveHoursGoal:(double)arg1 ;
-(double)briskMinutesGoal;
-(void)setBriskMinutesGoal:(double)arg1 ;
-(void)setSnapshotIndex:(long long)arg1 ;
-(NSNumber *)timeZoneOffsetFromUTCForNoon;
-(void)setTimeZoneOffsetFromUTCForNoon:(NSNumber *)arg1 ;
-(void)setSnapshotUploadedDate:(NSDate *)arg1 ;
-(id)activitySummary;
@end

