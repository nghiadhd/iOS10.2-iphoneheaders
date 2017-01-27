/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class EKCalendarEventInvitationNotificationAttendee, EKUIRecurrenceAlertController;

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol> {

	EKCalendarEventInvitationNotificationAttendee* _proposedTimeAttendee;
	EKUIRecurrenceAlertController* _recurrenceAlertController;

}

@property (retain) EKCalendarEventInvitationNotificationAttendee * proposedTimeAttendee;              //@synthesize proposedTimeAttendee=_proposedTimeAttendee - In the implementation block
@property (retain) EKUIRecurrenceAlertController * recurrenceAlertController;                         //@synthesize recurrenceAlertController=_recurrenceAlertController - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)items;
-(id)proposedTime;
-(id)_statusButtons;
-(id)viewTitle;
-(void)invokeAction:(long long)arg1 ;
-(id)initWithProposedTimeAttendee:(id)arg1 ;
-(EKCalendarEventInvitationNotificationAttendee *)proposedTimeAttendee;
-(void)setRecurrenceAlertController:(EKUIRecurrenceAlertController *)arg1 ;
-(void)setProposedTimeAttendee:(EKCalendarEventInvitationNotificationAttendee *)arg1 ;
-(EKUIRecurrenceAlertController *)recurrenceAlertController;
@end

