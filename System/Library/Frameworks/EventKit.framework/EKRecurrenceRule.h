/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKRecurrenceEnd, NSString, NSDate, EKCalendarItem, NSArray;

@interface EKRecurrenceRule : EKObject <NSCopying> {

	BOOL _usesEndDate;
	EKRecurrenceEnd* _cachedEnd;

}

@property (nonatomic,retain) EKRecurrenceEnd * cachedEnd;                           //@synthesize cachedEnd=_cachedEnd - In the implementation block
@property (nonatomic,readonly) BOOL shouldPinMonthDays; 
@property (nonatomic,readonly) SCD_Struct_EK1 gregorianUnits; 
@property (readonly) BOOL usesEndDate;                                              //@synthesize usesEndDate=_usesEndDate - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSDate * cachedEndDate; 
@property (nonatomic,readonly) BOOL dirtyStateMayAffectExceptionDates; 
@property (nonatomic,retain) EKCalendarItem * owner; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) EKRecurrenceEnd * recurrenceEnd; 
@property (nonatomic,readonly) long long frequency; 
@property (nonatomic,readonly) long long interval; 
@property (nonatomic,readonly) long long firstDayOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheMonth; 
@property (nonatomic,readonly) NSArray * daysOfTheYear; 
@property (nonatomic,readonly) NSArray * weeksOfTheYear; 
@property (nonatomic,readonly) NSArray * monthsOfTheYear; 
@property (nonatomic,readonly) NSArray * setPositions; 
+(id)iCalendarValueFromRecurrenceType:(long long)arg1 ;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3 ;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
+(id)recurrenceRuleWithType:(long long)arg1 interval:(unsigned long long)arg2 end:(id)arg3 ;
-(id)init;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(NSString *)calendarIdentifier;
-(EKCalendarItem *)owner;
-(void)setInterval:(long long)arg1 ;
-(long long)interval;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 ;
-(id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2 ;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(id)_persistentRule;
-(EKRecurrenceEnd *)cachedEnd;
-(BOOL)usesEndDate;
-(NSDate *)cachedEndDate;
-(void)setCachedEnd:(EKRecurrenceEnd *)arg1 ;
-(BOOL)shouldPinMonthDays;
-(SCD_Struct_EK1)gregorianUnits;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(long long)firstDayOfTheWeek;
-(BOOL)dirtyStateMayAffectExceptionDates;
-(BOOL)mayOccurAfterDate:(id)arg1 ;
-(BOOL)isSimpleRule;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3 ;
-(void)pinToEndsOfMonthsWithCalendarItem:(id)arg1 ;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)setRecurrenceEnd:(EKRecurrenceEnd *)arg1 ;
-(NSArray *)daysOfTheWeek;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)setPositions;
-(void)setSetPositions:(NSArray *)arg1 ;
-(EKRecurrenceEnd *)recurrenceEnd;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(BOOL)isWeekendRule;
-(BOOL)isWeekdayRule;
-(BOOL)isAnyDayRule;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
@end

