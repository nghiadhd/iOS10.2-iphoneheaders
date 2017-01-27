/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMailBridgeSettings.bundle/NanoMailBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MFNanoBridgeSettingsAccountMailboxPickerControllerDelegate;
@class NSArray, MFNanoBridgeSettingsMailbox, MailAccount;

@interface MFNanoBridgeSettingsAccountMailboxPickerController : UITableViewController {

	NSArray* _mailboxes;
	MFNanoBridgeSettingsMailbox* _selectedMailbox;
	id<MFNanoBridgeSettingsAccountMailboxPickerControllerDelegate> _delegate;
	MailAccount* _account;

}

@property (assign,nonatomic) id<MFNanoBridgeSettingsAccountMailboxPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MailAccount * account;                                                              //@synthesize account=_account - In the implementation block
-(void)refreshData;
-(void)_recreateMailboxes;
-(id)_indexPathForMailbox:(id)arg1 ;
-(void)_notifyDelegateThatSelectedMailboxChanged;
-(void)setDelegate:(id<MFNanoBridgeSettingsAccountMailboxPickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MFNanoBridgeSettingsAccountMailboxPickerControllerDelegate>)delegate;
-(void)viewDidLoad;
-(id)initWithAccount:(id)arg1 ;
-(MailAccount *)account;
@end

