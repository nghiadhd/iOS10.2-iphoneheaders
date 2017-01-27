/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupActivitySpinnerViewControllerProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKTableHeaderView, PKPaymentSetupCardDetailsFooterView, NSMutableArray, PKPaymentWebService, NSArray, NSString;

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerViewControllerProtocol> {

	PKTableHeaderView* _headerView;
	PKPaymentSetupCardDetailsFooterView* _footerView;
	NSMutableArray* _pickerItems;
	PKPaymentWebService* _webService;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (nonatomic,readonly) PKPaymentWebService * webService;                                           //@synthesize webService=_webService - In the implementation block
@property (nonatomic,__weak,readonly) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) PKTableHeaderView * headerView; 
@property (nonatomic,readonly) NSArray * pickerItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(PKTableHeaderView *)headerView;
-(id)footerView;
-(PKPaymentWebService *)webService;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)hideActivitySpinner;
-(void)_setupLater:(id)arg1 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)showActivitySpinner;
-(id)initWithWebService:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 ;
-(NSArray *)pickerItems;
-(void)addPickerItem:(id)arg1 ;
@end

