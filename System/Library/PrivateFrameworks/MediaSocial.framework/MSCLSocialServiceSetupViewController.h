/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MSCLAccountStore, MSCLConfiguration, NSArray, MSCLAccount, NSMutableArray, UITableView, NSString;

@interface MSCLSocialServiceSetupViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate> {

	MSCLAccountStore* _accountStore;
	MSCLConfiguration* _configuration;
	NSArray* _facebookPages;
	MSCLAccount* _facebookPagesAccount;
	NSMutableArray* _sections;
	UITableView* _tableView;

}

@property (nonatomic,readonly) MSCLAccountStore * accountStore;                //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) MSCLConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(MSCLConfiguration *)configuration;
-(MSCLAccountStore *)accountStore;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 accountStore:(id)arg2 ;
@end

