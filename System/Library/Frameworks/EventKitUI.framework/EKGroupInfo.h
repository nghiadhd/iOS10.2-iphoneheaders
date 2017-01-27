/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, EKSource, NSArray, NSSet;

@interface EKGroupInfo : NSObject {

	NSMutableArray* _calendars;
	int _customGroupType;
	NSString* _customTitle;
	NSString* _customTitleAtBeginningOfSentence;
	NSString* _typeTitle;
	NSString* _title;
	NSString* _titleForBeginningOfSentence;
	BOOL _selected;
	BOOL _showSelectAllButton;
	EKSource* _source;

}

@property (nonatomic,retain) EKSource * source;                                        //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL selected;                                            //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL showSelectAllButton;                                 //@synthesize showSelectAllButton=_showSelectAllButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * typeTitle; 
@property (nonatomic,retain,readonly) NSArray * calendarInfos; 
@property (nonatomic,copy,readonly) NSSet * calendarSet; 
@property (nonatomic,copy,readonly) NSSet * selectedCalendarSet; 
@property (nonatomic,readonly) unsigned long long numCalendars; 
@property (nonatomic,readonly) unsigned long long numSelectableCalendars; 
@property (nonatomic,readonly) unsigned long long numSelectedCalendars; 
@property (nonatomic,readonly) BOOL showAddCalendarButton; 
@property (nonatomic,readonly) BOOL showCalendarNameIfSolitary; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) BOOL isSubscribed; 
-(id)init;
-(id)description;
-(NSString *)title;
-(void)setSource:(EKSource *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)selectAll;
-(BOOL)selected;
-(EKSource *)source;
-(int)sortOrder;
-(BOOL)isSubscribed;
-(NSArray *)calendarInfos;
-(BOOL)showSelectAllButton;
-(BOOL)showAddCalendarButton;
-(id)initWithSource:(id)arg1 ;
-(id)initWithCustomGroupType:(int)arg1 ;
-(NSSet *)calendarSet;
-(unsigned long long)numSelectedCalendars;
-(unsigned long long)numSelectableCalendars;
-(void)insertCalendarInfo:(id)arg1 ;
-(unsigned long long)numCalendars;
-(id)titleForBeginningOfSentence:(BOOL)arg1 ;
-(void)selectNone;
-(BOOL)showCalendarNameIfSolitary;
-(NSSet *)selectedCalendarSet;
-(void)setShowSelectAllButton:(BOOL)arg1 ;
-(void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2 ;
-(void)removeCalendar:(id)arg1 ;
-(void)insertDeclinedEventsItem;
-(NSString *)typeTitle;
-(id)calendarAtIndex:(unsigned long long)arg1 ;
-(id)copyCalendars;
@end

