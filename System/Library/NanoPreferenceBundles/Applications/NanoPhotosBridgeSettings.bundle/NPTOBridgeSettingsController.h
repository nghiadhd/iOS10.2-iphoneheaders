/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class PSSpecifier, NSMutableArray;

@interface NPTOBridgeSettingsController : BPSNotificationAppController {

	PSSpecifier* _amountGroupSpecifier;
	NSMutableArray* _appGroupSpecifiers;
	double _lastDeviceGB;
	double _lastDeviceGBRetrieved;
	id _syncedAlbumIdentifierPreferenceObserver;

}
-(void)syncedAlbumChanged;
-(BOOL)_companionShowsAlerts;
-(id)albumTitle:(id)arg1 ;
-(id)amount:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)reloadSpecifiers;
-(BOOL)suppressAllMirrorSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)localizedPaneTitle;
-(id)applicationBundleIdentifier;
@end

