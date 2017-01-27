/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIControlCenterSectionViewController.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryControllerDelegate.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryAlertControllerDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterButtonDelegate.h>

@class CCUIControlCenterPushButton, MPAVRoutingController, MPAVRoutingSheet, MPAudioVideoRoutingPopoverController, SFAirDropDiscoveryController, UIAlertController, BSTimer, NSString;

@interface CCUIAirStuffSectionController : CCUIControlCenterSectionViewController <MPAVRoutingControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate, CCUIControlCenterButtonDelegate> {

	CCUIControlCenterPushButton* _airPlaySection;
	CCUIControlCenterPushButton* _airDropSection;
	MPAVRoutingController* _airPlayController;
	MPAVRoutingSheet* _airPlayModalSheet;
	MPAudioVideoRoutingPopoverController* _airPlayPopoverController;
	SFAirDropDiscoveryController* _airDropDiscoveryController;
	UIAlertController* _airDropAlertController;
	BOOL _isVisible;
	BSTimer* _airPlayTimer;
	unsigned long long _mode;

}

@property (assign,nonatomic) unsigned long long mode;               //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
+(id)defaultFontTight;
-(id)init;
-(BOOL)enabled;
-(void)dealloc;
-(id)view;
-(void)buttonTapped:(id)arg1 ;
-(void)viewDidLoad;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(void)discoveryController:(id)arg1 alertControllerDidDismiss:(id)arg2 ;
-(id)sectionIdentifier;
-(id)_selectedStateColor;
-(void)_airPlayTapped:(id)arg1 ;
-(void)_airDropTapped:(id)arg1 ;
-(void)_updateLayoutForSizeCategoryChange;
-(void)_updateSubsectionVisibility;
-(void)_updateForAirPlayStateChange;
-(void)_updateForAirDropStateChange;
-(void)_dismissAirplayControllerAnimated:(BOOL)arg1 ;
-(void)_showAirPlayView:(id)arg1 ;
-(void)_dismissAirDropWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentAirDropWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateAirDropControlAsEnabled:(BOOL)arg1 ;
-(void)_noteSectionEnabledStateDidChange;
-(void)_airPlayDoneButtonTapped:(id)arg1 ;
-(BOOL)isInternal;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
@end

