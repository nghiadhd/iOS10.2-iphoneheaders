/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel;
@class SBLockScreenNotificationTableView, UIView, CADisplayLink, NSTimer, NSMutableDictionary, SBNotificationRowActionFactory, NSString;

@interface SBLockScreenNotificationListView : UIView <UITableViewDataSource, UITableViewDelegate> {

	SBLockScreenNotificationTableView* _tableView;
	UIView* _tableHeaderView;
	UIView* _tableFooterView;
	UIView* _topPocketView;
	UIView* _bottomPocketView;
	UIView* _containerView;
	id<SBLockScreenNotificationViewDelegate> _delegate;
	id<SBLockScreenNotificationModel> _model;
	CADisplayLink* _displayLink;
	double _currentTextAlpha;
	double _fadeStartTimestamp;
	NSTimer* _oldTextDisabledTimer;
	unsigned long long _indexOfNewItem;
	BOOL _notificationCellIsScrollingToPasscode;
	double _notificationScrollDecelerationRatio;
	NSMutableDictionary* _heightForListItemCache;
	double _totalContentHeight;
	double _startingScrollOffset;
	double _lastDistanceScrolled;
	SBNotificationRowActionFactory* _cellButtonFactory;
	BOOL _updateCellsToVisibleOnPluginWillDisable;

}

@property (assign,nonatomic) BOOL updateCellsToVisibleOnPluginWillDisable;                          //@synthesize updateCellsToVisibleOnPluginWillDisable=_updateCellsToVisibleOnPluginWillDisable - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenNotificationModel> model;                        //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(CGRect)scrollableRegion;
-(void)prepareForRemoval;
-(void)updateForAdditionOfItemAtIndex:(unsigned long long)arg1 allowHighlightOnInsert:(BOOL)arg2 ;
-(void)updateForModificationOfItemWithOldIndex:(unsigned long long)arg1 andNewIndex:(unsigned long long)arg2 ;
-(void)updateForRemovalOfItemAtIndex:(unsigned long long)arg1 removedItem:(id)arg2 ;
-(void)updateForRemovalOfItems;
-(void)lockScreenDidEndScrollingOnPage:(long long)arg1 ;
-(id)scrollingGesture;
-(id)visibleNotificationCells;
-(id)_pocketLineColor;
-(BOOL)_disableIdleTimer:(BOOL)arg1 ;
-(void)_clearTextDisabledTimer;
-(void)_clearTextFadeTimer;
-(void)_resetAllFadeTimers;
-(void)_setContentForTableCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_alertItemForIndexPath:(id)arg1 ;
-(id)_activeBulletinForIndexPath:(id)arg1 ;
-(id)_snoozedAlarmNotificationRequestForIndexPath:(id)arg1 ;
-(void)_handleAction:(id)arg1 forBulletin:(id)arg2 ;
-(void)_setNonSelectedCellsToVisible:(BOOL)arg1 withSelectedCell:(id)arg2 ;
-(void)_enableIdleTimerAfterScroll;
-(void)setUpdateCellsToVisibleOnPluginWillDisable:(BOOL)arg1 ;
-(void)_scrollingEndedInScrollView:(id)arg1 ;
-(void)_updateBottomShadowVisibility;
-(long long)_rowAnimationForInsert;
-(void)_updateTotalContentHeight;
-(void)_disableExistingContent;
-(long long)_rowAnimationForDelete;
-(void)_postludeForUpdateForRemoval:(BOOL)arg1 ;
-(void)_pluginWasDisabled:(id)arg1 ;
-(void)_textDisabledTimerFired:(id)arg1 ;
-(void)_cellTextFadeTimerFired:(id)arg1 ;
-(CGRect)visibleRegionUsingPresentationLayer:(BOOL)arg1 ;
-(void)scrollToTopOfListAnimated:(BOOL)arg1 ;
-(BOOL)updateCellsToVisibleOnPluginWillDisable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SBLockScreenNotificationViewDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<SBLockScreenNotificationViewDelegate>)delegate;
-(void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2 ;
-(id)_tableHeaderView;
-(id)_tableFooterView;
-(id<SBLockScreenNotificationModel>)model;
-(void)setModel:(id<SBLockScreenNotificationModel>)arg1 ;
@end

