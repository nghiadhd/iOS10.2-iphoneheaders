/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, UISwitch;

@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	UISwitch* _control;
	BOOL _switchStateIsOn;

}
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)_switchChanged:(id)arg1 ;
@end

