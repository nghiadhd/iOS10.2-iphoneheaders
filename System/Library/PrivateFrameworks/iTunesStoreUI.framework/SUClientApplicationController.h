/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUClientController.h>
#import <libobjc.A.dylib/SKUIPassbookLoaderDelegate.h>
#import <libobjc.A.dylib/SUTabBarControllerDelegate.h>

@class SUMediaPlayerViewController, NSString, SUPlaceholderViewController, SKUIURL, SUSectionsResponse, ISOperation, SKUIPassbookLoader, SUPreviewOverlayViewController, SUTabBarController, NSURL, UINavigationController;

@interface SUClientApplicationController : SUClientController <SKUIPassbookLoaderDelegate, SUTabBarControllerDelegate> {

	SUMediaPlayerViewController* _activeMediaPlayer;
	NSString* _exitStoreButtonTitle;
	SUPlaceholderViewController* _fetchSectionsPlaceholder;
	long long _ignoreDownloadQueueChangeCount;
	SKUIURL* _launchURL;
	SUSectionsResponse* _lastBackgroundSectionsResponse;
	SUSectionsResponse* _lastSectionsResponse;
	ISOperation* _loadSectionsOperation;
	id _locationObserver;
	SKUIPassbookLoader* _passbookLoader;
	NSString* _preMediaDefaultPNG;
	SUPreviewOverlayViewController* _previewOverlay;
	BOOL _reloadForStorefrontChangeAfterAccountSetup;
	BOOL _reloadSectionsOnNextLaunch;
	BOOL _shouldPrepareUserInterfaceWhenActivated;
	SUTabBarController* _tabBarController;

}

@property (setter=_setActiveMediaPlayer:,getter=_activeMediaPlayer,nonatomic,retain) SUMediaPlayerViewController * _activeMediaPlayer;              //@synthesize activeMediaPlayer=_activeMediaPlayer - In the implementation block
@property (getter=isIgnoringDownloadQueueChanges,nonatomic,readonly) BOOL ignoringDownloadQueueChanges; 
@property (nonatomic,readonly) NSString * defaultPNGNameForSuspend; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (getter=wasLaunchedFromLibrary,nonatomic,readonly) BOOL launchedFromLibrary; 
@property (getter=isTabBarControllerLoaded,nonatomic,readonly) BOOL tabBarControllerLoaded; 
@property (nonatomic,readonly) SUTabBarController * tabBarController; 
@property (nonatomic,readonly) UINavigationController * topNavigationController; 
@property (assign,nonatomic) BOOL shouldPrepareUserInterfaceWhenActivated;                                                                          //@synthesize shouldPrepareUserInterfaceWhenActivated=_shouldPrepareUserInterfaceWhenActivated - In the implementation block
@property (nonatomic,copy) NSString * exitStoreButtonTitle;                                                                                         //@synthesize exitStoreButtonTitle=_exitStoreButtonTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(void)setSharedController:(id)arg1 ;
-(void)dealloc;
-(double)defaultImageSnapshotExpiration;
-(SUTabBarController *)tabBarController;
-(void)cancelAllOperations;
-(void)resignActive;
-(BOOL)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3 ;
-(id)copySuspendSettings;
-(void)exitStoreAfterDialogsDismiss;
-(id)initWithClientInterface:(id)arg1 ;
-(id)overlayBackgroundViewController;
-(BOOL)tabBarController:(id)arg1 shouldShowSection:(id)arg2 ;
-(BOOL)presentOverlayBackgroundViewController:(id)arg1 ;
-(void)dismissOverlayBackgroundViewController;
-(id)_previewOverlayViewController;
-(BOOL)selectSectionWithIdentifier:(id)arg1 ;
-(BOOL)isTabBarControllerLoaded;
-(NSString *)exitStoreButtonTitle;
-(void)_reloadForNetworkTypeChange:(id)arg1 ;
-(BOOL)dismissTopViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)wasLaunchedFromLibrary;
-(void)returnToLibrary;
-(void)_selectFooterSectionNotification:(id)arg1 ;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)_accountControllerDisappearedNotification:(id)arg1 ;
-(void)tearDownUI;
-(void)_cancelLoadSectionsOperation;
-(void)setupUI;
-(void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1 ;
-(BOOL)_loadSectionsAllowingCache:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_presentSectionFetchUI;
-(void)_handleFinishedLoadSectionsOperation:(id)arg1 ;
-(UINavigationController *)topNavigationController;
-(void)_cancelSuspendAfterDialogsDismissed;
-(void)_dialogDidFinishNotification:(id)arg1 ;
-(id)_resumableViewController;
-(BOOL)_reloadForStorefrontChange;
-(void)_retrySectionsAfterNetworkTransition;
-(BOOL)_showWildcatAccountViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_handleAccountURL:(id)arg1 ;
-(void)_defaultHandleApplicationURLRequestProperties:(id)arg1 ;
-(NSURL *)launchURL;
-(void)_handleSectionsLoadFailedWithError:(id)arg1 ;
-(void)_reloadWithSectionsResponse:(id)arg1 ;
-(void)presentExternalURLViewController:(id)arg1 ;
-(BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2 ;
-(NSString *)defaultPNGNameForSuspend;
-(void)bagDidLoadNotification:(id)arg1 ;
-(BOOL)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3 ;
-(BOOL)presentAccountViewController:(id)arg1 showNavigationBar:(BOOL)arg2 animated:(BOOL)arg3 ;
-(SUMediaPlayerViewController *)_activeMediaPlayer;
-(void)_setupTabBarController;
-(void)_openClientURL:(id)arg1 ;
-(id)_showPageForExternalOriginatedURLBagKey:(id)arg1 ;
-(id)_newTabBarController;
-(BOOL)shouldPrepareUserInterfaceWhenActivated;
-(void)_handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3 ;
-(void)_handleDonationURL:(id)arg1 ;
-(void)_handleAddPassbookPassURL:(id)arg1 ;
-(BOOL)_displayClientURL:(id)arg1 ;
-(void)_restorePreMediaPlayerSettings;
-(id)_accountViewController;
-(void)_cancelSectionFetchPlaceholder;
-(void)beginIgnoringDownloadQueueChanges;
-(void)endIgnoringDownloadQueueChanges;
-(BOOL)isIgnoringDownloadQueueChanges;
-(void)prepareUserInterface;
-(void)setExitStoreButtonTitle:(NSString *)arg1 ;
-(id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2 ;
-(void)_setActiveMediaPlayer:(id)arg1 ;
-(void)setShouldPrepareUserInterfaceWhenActivated:(BOOL)arg1 ;
-(void)_showPreviewOverlayAnimated:(BOOL)arg1 ;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2 ;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2 ;
-(void)returnToLibraryForClientInterface:(id)arg1 ;
-(id)previewOverlayForClientInterface:(id)arg1 ;
-(id)tabBarControllerForClientInterface:(id)arg1 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
-(void)becomeActive;
@end

