/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@interface CLSCalendar : NSObject
+(void)initialize;
+(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
+(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
+(long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
+(id)startOfDayForDate:(id)arg1 ;
+(id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4 ;
+(id)dateComponentsWithUniversalDate:(id)arg1 atLocation:(id)arg2 ;
+(id)dateFromComponents:(id)arg1 inTimeZone:(id)arg2 ;
+(id)currentLocalDate;
+(long long)yearFromDate:(id)arg1 ;
+(id)dateFromComponents:(unsigned long long)arg1 ofDate:(id)arg2 ;
+(id)dateComponentsWithUniversalDates:(id)arg1 atLocation:(id)arg2 ;
+(id)dateByAddingDays:(long long)arg1 toDate:(id)arg2 ;
+(long long)weekdayFromDate:(id)arg1 ;
+(long long)monthFromDate:(id)arg1 ;
+(id)componentsFromDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)localDateFromUniversalDate:(id)arg1 atLocation:(id)arg2 ;
+(id)universalDateFromLocalDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)localDateFromUniversalDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)universalDateFromLocalDate:(id)arg1 atLocation:(id)arg2 ;
+(id)dateBySettingYear:(long long)arg1 ofDate:(id)arg2 ;
+(long long)yearForWeekOfYearFromDate:(id)arg1 ;
+(long long)weekOfYearFromDate:(id)arg1 ;
+(long long)dayFromDate:(id)arg1 ;
+(long long)hourFromDate:(id)arg1 ;
+(id)dateByAddingMonths:(long long)arg1 toDate:(id)arg2 ;
+(id)dateByAddingYears:(long long)arg1 toDate:(id)arg2 ;
+(id)dateByAddingWeeksOfYear:(long long)arg1 toDate:(id)arg2 ;
@end

