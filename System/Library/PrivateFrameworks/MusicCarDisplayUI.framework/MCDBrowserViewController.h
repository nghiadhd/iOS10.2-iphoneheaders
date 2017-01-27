/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UITabBarControllerDelegate.h>

@protocol MCDCarDisplayServiceProvider;
@class UITabBarController, UIButton, AVExternalDevice, MCDRadioViewController, NSArray, MPAVController, RadioRecentStationsController, NSString;

@interface MCDBrowserViewController : UINavigationController <UITabBarControllerDelegate> {

	BOOL _viewHasAppeared;
	BOOL _libraryHasSongs;
	UITabBarController* _tabBarController;
	UIButton* _nowPlayingButton;
	AVExternalDevice* _externalDevice;
	MCDRadioViewController* _radioViewController;
	NSArray* _tabIdentifiers;
	long long _fuseSubscriber;
	MPAVController* _player;
	id<MCDCarDisplayServiceProvider> _serviceProvider;
	UITabBarController* _hostTabBarController;
	RadioRecentStationsController* _recentStationsController;

}

@property (nonatomic,retain) MPAVController * player;                                                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MCDCarDisplayServiceProvider> serviceProvider;                      //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (assign,nonatomic,__weak) UITabBarController * hostTabBarController;                             //@synthesize hostTabBarController=_hostTabBarController - In the implementation block
@property (assign,nonatomic,__weak) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(id<MCDCarDisplayServiceProvider>)serviceProvider;
-(void)_itemChanged:(id)arg1 ;
-(void)_limitedUIChanged:(id)arg1 ;
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(RadioRecentStationsController *)recentStationsController;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)setServiceProvider:(id<MCDCarDisplayServiceProvider>)arg1 ;
-(void)_nowPlayingDidChangeNotification:(id)arg1 ;
-(void)_updateNowPlayingVisibility;
-(void)MCD_popNowPlayingViewControllerAnimated:(BOOL)arg1 ;
-(void)MCD_pushNowPlayingViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithHostTabBarController:(id)arg1 ;
-(void)pushNowPlaying:(BOOL)arg1 ;
-(void)_mediaLibraryDidChange:(id)arg1 ;
-(void)_accountsDidChangeNotification:(id)arg1 ;
-(void)_reloadHostTabs;
-(BOOL)_limitedUIEnabled;
-(id)_createViewControllerForIdentifier:(id)arg1 ;
-(void)refreshNavigationPath;
-(BOOL)_isNowPlayingAvailable;
-(id)nowPlayingButton;
-(void)_nowPlayingButtonTouchUpInside:(id)arg1 ;
-(void)reloadTabsAndForceReload:(BOOL)arg1 ;
-(void)_tabBarDidChangeViewControllers:(id)arg1 ;
-(void)_removeDetailViews;
-(UITabBarController *)hostTabBarController;
-(void)setHostTabBarController:(UITabBarController *)arg1 ;
@end

