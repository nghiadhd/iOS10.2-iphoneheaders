/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUICategoryTableViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUICategoryControllerDelegate;
@class SKUICategoryArtworkLoader, UIBarButtonItem, SKUIClientContext, UIViewController, NSURL, SSVLoadURLOperation, NSOperationQueue, UIPopoverController, SKUICategory, SKUISegmentedControl, NSArray, SKUICategoryTableViewController, UISegmentedControl, NSString;

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate> {

	SKUICategoryArtworkLoader* _artworkLoader;
	UIBarButtonItem* _button;
	SKUIClientContext* _clientContext;
	UIViewController* _contentsController;
	NSURL* _defaultURL;
	id<SKUICategoryControllerDelegate> _delegate;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	UIPopoverController* _popover;
	SKUICategory* _rootCategory;
	NSURL* _selectedURL;
	SKUISegmentedControl* _segmentedControl;
	long long _segmentedControlLength;
	NSArray* _segmentedControlSegments;
	SKUICategoryTableViewController* _tableViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUICategoryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUICategory * category;                                         //@synthesize rootCategory=_rootCategory - In the implementation block
@property (nonatomic,retain) NSURL * defaultURL;                                              //@synthesize defaultURL=_defaultURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * categoryButton; 
@property (nonatomic,readonly) BOOL isLoading; 
@property (assign,nonatomic) long long segmentedControlLength;                                //@synthesize segmentedControlLength=_segmentedControlLength - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * segmentedControl; 
@property (nonatomic,retain) NSURL * selectedURL;                                             //@synthesize selectedURL=_selectedURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUICategoryControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUICategoryControllerDelegate>)delegate;
-(void)setCategory:(SKUICategory *)arg1 ;
-(SKUICategory *)category;
-(void)dismiss;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)isLoading;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(UISegmentedControl *)segmentedControl;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)_artworkLoader;
-(void)_setResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithContentsController:(id)arg1 ;
-(void)loadFromURL:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setSelectedURL:(NSURL *)arg1 ;
-(void)setDefaultURL:(NSURL *)arg1 ;
-(UIBarButtonItem *)categoryButton;
-(void)setSegmentedControlLength:(long long)arg1 ;
-(void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2 ;
-(id)metricsPageContextForCategoryTableView:(id)arg1 ;
-(NSURL *)defaultURL;
-(NSURL *)selectedURL;
-(void)buttonAction:(id)arg1 ;
-(void)segmentedControlAction:(id)arg1 ;
-(void)_reloadSegmentedControl;
-(void)_precacheArtworkForCategory:(id)arg1 ;
-(void)_reloadSelectedSegment;
-(id)_rootMetricsLocations;
-(id)_tableViewControllerWithCategory:(id)arg1 ;
-(id)_metricsLocationsWithIndex:(long long)arg1 ;
-(void)_recordClickEventWithCategory:(id)arg1 index:(long long)arg2 ;
-(long long)segmentedControlLength;
@end

