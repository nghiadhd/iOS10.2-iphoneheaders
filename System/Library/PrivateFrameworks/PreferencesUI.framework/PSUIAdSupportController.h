/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ADPrivacyViewControllerDelegate.h>

@class UITableViewCell, UIView, ADPrivacyViewController, NSString;

@interface PSUIAdSupportController : PSListController <ADPrivacyViewControllerDelegate> {

	BOOL _limitAdTrackingURLIsReachable;
	id _restrictionsChangedObserver;
	id _effectiveSettingsChangedObserver;
	UITableViewCell* _limitAdTrackingCell;
	UIView* _originalAccessoryView;
	long long _optInStatus;
	id _reachabilityAsObject;
	ADPrivacyViewController* _adPrivacyController;

}

@property (nonatomic,retain) id restrictionsChangedObserver;                             //@synthesize restrictionsChangedObserver=_restrictionsChangedObserver - In the implementation block
@property (nonatomic,retain) id effectiveSettingsChangedObserver;                        //@synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver - In the implementation block
@property (nonatomic,retain) UITableViewCell * limitAdTrackingCell;                      //@synthesize limitAdTrackingCell=_limitAdTrackingCell - In the implementation block
@property (nonatomic,retain) UIView * originalAccessoryView;                             //@synthesize originalAccessoryView=_originalAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL limitAdTrackingURLIsReachable;                         //@synthesize limitAdTrackingURLIsReachable=_limitAdTrackingURLIsReachable - In the implementation block
@property (assign,nonatomic) long long optInStatus;                                      //@synthesize optInStatus=_optInStatus - In the implementation block
@property (nonatomic,retain) id reachabilityAsObject;                                    //@synthesize reachabilityAsObject=_reachabilityAsObject - In the implementation block
@property (nonatomic,readonly) SCNetworkReachabilityRef reachability; 
@property (nonatomic,retain) ADPrivacyViewController * adPrivacyController;              //@synthesize adPrivacyController=_adPrivacyController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(void)adPrivacyViewControllerDidLoad:(id)arg1 ;
-(void)adPrivacyViewControllerDidDismiss:(id)arg1 ;
-(void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)effectiveSettingsChangedObserver;
-(id)restrictionsChangedObserver;
-(void)setEffectiveSettingsChangedObserver:(id)arg1 ;
-(void)setRestrictionsChangedObserver:(id)arg1 ;
-(void)reloadLimitAdTrackingSpecifier;
-(void)setReachabilityAsObject:(id)arg1 ;
-(void)setOptInStatus:(long long)arg1 ;
-(BOOL)limitAdTrackingURLIsReachable;
-(void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)limitAdTrackingEnabled:(id)arg1 ;
-(BOOL)canChangeLimitAdTracking;
-(void)resetAdID;
-(void)userDidTapAdPreferences:(id)arg1 ;
-(void)refreshOptInStatus;
-(id)reachabilityAsObject;
-(long long)optInStatus;
-(void)userDidTapDoneButton:(id)arg1 ;
-(void)setAdPrivacyController:(ADPrivacyViewController *)arg1 ;
-(ADPrivacyViewController *)adPrivacyController;
-(void)setLimitAdTrackingURLIsReachable:(BOOL)arg1 ;
-(void)userDidTapLearnMoreLink:(id)arg1 ;
-(UITableViewCell *)limitAdTrackingCell;
-(void)setLimitAdTrackingCell:(UITableViewCell *)arg1 ;
-(UIView *)originalAccessoryView;
-(void)setOriginalAccessoryView:(UIView *)arg1 ;
-(SCNetworkReachabilityRef)reachability;
-(id)specifiers;
@end

