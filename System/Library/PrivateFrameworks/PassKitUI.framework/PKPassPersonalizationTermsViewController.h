/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol PKPassPersonalizationTermsViewControllerDelegate;
@class UITextView, NSString;

@interface PKPassPersonalizationTermsViewController : UIViewController {

	UITextView* _textView;
	NSString* _termsAndConditions;
	id<PKPassPersonalizationTermsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSString * termsAndConditions;                                              //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (assign,nonatomic) id<PKPassPersonalizationTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PKPassPersonalizationTermsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPassPersonalizationTermsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)termsAndConditions;
-(id)initWithTermsAndConditions:(id)arg1 ;
-(void)_declineButtonPressed:(id)arg1 ;
-(void)_acceptButtonPressed:(id)arg1 ;
-(void)_applyTermsAndConditions;
-(void)setTermsAndConditions:(NSString *)arg1 ;
@end

