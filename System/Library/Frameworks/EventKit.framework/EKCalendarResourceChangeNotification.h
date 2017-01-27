/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@class NSString, NSDate, NSNumber;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification {

	NSString* _location;
	NSString* _calendarName;
	NSDate* _startDate;
	NSDate* _endDate;
	BOOL _allDay;
	NSString* _eventID;
	unsigned _changeType;
	BOOL _dateChanged;
	BOOL _timeChanged;
	BOOL _locationChanged;
	BOOL _titleChanged;
	NSNumber* _createCount;
	NSNumber* _updateCount;
	NSNumber* _deleteCount;
	NSDate* _startDateForNextOccurrence;

}

@property (nonatomic,retain) NSString * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * calendarName;                          //@synthesize calendarName=_calendarName - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * startDateForNextOccurrence;              //@synthesize startDateForNextOccurrence=_startDateForNextOccurrence - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                      //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSString * eventID;                               //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) unsigned changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) BOOL dateChanged;                                 //@synthesize dateChanged=_dateChanged - In the implementation block
@property (assign,nonatomic) BOOL timeChanged;                                 //@synthesize timeChanged=_timeChanged - In the implementation block
@property (assign,nonatomic) BOOL locationChanged;                             //@synthesize locationChanged=_locationChanged - In the implementation block
@property (assign,nonatomic) BOOL titleChanged;                                //@synthesize titleChanged=_titleChanged - In the implementation block
@property (nonatomic,retain) NSNumber * createCount;                           //@synthesize createCount=_createCount - In the implementation block
@property (nonatomic,retain) NSNumber * updateCount;                           //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) NSNumber * deleteCount;                           //@synthesize deleteCount=_deleteCount - In the implementation block
-(BOOL)supportsDisplay;
-(id)_resourceChangeStringWithOptions:(unsigned long long)arg1 ;
-(long long)_changedPropertyCount;
-(id)allDescriptionStringsWithOptions:(unsigned long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSNumber *)deleteCount;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(NSString *)calendarName;
-(void)setCalendarName:(NSString *)arg1 ;
-(NSNumber *)createCount;
-(void)setCreateCount:(NSNumber *)arg1 ;
-(void)setUpdateCount:(NSNumber *)arg1 ;
-(void)setDeleteCount:(NSNumber *)arg1 ;
-(void)setDateChanged:(BOOL)arg1 ;
-(void)setTimeChanged:(BOOL)arg1 ;
-(void)setLocationChanged:(BOOL)arg1 ;
-(BOOL)titleChanged;
-(void)setTitleChanged:(BOOL)arg1 ;
-(void)setStartDateForNextOccurrence:(NSDate *)arg1 ;
-(id)resourceChangeFromEventStore:(id)arg1 ;
-(BOOL)needsAlert;
-(NSDate *)startDateForNextOccurrence;
-(void)setChangeType:(unsigned)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(NSString *)eventID;
-(BOOL)timeChanged;
-(BOOL)dateChanged;
-(BOOL)locationChanged;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned)changeType;
-(NSNumber *)updateCount;
@end

