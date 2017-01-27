/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AAUIFamilySetupPage.h>

@protocol AAUIFamilySetupPageDelegate;
@class ACAccount, ACAccountStore, AAFamilyEligibilityResponse, UIScrollView, UIView, UILabel, UIImageView, UIButton, AAUIFamilySharingFeaturesView, NSString;

@interface AAUIFamilySetupGetStartedViewController : UIViewController <AAUIFamilySetupPage> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAFamilyEligibilityResponse* _familyEligibilityResponse;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UIImageView* _familySharingLogo;
	UILabel* _descriptionLabel;
	UIButton* _getStartedButton;
	AAUIFamilySharingFeaturesView* _familyFeaturesView;
	id<AAUIFamilySetupPageDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AAUIFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<AAUIFamilySetupPageDelegate>)arg1 ;
-(id<AAUIFamilySetupPageDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3 ;
-(id)_createDescriptionLabelForText:(id)arg1 ;
-(void)_getStartedButtonWasTapped:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end

