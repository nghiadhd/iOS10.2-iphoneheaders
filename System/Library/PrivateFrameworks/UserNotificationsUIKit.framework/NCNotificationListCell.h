/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/NCContentSizeCategoryAdjusting.h>

@protocol NCNotificationListCellDelegate;
@class NCNotificationViewController, NCNotificationListCellScrollView, NCNotificationListCellActionButtonsView, UIView, NSString;

@interface NCNotificationListCell : UICollectionViewCell <UIScrollViewDelegate, NCContentSizeCategoryAdjusting> {

	BOOL _adjustsFontForContentSizeCategory;
	BOOL _backgroundBlurred;
	BOOL _supportsSwipeToDefaultAction;
	BOOL _configured;
	BOOL _actionButtonsFullyRevealed;
	BOOL _executingDefaultAction;
	NCNotificationViewController* _contentViewController;
	id<NCNotificationListCellDelegate> _delegate;
	NCNotificationListCellScrollView* _cellScrollView;
	NCNotificationListCellActionButtonsView* _actionButtonsView;
	UIView* _clippingRevealView;
	CGPoint _initialContentOffset;
	CGPoint _fullActionsRevealContentOffset;
	UIEdgeInsets _insetMargins;

}

@property (nonatomic,retain) NCNotificationListCellScrollView * cellScrollView;                                //@synthesize cellScrollView=_cellScrollView - In the implementation block
@property (nonatomic,retain) NCNotificationListCellActionButtonsView * actionButtonsView;                      //@synthesize actionButtonsView=_actionButtonsView - In the implementation block
@property (nonatomic,retain) UIView * clippingRevealView;                                                      //@synthesize clippingRevealView=_clippingRevealView - In the implementation block
@property (assign,getter=isActionButtonsFullyRevealed,nonatomic) BOOL actionButtonsFullyRevealed;              //@synthesize actionButtonsFullyRevealed=_actionButtonsFullyRevealed - In the implementation block
@property (assign,nonatomic) CGPoint initialContentOffset;                                                     //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint fullActionsRevealContentOffset;                                           //@synthesize fullActionsRevealContentOffset=_fullActionsRevealContentOffset - In the implementation block
@property (assign,getter=isExecutingDefaultAction,nonatomic) BOOL executingDefaultAction;                      //@synthesize executingDefaultAction=_executingDefaultAction - In the implementation block
@property (nonatomic,retain) NCNotificationViewController * contentViewController;                             //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListCellDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred;                                //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
@property (assign,nonatomic) BOOL supportsSwipeToDefaultAction;                                                //@synthesize supportsSwipeToDefaultAction=_supportsSwipeToDefaultAction - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insetMargins;                                                        //@synthesize insetMargins=_insetMargins - In the implementation block
@property (assign,getter=isConfigured,nonatomic) BOOL configured;                                              //@synthesize configured=_configured - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                           //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<NCNotificationListCellDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<NCNotificationListCellDelegate>)delegate;
-(void)prepareForReuse;
-(NCNotificationViewController *)contentViewController;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setContentViewController:(NCNotificationViewController *)arg1 ;
-(BOOL)_disableRasterizeInAnimations;
-(void)_layoutScrollView;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(CGPoint)initialContentOffset;
-(void)_layoutContentView;
-(BOOL)isBackgroundBlurred;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setSupportsSwipeToDefaultAction:(BOOL)arg1 ;
-(void)resetCellScrollPositionAnimated:(BOOL)arg1 ;
-(BOOL)isConfigured;
-(void)setConfigured:(BOOL)arg1 ;
-(void)updateCellForContentViewController:(id)arg1 ;
-(BOOL)supportsSwipeToDefaultAction;
-(UIEdgeInsets)insetMargins;
-(void)setInsetMargins:(UIEdgeInsets)arg1 ;
-(void)_configureCellScrollViewIfNecessary;
-(void)_layoutActionButtonsView;
-(void)_configureContentOffsets;
-(void)_adjustCellScrollViewAfterLayout;
-(void)setExecutingDefaultAction:(BOOL)arg1 ;
-(NCNotificationListCellScrollView *)cellScrollView;
-(void)setActionButtonsFullyRevealed:(BOOL)arg1 ;
-(void)_scrollViewDidFinishScrolling:(id)arg1 ;
-(void)_configureClippingRevealViewIfNecessary;
-(void)_configureActionButtonsViewIfNecessary;
-(void)_layoutClippingRevealView;
-(double)_logicalContentOffsetForAbsoluteOffset:(CGPoint)arg1 ;
-(double)_actionButtonsViewPercentRevealedForContentOffset:(CGPoint)arg1 ;
-(BOOL)isActionButtonsFullyRevealed;
-(CGPoint)fullActionsRevealContentOffset;
-(double)_defaultActionTriggerThreshold;
-(double)_defaultActionOvershootContentOffset;
-(CGPoint)_absoluteContentOffsetForLogicalOffset:(double)arg1 ;
-(double)_defaultActionExecuteThreshold;
-(void)_executeDefaultActionIfCompleted;
-(void)_revealActionButtonsViewForContentOffset:(CGPoint)arg1 ;
-(void)_configureInitialContentOffset;
-(void)_configureFullActionsRevealContentOffset;
-(double)_actionButtonsViewWidthWithMargin;
-(void)setFullActionsRevealContentOffset:(CGPoint)arg1 ;
-(double)_cellWidth;
-(BOOL)isExecutingDefaultAction;
-(void)_configureActionButtonsViewHierarchyForPercentRevealed:(double)arg1 ;
-(double)_actionButtonsViewAlphaForPercentRevealed:(double)arg1 ;
-(void)cellActionButtonPressed:(id)arg1 ;
-(void)cellOpenButtonPressed:(id)arg1 ;
-(void)cellClearButtonPressed:(id)arg1 ;
-(void)setCellScrollView:(NCNotificationListCellScrollView *)arg1 ;
-(NCNotificationListCellActionButtonsView *)actionButtonsView;
-(void)setActionButtonsView:(NCNotificationListCellActionButtonsView *)arg1 ;
-(UIView *)clippingRevealView;
-(void)setClippingRevealView:(UIView *)arg1 ;
@end

