/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class CloudStorageGroupController, ICQUpgradeFlowManager, NSTimer;

@interface CloudStorageController : PSListController {

	CloudStorageGroupController* _cloudGroup;
	ICQUpgradeFlowManager* _quotaManager;
	NSTimer* _storageUpgradeOfferTimer;

}
-(void)_storageUpgradeOfferTimeout:(id)arg1 ;
-(void)_changeStoragePlan;
-(void)_storageUpgrade;
-(void)_storageUpgradeOfferNotification:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
@end

