/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/ICQPageDelegate.h>
#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>

@protocol ICQUpgradeFlowManagerDelegate;
@class NSURLSession, ICQUpgradeOfferViewController, ICQOffer, PSCloudStorageOffersManager, ICQUpgradeNavigationController, NSString;

@interface ICQUpgradeFlowManager : NSObject <UINavigationControllerDelegate, ICQPageDelegate, PSCloudStorageOffersManagerDelegate> {

	NSURLSession* _buyProductSession;
	ICQUpgradeOfferViewController* _busyOfferViewController;
	ICQOffer* _offer;
	id<ICQUpgradeFlowManagerDelegate> _delegate;
	PSCloudStorageOffersManager* _storageOffersManager;
	ICQUpgradeNavigationController* _upgradeNavigationController;

}

@property (nonatomic,retain) PSCloudStorageOffersManager * storageOffersManager;                        //@synthesize storageOffersManager=_storageOffersManager - In the implementation block
@property (nonatomic,retain) ICQUpgradeNavigationController * upgradeNavigationController;              //@synthesize upgradeNavigationController=_upgradeNavigationController - In the implementation block
@property (nonatomic,readonly) ICQOffer * offer;                                                        //@synthesize offer=_offer - In the implementation block
@property (assign,nonatomic,__weak) id<ICQUpgradeFlowManagerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowForOffer:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<ICQUpgradeFlowManagerDelegate>)arg1 ;
-(id<ICQUpgradeFlowManagerDelegate>)delegate;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(ICQOffer *)offer;
-(void)beginFlowWithPresentingViewController:(id)arg1 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)managerDidCancel:(id)arg1 ;
-(double)senderGetTopMargin:(id)arg1 ;
-(void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3 ;
-(id)_buyProductQueryKeySet;
-(id)_buyProductQueryItems;
-(id)_buyProductURL;
-(id)_storageContextJSONString;
-(id)_buyProductRequestWithAccount:(id)arg1 token:(id)arg2 ;
-(id)_storageContextHeaderDictionary;
-(id)_buyProductQueryDictionary;
-(void)_adoptRemoteUIWithPurchaseToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3 ;
-(id)initWithOffer:(id)arg1 ;
-(ICQUpgradeNavigationController *)upgradeNavigationController;
-(void)_adoptRemoteUI;
-(void)_buyProductShouldUseToken:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_presentUpgradeComplete;
-(void)_clearBusyOfferViewController;
-(void)_performPurchaseUsingSettingsUI;
-(void)cancelFlow;
-(void)_performPurchaseUsingTouchID;
-(void)_setBusyOfferViewController:(id)arg1 ;
-(void)_performPurchase;
-(id)_buyProductQueryFragment;
-(PSCloudStorageOffersManager *)storageOffersManager;
-(void)setStorageOffersManager:(PSCloudStorageOffersManager *)arg1 ;
-(void)setUpgradeNavigationController:(ICQUpgradeNavigationController *)arg1 ;
@end

