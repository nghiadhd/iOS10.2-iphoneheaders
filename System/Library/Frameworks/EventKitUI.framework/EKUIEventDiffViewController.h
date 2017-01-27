/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventViewController.h>
#import <libobjc.A.dylib/EKEventTitleDetailItemDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@protocol EKEditItemViewControllerDelegate;
@class NSMutableArray, EKEvent;

@interface EKUIEventDiffViewController : EKEventViewController <EKEventTitleDetailItemDelegate, EKEditItemViewControllerProtocol> {

	NSMutableArray* _items;
	id<EKEditItemViewControllerDelegate> _editDelegate;
	EKEvent* _originalEvent;

}

@property (retain) EKEvent * originalEvent;                                                         //@synthesize originalEvent=_originalEvent - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)title;
-(id)_items;
-(void)apply;
-(id)_statusButtons;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(void)setEditDelegate:(id<EKEditItemViewControllerDelegate>)arg1 ;
-(BOOL)presentModally;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(BOOL)useCustomBackButton;
-(void)editButtonPressed;
-(BOOL)shouldShowEditButtonInline;
-(void)setOriginalEvent:(EKEvent *)arg1 ;
-(EKEvent *)originalEvent;
-(id)initWithOriginalEvent:(id)arg1 newEvent:(id)arg2 ;
-(void)_updateNavBarAnimated:(BOOL)arg1 ;
@end

