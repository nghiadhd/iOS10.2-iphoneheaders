/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PKPassHeaderViewDelegate.h>

@protocol OS_dispatch_source, PKPassDeleteHandler;
@class PKPassDisplayProfile, PKPassColorProfile, PKLinkedAppView, UIView, UIRefreshControl, PKSettingTableCell, UITableViewCell, NSArray, NSMutableDictionary, NSObject, BluetoothManager, PKPassHeaderView, UIVisualEffectView, UISegmentedControl, PKPass, NSString;

@interface PKBarcodePassDetailViewController : UITableViewController <UITextViewDelegate, PKPassHeaderViewDelegate> {

	PKPassDisplayProfile* _displayProfile;
	PKPassColorProfile* _colorProfile;
	PKLinkedAppView* _linkedApp;
	UIView* _locationHelpView;
	UIRefreshControl* _refreshControl;
	PKSettingTableCell* _automaticUpdatesCell;
	PKSettingTableCell* _showInLockScreenCell;
	PKSettingTableCell* _automaticSelectionCell;
	UITableViewCell* _shareCell;
	UITableViewCell* _personalizePassCell;
	UITableViewCell* _deleteCell;
	NSArray* _rowCountBySection;
	unsigned long long _linkedAppSection;
	unsigned long long _settingsSection;
	unsigned long long _automaticSelectionSection;
	unsigned long long _shareSection;
	unsigned long long _deleteSection;
	unsigned long long _personalizePassSection;
	unsigned long long _fieldsSection;
	NSMutableDictionary* _fieldCellsByIndexPath;
	NSMutableDictionary* _fieldCellHeightsByIndexPath;
	NSObject*<OS_dispatch_source> _refreshTimeout;
	BluetoothManager* _btManager;
	BOOL _isBluetoothEnabled;
	BOOL _isLocationEnabled;
	BOOL _isWifiEnabled;
	BOOL _showsShare;
	BOOL _showsSettings;
	BOOL _showsDelete;
	BOOL _showsLinks;
	BOOL _showsLinkedApp;
	BOOL _showsPersonalize;
	NSArray* _tabBarSegments;
	double _headerHeight;
	UIEdgeInsets _headerContentInset;
	double _tabBarHeight;
	BOOL _navigationControllerHidesShadow;
	UIView* _headerView;
	PKPassHeaderView* _passHeaderView;
	UIVisualEffectView* _blurView;
	UISegmentedControl* _tabBar;
	UIView* _keyLine;
	PKPass* _pass;
	unsigned long long _suppressedContent;
	id<PKPassDeleteHandler> _deleteOverrider;

}

@property (nonatomic,readonly) PKPass * pass;                                      //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedContent;                 //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign,nonatomic) id<PKPassDeleteHandler> deleteOverrider;              //@synthesize deleteOverrider=_deleteOverrider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isWifiEnabled;
+(id)_linkColor;
+(id)_linkTextAttributes;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)_fieldForIndexPath:(id)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(PKPass *)pass;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(id)_relevantBuckets;
-(id)linkedApp;
-(void)_wifiChanged:(id)arg1 ;
-(void)_bluetoothPowerChanged:(id)arg1 ;
-(void)_passSettingsChanged:(id)arg1 ;
-(id)_locationRelevancyHelpText;
-(id)_settingsCellForRow:(unsigned long long)arg1 ;
-(id)_automaticSelectionCell;
-(id)_shareCell;
-(id)_personalizePassCell;
-(id)_fieldCellForIndexPath:(id)arg1 ;
-(id)_locationHelpViewForTableView:(id)arg1 ;
-(void)pushSettingsFromViewToModel;
-(BOOL)shouldAllowRefresh;
-(void)refreshControlValueChanged:(id)arg1 ;
-(BOOL)_linkedAppAvailable;
-(BOOL)_settingsAvailable;
-(BOOL)_personalizeAvailable;
-(void)setShowsLinks:(BOOL)arg1 ;
-(BOOL)_isBluetoothEnabled;
-(void)setDeleteOverrider:(id<PKPassDeleteHandler>)arg1 ;
-(unsigned long long)suppressedContent;
-(void)_done:(id)arg1 ;
-(void)_updatePassProperties;
-(void)_updateTableSections;
-(BOOL)_updateHeaderHeight;
-(id)_createTabBarWithSelectedIndex:(long long)arg1 ;
-(void)_updateTabBarWithSegments:(id)arg1 ;
-(void)_tabBarSegmentChanged:(id)arg1 ;
-(id)_deleteCell;
-(void)_sharePass;
-(void)_deletePass;
-(void)_reloadPassAndView;
-(void)_updateTabBar;
-(void)_refreshFinished:(BOOL)arg1 ;
-(void)passHeaderViewDidChangePass:(id)arg1 ;
-(BOOL)pkui_prefersNavigationBarShadowHidden;
-(id<PKPassDeleteHandler>)deleteOverrider;
@end
