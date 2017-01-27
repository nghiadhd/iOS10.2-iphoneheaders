/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MSCLAccount, MSCLAccountStore, MSCLSettingsTableViewCell, UIImage, NSString, UITableView;

@interface MSCLFacebookPageSelectionViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate> {

	MSCLAccount* _account;
	MSCLAccountStore* _accountStore;
	BOOL _didRequestImages;
	MSCLSettingsTableViewCell* _removeAccountButtonCell;
	UIImage* _placeholderImage;
	NSString* _selectedPageIdentifier;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
-(id)_imageDataConsumer;
-(id)initWithAccount:(id)arg1 fromStore:(id)arg2 ;
-(id)_attributedExplanationString;
-(void)_layoutTableHeaderView;
-(id)_facebookPageTableViewCellInTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_removalConfirmationMessage;
-(void)_removeAccount;
@end

