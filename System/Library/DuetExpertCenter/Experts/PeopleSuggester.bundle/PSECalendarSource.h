/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PSESource.h>

@class EKEventStore;

@interface PSECalendarSource : PSESource {

	EKEventStore* _store;
	BOOL _allowed;

}
+(id)sharedInstance;
-(id)peopleWithLimit:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(void)_setupCalendar;
-(id)_currentEvent;
-(id)_nextEvent;
-(id)init;
@end

