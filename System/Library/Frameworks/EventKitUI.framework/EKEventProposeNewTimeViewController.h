/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKCalendarItemEditItemDelegate.h>
#import <libobjc.A.dylib/EKEventDateEditItemDelegate.h>
#import <libobjc.A.dylib/EKUIEventStatusButtonsViewDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class NSDate, EKEvent, EKUIEventStatusButtonsView, SingleToolbarItemContainerView, NSArray, EKEventDateEditItem, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewSomeInviteesCanAttendSection, EKUIInviteesViewAllInviteesCanAttendSection, EKInviteeAlternativeTimeSearcher, NSString;

@interface EKEventProposeNewTimeViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKCalendarItemEditItemDelegate, EKEventDateEditItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEditItemViewControllerProtocol> {

	BOOL _resetConflictResolutionSections;
	BOOL _viewIsVisible;
	NSDate* _selectedStartDate;
	NSDate* _selectedEndDate;
	NSDate* _originalDate;
	EKEvent* _event;
	EKUIEventStatusButtonsView* _statusButtonsView;
	SingleToolbarItemContainerView* _statusButtonsContainerView;
	double _statusButtonsViewCachedFontSize;
	NSDate* _proposedStartDate;
	NSArray* _sections;
	EKEventDateEditItem* _proposeTimeItem;
	EKUIInviteesViewOriginalConflictSection* _originalConflictSection;
	EKUIInviteesViewSomeInviteesCanAttendSection* _someInviteesCanAttendSection;
	EKUIInviteesViewAllInviteesCanAttendSection* _allInviteesCanAttendSection;
	EKInviteeAlternativeTimeSearcher* _availabilitySearcher;

}

@property (nonatomic,retain) NSDate * originalDate;                                                                    //@synthesize originalDate=_originalDate - In the implementation block
@property (assign,nonatomic) BOOL resetConflictResolutionSections;                                                     //@synthesize resetConflictResolutionSections=_resetConflictResolutionSections - In the implementation block
@property (assign,nonatomic) BOOL viewIsVisible;                                                                       //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                                          //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) EKUIEventStatusButtonsView * statusButtonsView;                                           //@synthesize statusButtonsView=_statusButtonsView - In the implementation block
@property (nonatomic,retain) SingleToolbarItemContainerView * statusButtonsContainerView;                              //@synthesize statusButtonsContainerView=_statusButtonsContainerView - In the implementation block
@property (assign,nonatomic) double statusButtonsViewCachedFontSize;                                                   //@synthesize statusButtonsViewCachedFontSize=_statusButtonsViewCachedFontSize - In the implementation block
@property (nonatomic,retain) NSDate * proposedStartDate;                                                               //@synthesize proposedStartDate=_proposedStartDate - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) EKEventDateEditItem * proposeTimeItem;                                                    //@synthesize proposeTimeItem=_proposeTimeItem - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewOriginalConflictSection * originalConflictSection;                        //@synthesize originalConflictSection=_originalConflictSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewSomeInviteesCanAttendSection * someInviteesCanAttendSection;              //@synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewAllInviteesCanAttendSection * allInviteesCanAttendSection;                //@synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection - In the implementation block
@property (nonatomic,retain) EKInviteeAlternativeTimeSearcher * availabilitySearcher;                                  //@synthesize availabilitySearcher=_availabilitySearcher - In the implementation block
@property (nonatomic,readonly) NSDate * selectedStartDate;                                                             //@synthesize selectedStartDate=_selectedStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * selectedEndDate;                                                               //@synthesize selectedEndDate=_selectedEndDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
+(id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)viewDidLoad;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(NSDate *)originalDate;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(NSDate *)proposedStartDate;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 ;
-(void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2 ;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2 ;
-(void)dateChangedTo:(id)arg1 ;
-(NSDate *)selectedStartDate;
-(NSDate *)selectedEndDate;
-(id)initWithEvent:(id)arg1 ;
-(void)setProposedStartDate:(NSDate *)arg1 ;
-(void)setResetConflictResolutionSections:(BOOL)arg1 ;
-(void)_searcherStateChanged:(long long)arg1 ;
-(void)setAvailabilitySearcher:(EKInviteeAlternativeTimeSearcher *)arg1 ;
-(EKInviteeAlternativeTimeSearcher *)availabilitySearcher;
-(id)_statusButtons;
-(void)setStatusButtonsViewCachedFontSize:(double)arg1 ;
-(SingleToolbarItemContainerView *)statusButtonsContainerView;
-(EKUIEventStatusButtonsView *)statusButtonsView;
-(void)_updateStatusButtons;
-(void)_eventModified:(id)arg1 ;
-(void)_fontSizeDefinitionsChanged:(id)arg1 ;
-(void)updateCustomBackButton;
-(void)updateCheckmark;
-(void)setProposeTimeItem:(EKEventDateEditItem *)arg1 ;
-(EKEventDateEditItem *)proposeTimeItem;
-(void)setOriginalConflictSection:(EKUIInviteesViewOriginalConflictSection *)arg1 ;
-(EKUIInviteesViewOriginalConflictSection *)originalConflictSection;
-(void)setAllInviteesCanAttendSection:(EKUIInviteesViewAllInviteesCanAttendSection *)arg1 ;
-(EKUIInviteesViewAllInviteesCanAttendSection *)allInviteesCanAttendSection;
-(void)setSomeInviteesCanAttendSection:(EKUIInviteesViewSomeInviteesCanAttendSection *)arg1 ;
-(EKUIInviteesViewSomeInviteesCanAttendSection *)someInviteesCanAttendSection;
-(long long)_indexForSection:(id)arg1 ;
-(void)_refreshIfNeeded;
-(BOOL)proposedTimeChanged;
-(id)_sectionForIndex:(unsigned long long)arg1 ;
-(void)_dismissPresentedViewControllerAnimated:(BOOL)arg1 ;
-(double)statusButtonsViewCachedFontSize;
-(id)_viewControllerForPresentingViewControllers;
-(BOOL)resetConflictResolutionSections;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(id)defaultAlertTitleForEditItem:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(id)_attendeesWithoutOrganizerAndLocations;
-(void)setStatusButtonsView:(EKUIEventStatusButtonsView *)arg1 ;
-(void)setStatusButtonsContainerView:(SingleToolbarItemContainerView *)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(BOOL)viewIsVisible;
-(void)_dismiss:(id)arg1 ;
-(void)setViewIsVisible:(BOOL)arg1 ;
@end

