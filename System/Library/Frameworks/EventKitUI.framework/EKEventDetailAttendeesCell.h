/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKEventDetailAttendeesList;
@class UIView, UIViewController;

@interface EKEventDetailAttendeesCell : EKEventDetailCell {

	UIView*<EKEventDetailAttendeesList> _attendeesListView;
	BOOL _useFaces;
	UIViewController* _viewController;

}

@property (__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign) BOOL useFaces;                                  //@synthesize useFaces=_useFaces - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)update;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(void)setAttendees:(id)arg1 ;
-(id)_attendeesListView;
-(BOOL)useFaces;
-(void)setUseFaces:(BOOL)arg1 ;
@end

