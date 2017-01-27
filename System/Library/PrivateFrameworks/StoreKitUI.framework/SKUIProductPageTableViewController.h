/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKUIProductPageChildViewControllerDelegate, SKUIProductPageChildViewController;
@class SKUIClientContext, SKUIColorScheme, UIColor, SKUIProductPageHeaderViewController, NSArray, SKUIProductPageTableView, SKUILayoutCache, UITableView, NSString;

@interface SKUIProductPageTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	id<SKUIProductPageChildViewController> _delegateSender;
	UIColor* _evenColor;
	SKUIProductPageHeaderViewController* _headerViewController;
	UIColor* _color;
	NSArray* _sections;
	SKUIProductPageTableView* _tableView;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIColorScheme * colorScheme;                                                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                            //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;                                           //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewController> delegateSender;                //@synthesize delegateSender=_delegateSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_tableView;
-(UITableView *)tableView;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUILayoutCache *)textLayoutCache;
-(void)_addHeaderView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2 ;
-(void)scrollToView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegateSender:(id<SKUIProductPageChildViewController>)arg1 ;
-(id)_textLayoutRequestWithText:(id)arg1 ;
-(id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2 ;
-(id<SKUIProductPageChildViewController>)delegateSender;
@end

