/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>

@class CNContact, NSArray, _UILegibilitySettings, UIImageView, NSLayoutConstraint, UILabel, UIView, UIActivityIndicatorView, SBAppStatusBarSettingsAssertion;

@interface SBLogoutProgressAlertView : SBAlertView {

	CNContact* _userContact;
	NSArray* _pendingApplications;
	_UILegibilitySettings* _legibilitySettings;
	UIImageView* _userAvatarView;
	NSLayoutConstraint* _userAvatarVerticalConstraint;
	UILabel* _goodbyeLabel;
	NSLayoutConstraint* _goodbyeLabelConstraint;
	UIView* _savingDocumentsActivityAndLabelContainerView;
	UIActivityIndicatorView* _savingDocumentsActivityIndicator;
	UILabel* _savingDocumentsLabel;
	UILabel* _savingDocumentsMoreLabel;
	NSLayoutConstraint* _savingDocumentsMoreLabelConstraint;
	UIView* _blameContainerView;
	UIImageView* _blameAppIconView;
	UILabel* _blameAppNameLabel;
	SBAppStatusBarSettingsAssertion* _statusBarSettingsAssertion;

}

@property (nonatomic,retain) CNContact * userContact;                                    //@synthesize userContact=_userContact - In the implementation block
@property (nonatomic,copy) NSArray * pendingApplications;                                //@synthesize pendingApplications=_pendingApplications - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,getter=isProgressVisible,nonatomic) BOOL progressVisible; 
-(void)_updateLegibility;
-(void)layoutForInterfaceOrientation:(long long)arg1 ;
-(double)_goodbyeLabelBaselineOffset;
-(double)_userAvatarVerticalOffsetFromCenter;
-(double)_moreDocumentsLabelBaselineOffset;
-(void)_updateViewData;
-(void)_updateUserAvatar;
-(void)_updateUserAvatarLegibility;
-(void)_updateGoodbye;
-(void)_updateBlame;
-(BOOL)isProgressVisible;
-(void)setProgressVisible:(BOOL)arg1 ;
-(void)setUserContact:(CNContact *)arg1 ;
-(void)setPendingApplications:(NSArray *)arg1 ;
-(CNContact *)userContact;
-(NSArray *)pendingApplications;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
@end

