/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/PassesLockScreenPlugin.lockbundle/PassesLockScreenPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <PassesLockScreenPlugin/WLLockScreenViewDataSource.h>
#import <PassesLockScreenPlugin/WLLockScreenViewDelegate.h>
#import <libobjc.A.dylib/PKPassLibraryDelegate.h>
#import <PassesLockScreenPlugin/SBLockScreenBundleController.h>

@class PKPassLibrary, NSArray, NSMutableDictionary, PKDiff, NSTimer, PKAssertion, NSString;

@interface WLLockScreenCardsViewController : SBAwayViewPluginController <WLLockScreenViewDataSource, WLLockScreenViewDelegate, PKPassLibraryDelegate, SBLockScreenBundleController> {

	unsigned long long _startIndex;
	PKPassLibrary* _passLibrary;
	NSArray* _cardUniqueIDs;
	NSMutableDictionary* _cardsByUniqueID;
	PKDiff* _diff;
	NSTimer* _resetIdleTimerTimer;
	NSTimer* _notifyPassViewedTimer;
	PKAssertion* _contactlessInterfaceAssertion;
	long long _activationState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(void)enableIdleTimer;
-(id)_newPassesDictionaryFromSet:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)showsDuringCall;
-(void)updateBacklightWithProgress:(double)arg1 ;
-(void)_passViewNotificationTimerFired;
-(id)cardAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cardCount;
-(void)_presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)wantsUserWallpaper;
-(void)disableIdleTimer;
-(id)diffForCardAtIndex:(unsigned long long)arg1 ;
-(BOOL)_verifyArrayOfStrings:(id)arg1 ;
-(BOOL)showsBeneathNotifications;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(unsigned long long)startIndex;
-(BOOL)handleMenuButtonTap;
-(void)setActivationContext:(id)arg1 ;
-(BOOL)showDateView;
-(BOOL)wantsMesaAutoUnlock;
-(void)setDeactivationContext:(id)arg1 ;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldDisableOnRelock;
-(/*^block*/id)enableTransitionBlock;
-(BOOL)viewWantsOverlayLayout;
-(long long)pluginPriority;
-(BOOL)shouldShowLockStatusBarTime;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3 ;
-(BOOL)showAwayItems;
-(BOOL)viewWantsFullscreenLayout;
-(void)linkedApplicationOpen:(id)arg1 ;
@end

