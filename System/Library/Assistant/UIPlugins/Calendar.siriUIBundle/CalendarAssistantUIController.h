/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Calendar.siriUIBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <libobjc.A.dylib/EKDayViewDataSource.h>
#import <libobjc.A.dylib/EKDayViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class EKEventStore, UIGestureRecognizer, EKCalendarDate, NSMutableArray, NSString;

@interface CalendarAssistantUIController : SiriUISnippetViewController <EKDayViewDataSource, EKDayViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _isDraft;
	BOOL _allDayEventsInSection;
	EKEventStore* _eventStore;
	UIGestureRecognizer* _eventTapRecognizer;
	EKCalendarDate* _date;
	NSMutableArray* _events;
	NSMutableArray* _sections;
	unsigned long long _hiddenEventCount;

}

@property (assign,nonatomic) EKEventStore * eventStore;                             //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * eventTapRecognizer;              //@synthesize eventTapRecognizer=_eventTapRecognizer - In the implementation block
@property (nonatomic,retain) EKCalendarDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                               //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL isDraft;                                          //@synthesize isDraft=_isDraft - In the implementation block
@property (assign,nonatomic) unsigned long long hiddenEventCount;                   //@synthesize hiddenEventCount=_hiddenEventCount - In the implementation block
@property (assign,nonatomic) BOOL allDayEventsInSection;                            //@synthesize allDayEventsInSection=_allDayEventsInSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)openEventStore;
+(void)closeEventStore;
-(void)tappedSingleEventGesture:(id)arg1 ;
-(BOOL)_crossesMultipleDays;
-(UIGestureRecognizer *)eventTapRecognizer;
-(BOOL)allDayEventsInSection;
-(void)setAllDayEventsInSection:(BOOL)arg1 ;
-(void)_openEvent:(id)arg1 ;
-(void)setEventTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)_buildSections;
-(unsigned long long)hiddenEventCount;
-(BOOL)_buildEvents;
-(id)_eventFromAceEvent:(id)arg1 ;
-(void)setHiddenEventCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(EKCalendarDate *)date;
-(void)loadView;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(void)setDate:(EKCalendarDate *)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(id)initWithAceObject:(id)arg1 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(NSMutableArray *)events;
-(double)desiredHeight;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(BOOL)isDraft;
-(void)setIsDraft:(BOOL)arg1 ;
@end

