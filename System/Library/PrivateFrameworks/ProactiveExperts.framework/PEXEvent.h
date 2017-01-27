/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, EKEvent;

@interface PEXEvent : NSObject {

	BOOL _isUnscheduledFreeTime;
	NSString* _identifier;
	NSString* _title;
	NSString* _calendarTitle;
	NSDate* _start;
	NSDate* _end;
	EKEvent* _event;

}

@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * calendarTitle;                //@synthesize calendarTitle=_calendarTitle - In the implementation block
@property (nonatomic,retain) NSDate * start;                          //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) NSDate * end;                            //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) BOOL isUnscheduledFreeTime;              //@synthesize isUnscheduledFreeTime=_isUnscheduledFreeTime - In the implementation block
@property (nonatomic,retain) EKEvent * event;                         //@synthesize event=_event - In the implementation block
+(id)eventFromEKEvent:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)start;
-(void)setStart:(NSDate *)arg1 ;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(NSString *)calendarTitle;
-(void)setCalendarTitle:(NSString *)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(BOOL)isUnscheduledFreeTime;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 calendarTitle:(id)arg3 start:(id)arg4 end:(id)arg5 isUnscheduledFreeTime:(BOOL)arg6 ;
-(void)setIsUnscheduledFreeTime:(BOOL)arg1 ;
@end

