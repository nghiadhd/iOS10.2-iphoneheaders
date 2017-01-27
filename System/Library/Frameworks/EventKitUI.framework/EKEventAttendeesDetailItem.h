/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSMutableDictionary, EKEventDetailAttendeesCell, NSArray;

@interface EKEventAttendeesDetailItem : EKEventDetailItem {

	NSMutableDictionary* _attendeesCells;
	EKEventDetailAttendeesCell* _cell;
	long long _status;
	NSArray* _attendees;

}

@property (assign,nonatomic) long long status;                 //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * attendees;              //@synthesize attendees=_attendees - In the implementation block
-(void)reset;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
@end

