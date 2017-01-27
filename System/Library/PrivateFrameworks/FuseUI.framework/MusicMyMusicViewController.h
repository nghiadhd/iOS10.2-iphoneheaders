/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIScrollingSegmentedController.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUITabBarItemRootViewController.h>

@class SKUIProxyScrollView, MusicLibraryTopBarController, NSString, SKUIClientContext;

@interface MusicMyMusicViewController : SKUIScrollingSegmentedController <MusicClientContextConsuming, SKUIProxyScrollViewDelegate, SKUITabBarItemRootViewController> {

	SKUIProxyScrollView* _proxyScrollView;
	MusicLibraryTopBarController* _topBarController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(id)initWithTabBarItem:(id)arg1 ;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)_updatePrompt;
-(void)_didChangeLibrary:(id)arg1 ;
@end

