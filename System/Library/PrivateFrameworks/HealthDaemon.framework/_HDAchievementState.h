/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSCalendar;

@interface _HDAchievementState : NSObject {

	NSDate* _startOfToday;
	NSDate* _startOfYesterday;
	NSCalendar* _calendar;
	NSDate* _now;
	long long _firstCheckedActivitySummaryIndex;
	long long _lastCheckedActivitySummaryIndex;
	long long _consecutiveGoalsMet;
	long long _lastResetSummaryIndexForStreaks;
	NSDate* _lastPerfectWeekDate;

}

@property (nonatomic,readonly) NSCalendar * calendar;                                 //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * now;                                          //@synthesize now=_now - In the implementation block
@property (nonatomic,readonly) NSDate * startOfToday; 
@property (nonatomic,readonly) NSDate * startOfYesterday; 
@property (assign,nonatomic) long long firstCheckedActivitySummaryIndex;              //@synthesize firstCheckedActivitySummaryIndex=_firstCheckedActivitySummaryIndex - In the implementation block
@property (assign,nonatomic) long long lastCheckedActivitySummaryIndex;               //@synthesize lastCheckedActivitySummaryIndex=_lastCheckedActivitySummaryIndex - In the implementation block
@property (assign,nonatomic) long long consecutiveGoalsMet;                           //@synthesize consecutiveGoalsMet=_consecutiveGoalsMet - In the implementation block
@property (assign,nonatomic) long long lastResetSummaryIndexForStreaks;               //@synthesize lastResetSummaryIndexForStreaks=_lastResetSummaryIndexForStreaks - In the implementation block
@property (nonatomic,retain) NSDate * lastPerfectWeekDate;                            //@synthesize lastPerfectWeekDate=_lastPerfectWeekDate - In the implementation block
-(NSCalendar *)calendar;
-(NSDate *)startOfToday;
-(id)initWithCalendar:(id)arg1 now:(id)arg2 ;
-(NSDate *)startOfYesterday;
-(NSDate *)now;
-(long long)firstCheckedActivitySummaryIndex;
-(void)setFirstCheckedActivitySummaryIndex:(long long)arg1 ;
-(long long)lastCheckedActivitySummaryIndex;
-(void)setLastCheckedActivitySummaryIndex:(long long)arg1 ;
-(long long)consecutiveGoalsMet;
-(void)setConsecutiveGoalsMet:(long long)arg1 ;
-(long long)lastResetSummaryIndexForStreaks;
-(void)setLastResetSummaryIndexForStreaks:(long long)arg1 ;
-(NSDate *)lastPerfectWeekDate;
-(void)setLastPerfectWeekDate:(NSDate *)arg1 ;
@end

