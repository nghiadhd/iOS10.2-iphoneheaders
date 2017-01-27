/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDateFormatter, NSNumberFormatter, NSDataDetector;

@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator {

	NSDateFormatter* _dateFormatter;
	NSNumberFormatter* _numberFormatter;
	NSDataDetector* _addressDetector;

}
+(id)sharedGenerator;
-(id)init;
-(void)dealloc;
-(id)_naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(BOOL)arg2 ;
-(long long)_notReallyRandomNumberBetween1AndN:(int)arg1 ;
-(id)_timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4 ;
-(id)_locationStringForEvent:(id)arg1 ;
-(BOOL)_eventIsAlreadyLate:(id)arg1 ;
-(BOOL)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_arrayHasMorningEvents:(id)arg1 ;
-(BOOL)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_arrayHasAfternoonEvents:(id)arg1 ;
-(BOOL)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_doesEventStartEarly:(id)arg1 ;
-(BOOL)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(BOOL)arg2 ;
-(id)_noonDateForEvents:(id)arg1 ;
-(id)_addressDetector;
-(id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1 ;
-(id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(BOOL)arg2 ;
-(id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2 ;
-(void)meCardChanged:(id)arg1 ;
-(id)_sharedNumberFormatter;
-(id)_adjustedMinutesTillEventStarts:(id)arg1 ;
-(BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2 ;
-(id)_sharedDateFormatter;
@end

