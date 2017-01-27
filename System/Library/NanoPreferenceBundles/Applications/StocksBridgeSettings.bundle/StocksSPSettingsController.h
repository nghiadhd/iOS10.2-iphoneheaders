/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/StocksBridgeSettings.bundle/StocksBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class BPSAppGlanceManager, NSArray, StocksWatchPreferences;

@interface StocksSPSettingsController : PSListController {

	BPSAppGlanceManager* _manager;
	NSArray* _nanoSpecifiers;
	StocksWatchPreferences* _watchPreferences;

}

@property (nonatomic,retain) BPSAppGlanceManager * manager;                          //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * nanoSpecifiers;                               //@synthesize nanoSpecifiers=_nanoSpecifiers - In the implementation block
@property (nonatomic,retain) StocksWatchPreferences * watchPreferences;              //@synthesize watchPreferences=_watchPreferences - In the implementation block
-(StocksWatchPreferences *)watchPreferences;
-(void)_setComplicationDisplayDefault:(long long)arg1 ;
-(id)defaultStockChoice:(id)arg1 ;
-(NSArray *)nanoSpecifiers;
-(void)setNanoSpecifiers:(NSArray *)arg1 ;
-(void)setWatchPreferences:(StocksWatchPreferences *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BPSAppGlanceManager *)manager;
-(void)setManager:(BPSAppGlanceManager *)arg1 ;
-(id)localizedPaneTitle;
-(id)specifiers;
@end

