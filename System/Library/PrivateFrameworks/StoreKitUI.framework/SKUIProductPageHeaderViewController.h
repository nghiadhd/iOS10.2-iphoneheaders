/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIProductPageHeaderViewDelegate;
@class UIPopoverController, SKUIContentRatingArtworkResourceLoader, SKUIItemArtworkContext, SKUIClientContext, SKUIProductPageHeaderView, UIImage, SKUIItem, SSVLoadURLOperation, NSOperationQueue, SKUIItemOffer, SKUIProductPage, SKUIProductPageHeaderFloatingView, NSString;

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate> {

	UIPopoverController* _activityPopoverController;
	BOOL _askPermission;
	SKUIContentRatingArtworkResourceLoader* _contentRatingArtworkLoader;
	SKUIItemArtworkContext* _artworkContext;
	SKUIClientContext* _clientContext;
	id<SKUIProductPageHeaderViewDelegate> _delegate;
	SKUIProductPageHeaderView* _headerView;
	UIImage* _iconImage;
	SKUIItem* _item;
	long long _itemIdentifier;
	SSVLoadURLOperation* _loadIconOperation;
	SSVLoadURLOperation* _loadUberOperation;
	NSOperationQueue* _operationQueue;
	long long _personalizationState;
	SKUIItemOffer* _personalizedOffer;
	UIImage* _placeholderImage;
	SKUIProductPage* _productPage;
	UIImage* _uberImage;
	BOOL _wantsActivityViewController;
	SKUIProductPageHeaderFloatingView* _floatingView;
	BOOL _performArtistActionOnLoad;

}

@property (nonatomic,readonly) SKUIItem * item;                                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                  //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL askPermission;                                                 //@synthesize askPermission=_askPermission - In the implementation block
@property (nonatomic,readonly) UIImage * iconImage; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) long long selectedSectionIndex; 
@property (nonatomic,readonly) SKUIProductPageHeaderFloatingView * floatingView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIProductPageHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<SKUIProductPageHeaderViewDelegate>)delegate;
-(SKUIItem *)item;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(UIImage *)iconImage;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setAskPermission:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithItem:(id)arg1 ;
-(void)setProductPage:(id)arg1 ;
-(void)_destroyPopoverController;
-(void)_itemOfferButtonAction:(id)arg1 ;
-(id)_artworkContext;
-(SKUIProductPageHeaderFloatingView *)floatingView;
-(BOOL)askPermission;
-(id)_segmentedControlTitles;
-(void)_sectionControlAction:(id)arg1 ;
-(id)_activeItem;
-(void)_setPersonalizedOffer:(id)arg1 ;
-(void)_setArtworkWithImage:(id)arg1 error:(id)arg2 ;
-(void)_loadUberImageIfAvailable;
-(long long)selectedSectionIndex;
-(void)_reloadItemStateAnimated:(BOOL)arg1 ;
-(void)_showActivityViewControllerFromView:(id)arg1 ;
-(id)_contentRatingResourceLoader;
-(void)_artistButtonAction:(id)arg1 ;
-(void)setSelectedSectionIndex:(long long)arg1 ;
-(id)_ageBandString;
-(BOOL)_isRestricted;
-(void)_shareButtonAction:(id)arg1 ;
-(void)_showAskPermissionBanner;
-(void)_setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(void)_sendDidReloadOffer;
-(void)_setUberWithImage:(id)arg1 error:(id)arg2 ;
-(void)_showSynthesizedItemStateWithFlag:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_disableItemOfferButtonWithTitle:(id)arg1 animated:(BOOL)arg2 ;
@end

