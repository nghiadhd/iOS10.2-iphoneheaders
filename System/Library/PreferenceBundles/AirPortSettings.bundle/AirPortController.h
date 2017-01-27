/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>

@class PSSpecifier, NSString, WiFiManager;

@interface AirPortController : PSBundleController {

	PSSpecifier* _specifier;
	NSString* _disconnectedStr;
	NSString* _onStr;
	NSString* _offStr;
	NSString* _unavailableStr;
	WiFiManager* _manager;
	BOOL _displayedInRootMenu;

}
-(void)dealloc;
-(id)bundle;
-(void)willResignActive;
-(void)willBecomeActive;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)currentNetwork:(id)arg1 ;
-(void)networkChanged:(id)arg1 ;
-(void)setCurrentNetwork:(id)arg1 specifier:(id)arg2 ;
-(void)updateUI:(BOOL)arg1 ;
@end

