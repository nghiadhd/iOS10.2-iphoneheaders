/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailAccountSettings/MailAccountSettings-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol EmailAliasListControllerDataSource;
@class NSMutableArray, NSString;

@interface EmailAliasListController : UITableViewController <UITextFieldDelegate> {

	NSMutableArray* _emailAliases;
	unsigned long long _indexOfDefaultEmailAlias;
	BOOL _addingEmailAlias;
	BOOL _disableEmailAliasListChanges;
	id<EmailAliasListControllerDataSource> _dataSource;
	id _specifier;

}

@property (assign,nonatomic) id<EmailAliasListControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) id specifier;                                                   //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic) BOOL disableEmailAliasListChanges;                              //@synthesize disableEmailAliasListChanges=_disableEmailAliasListChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisableEmailAliasListChanges:(BOOL)arg1 ;
-(void)startAddingEmailAlias;
-(BOOL)disableEmailAliasListChanges;
-(id)specifier;
-(id)init;
-(void)setDataSource:(id<EmailAliasListControllerDataSource>)arg1 ;
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<EmailAliasListControllerDataSource>)dataSource;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
@end

