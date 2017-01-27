/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMusicBridgeSettings.bundle/NanoMusicBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class NSArray, UIViewController, PSRootController, PSSpecifier, NSString;

@interface NMBridgePlaylistChooser : UITableViewController <PSController> {

	NSArray* _playlists;
	BOOL _waitingForActiveSyncSessionIdentifierChange;
	BOOL _shouldShowAutofillSection;
	id _lastActiveSyncSessionIdentifier;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;

}

@property (assign,nonatomic) UIViewController*<PSController> parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                             //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                       //@synthesize specifier=_specifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_syncTypeForRow:(unsigned long long)arg1 ;
-(long long)_sectionNumberNone;
-(long long)_sectionNumberPlaylist;
-(id)_titleForAutofillTypeAtRow:(unsigned long long)arg1 ;
-(id)playlistAtPath:(id)arg1 ;
-(long long)_sectionNumberAutofill;
-(void)_syncManagerSyncStateDidChangeNotification:(id)arg1 ;
-(void)_handleActiveDeviceDidChangeNotification;
-(void)_updateShouldShowAutofillSection;
-(void)_updateSelectedCellSyncStatus:(id)arg1 ;
-(PSSpecifier *)specifier;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_numberOfSections;
-(void)_reloadData;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSRootController *)rootController;
-(void)setRootController:(PSRootController *)arg1 ;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(UIViewController*<PSController>)parentController;
-(id)localizedPaneTitle;
-(BOOL)canBeShownFromSuspendedState;
@end

