/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject {

	int _days;
	int _ordinalValue;
	long long _frequency;
	long long _interval;
	unsigned long long _count;
	NSArray* _dayNumbers;
	NSArray* _monthNumbers;

}

@property (assign) long long frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign) long long interval;                    //@synthesize interval=_interval - In the implementation block
@property (assign) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (retain) NSArray * dayNumbers;                  //@synthesize dayNumbers=_dayNumbers - In the implementation block
@property (assign) int days;                              //@synthesize days=_days - In the implementation block
@property (assign) int ordinalValue;                      //@synthesize ordinalValue=_ordinalValue - In the implementation block
@property (retain) NSArray * monthNumbers;                //@synthesize monthNumbers=_monthNumbers - In the implementation block
-(id)init;
-(unsigned long long)count;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(void)setInterval:(long long)arg1 ;
-(long long)interval;
-(int)days;
-(id)recurrenceRule;
-(void)setDayNumbers:(NSArray *)arg1 ;
-(void)setMonthNumbers:(NSArray *)arg1 ;
-(void)_setDefaultValues;
-(long long)_frequencyToUse;
-(NSArray *)dayNumbers;
-(int)ordinalValue;
-(NSArray *)monthNumbers;
-(id)daysOfTheWeek;
-(id)setPositions;
-(id)daysOfTheWeekWithWeek:(long long)arg1 ;
-(void)setDays:(int)arg1 ;
-(void)setOrdinalValue:(int)arg1 ;
@end

