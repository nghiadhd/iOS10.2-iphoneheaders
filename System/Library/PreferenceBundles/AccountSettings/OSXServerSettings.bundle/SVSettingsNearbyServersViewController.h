/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <OSXServerSettings/SVServerBrowserDelegate.h>

@class NSMutableArray, PSSpecifier, SVServerBrowser, NSString;

@interface SVSettingsNearbyServersViewController : ACUIViewController <SVServerBrowserDelegate> {

	NSMutableArray* _nearbyServers;
	PSSpecifier* _chooseServerHeaderSpecifier;
	PSSpecifier* _otherSpecifier;
	NSMutableArray* _nearbyServersSpecifiers;
	SVServerBrowser* _serverBrowser;

}

@property (nonatomic,retain) NSMutableArray * nearbyServers;                         //@synthesize nearbyServers=_nearbyServers - In the implementation block
@property (nonatomic,retain) PSSpecifier * chooseServerHeaderSpecifier;              //@synthesize chooseServerHeaderSpecifier=_chooseServerHeaderSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * otherSpecifier;                           //@synthesize otherSpecifier=_otherSpecifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * nearbyServersSpecifiers;               //@synthesize nearbyServersSpecifiers=_nearbyServersSpecifiers - In the implementation block
@property (nonatomic,retain) SVServerBrowser * serverBrowser;                        //@synthesize serverBrowser=_serverBrowser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serverBrowser:(id)arg1 didRemoveServer:(id)arg2 ;
-(void)setNearbyServers:(NSMutableArray *)arg1 ;
-(void)setServerBrowser:(SVServerBrowser *)arg1 ;
-(void)setNearbyServersSpecifiers:(NSMutableArray *)arg1 ;
-(void)serverBrowser:(id)arg1 didFindNewServer:(id)arg2 ;
-(void)setOtherSpecifier:(PSSpecifier *)arg1 ;
-(void)didSelectOtherServer:(id)arg1 ;
-(SVServerBrowser *)serverBrowser;
-(void)didSelectNearbyServer:(id)arg1 ;
-(NSMutableArray *)nearbyServersSpecifiers;
-(PSSpecifier *)chooseServerHeaderSpecifier;
-(PSSpecifier *)otherSpecifier;
-(NSMutableArray *)nearbyServers;
-(void)setChooseServerHeaderSpecifier:(PSSpecifier *)arg1 ;
-(void)dealloc;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

