/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <libobjc.A.dylib/ACUIAppInstallerDelegate.h>

@class ACUIAppDescription, ACUIAppInstaller, PSSpecifier, NSString;

@interface SLSettingsController : ACUIViewController <ACUIAppInstallerDelegate> {

	ACUIAppDescription* _appDescription;
	ACUIAppInstaller* _appInstaller;
	BOOL _pendingAppStoreAvailabilityCheck;
	BOOL _pendingAppDownloadabilityCheck;
	PSSpecifier* _installSpecifier;
	PSSpecifier* _installAppSpecifier;

}

@property (nonatomic,retain) PSSpecifier * installAppSpecifier;              //@synthesize installAppSpecifier=_installAppSpecifier - In the implementation block
@property (nonatomic,retain) ACUIAppInstaller * appInstaller;                //@synthesize appInstaller=_appInstaller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shouldDisplayAppDownloadAlert:(/*^block*/id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 appDescription:(id)arg3 publisherURL:(id)arg4 storefrontsWithoutTheApp:(id)arg5 ;
-(void)_initializeAppInstallerWithPublisherURL:(id)arg1 storefrontsWithoutTheApp:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_updateInstallCell:(id)arg1 ;
-(ACUIAppInstaller *)appInstaller;
-(void)_installButtonTapped:(id)arg1 ;
-(PSSpecifier *)installAppSpecifier;
-(BOOL)_expectedAppAvailabilityInCurrentAppStore:(id)arg1 ;
-(void)setAppInstaller:(ACUIAppInstaller *)arg1 ;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)appIsDownloadableDidChange:(id)arg1 ;
-(void)appIsAvailableInStoreDidChange:(id)arg1 ;
-(void)setInstallAppSpecifier:(PSSpecifier *)arg1 ;
@end

