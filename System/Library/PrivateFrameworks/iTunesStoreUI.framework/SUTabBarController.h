/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <libobjc.A.dylib/SUOverlayBackgroundDelegate.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class SUClientInterface, NSString, NSMutableArray, UIViewController, NSArray, UIImage, SUViewController, SUPreviewOverlayViewController, SUNavigationBarBackgroundView;

@interface SUTabBarController : UITabBarController <SUOverlayBackgroundDelegate, _UIBasicAnimationFactory> {

	SUClientInterface* _clientInterface;
	NSString* _moreListTitle;
	NSMutableArray* _overlayBackgroundViewControllers;
	UIViewController* _preTransientSelectedViewController;
	long long _reloadingUnderneathTransientControllerCount;
	NSArray* _sections;
	BOOL _ignoreTabReselection;
	UIImage* _moreListSelectedImage;
	UIImage* _moreListUnselectedImage;
	SUViewController* _preloadedViewController;
	NSString* _preloadedViewControllerIdentifier;
	NSString* _preloadedViewControllerKey;
	SUPreviewOverlayViewController* _previewOverlayViewController;
	long long _storeBarStyle;
	SUNavigationBarBackgroundView* _tabBarBackdropView;

}

@property (getter=_previewOverlayViewController,nonatomic,readonly) SUPreviewOverlayViewController * _previewOverlayViewController; 
@property (nonatomic,readonly) SUClientInterface * clientInterface;                                                                              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,nonatomic) id<SUTabBarControllerDelegate> delegate; 
@property (nonatomic,retain) NSArray * sections;                                                                                                 //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSString * selectedIdentifier; 
@property (nonatomic,retain) NSString * moreListTitle;                                                                                           //@synthesize moreListTitle=_moreListTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_moreNavigationControllerClass;
-(id)init;
-(void)dealloc;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)selectedViewController;
-(void)setTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setSelectedViewController:(id)arg1 ;
-(void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3 ;
-(void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3 ;
-(void)tabBar:(id)arg1 willShowCustomizationSheet:(id)arg2 withNavigationBar:(id)arg3 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)_sectionForIdentifier:(id)arg1 ;
-(id)initWithClientInterface:(id)arg1 ;
-(void)_applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)_partnerChanged:(id)arg1 ;
-(id)_viewControllerForContext:(id)arg1 ;
-(id)_rootViewControllerForSection:(id)arg1 ;
-(BOOL)loadFromDefaults;
-(void)setSectionOrdering:(id)arg1 ;
-(void)_restoreArchivedContexts:(id)arg1 ;
-(void)_restoreOverlayContexts:(id)arg1 ;
-(void)_restoreArchivedTransientContexts:(id)arg1 ;
-(void)_moveTransientViewController:(id)arg1 toSectionWithIdentifier:(id)arg2 asRoot:(BOOL)arg3 ;
-(void)_reloadViewControllersFromSections:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedIdentifier:(NSString *)arg1 ;
-(void)resetUserDefaults;
-(void)selectDefaultSection;
-(BOOL)saveOrderingToDefaults;
-(BOOL)_saveNavigationPathToDefaults;
-(BOOL)_saveTransientNavigationPathToDefaults;
-(void)_applyMoreListConfiguration;
-(NSString *)selectedIdentifier;
-(id)overlayBackgroundViewController;
-(BOOL)_isReloadingUnderneathTransientViewController;
-(long long)ITunesStoreUIBarStyle;
-(void)_setStoreBarStyle:(long long)arg1 ;
-(void)_fixupViewControllers;
-(void)_moveView:(id)arg1 toView:(id)arg2 ;
-(void)_transitionSafeHandlePartnerChange:(id)arg1 ;
-(id)viewControllerForSectionIdentifier:(id)arg1 ;
-(BOOL)presentOverlayBackgroundViewController:(id)arg1 ;
-(id)_archivedContextsForViewController:(id)arg1 ;
-(void)_beginReloadingUnderneathTransientViewController;
-(void)_endReloadingUnderneathTransientViewController;
-(void)scriptOverlayBackgroundDidDismiss:(id)arg1 ;
-(BOOL)loadFromDefaultsAndSetSections:(id)arg1 ;
-(void)pushTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2 ;
-(void)reloadSectionVisibilityAnimated:(BOOL)arg1 ;
-(void)reloadSectionWithIdentifier:(id)arg1 URL:(id)arg2 ;
-(void)resetToSystemDefaults;
-(BOOL)saveToDefaults;
-(void)selectSectionOfType:(long long)arg1 ;
-(void)setMoreListSelectedImage:(id)arg1 unselectedImage:(id)arg2 ;
-(void)setTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2 ;
-(id)_sectionForViewController:(id)arg1 ;
-(void)dismissOverlayBackgroundViewController;
-(unsigned long long)indexOfViewControllerWithSectionType:(long long)arg1 ;
-(id)viewControllerForSectionType:(long long)arg1 ;
-(void)_hidePreviewOverlayAnimated:(BOOL)arg1 ;
-(SUPreviewOverlayViewController *)_previewOverlayViewController;
-(void)_showPreviewOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)_fixupTabBarSelection;
-(SUClientInterface *)clientInterface;
-(void)_longPressAction:(id)arg1 ;
-(NSString *)moreListTitle;
-(void)setMoreListTitle:(NSString *)arg1 ;
-(void)cancelTransientViewController:(id)arg1 ;
-(id)_sectionForType:(long long)arg1 ;
@end

