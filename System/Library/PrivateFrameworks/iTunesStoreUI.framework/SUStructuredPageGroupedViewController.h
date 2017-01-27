/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SULoadingView;

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController {

	SULoadingView* _loadingView;

}
-(id)init;
-(void)dealloc;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)newNoItemsOverlayLabel;
-(BOOL)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg1 ;
-(BOOL)_addPurchaseBatch:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_performPurchaseAnimationForIndexPath:(id)arg1 ;
-(void)setSkLoading:(BOOL)arg1 ;
@end

