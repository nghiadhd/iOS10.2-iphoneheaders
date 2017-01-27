/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <VideosExtras/VideosExtrasTemplateViewController.h>
#import <VideosExtras/VideosExtrasCarouselViewControllerDataSource.h>
#import <VideosExtras/VideosExtrasCarouselViewControllerDelegate.h>
#import <VideosExtras/VideosExtrasImageBrowserViewControllerDataSource.h>
#import <VideosExtras/VideosExtrasNavigationAnimationControllerProvider.h>
#import <VideosExtras/VideosExtrasZoomingImageInteractiveTransitionSource.h>
#import <VideosExtras/VideosExtrasZoomingImageTransitionParticipant.h>

@class VideosExtrasZoomingImageTransitionController, NSArray, VideosExtrasCarouselViewController, VideosExtrasImageBrowserViewController, NSDictionary, IKShowcaseTemplate, NSString;

@interface VideosExtrasShowcaseTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate, VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasNavigationAnimationControllerProvider, VideosExtrasZoomingImageInteractiveTransitionSource, VideosExtrasZoomingImageTransitionParticipant> {

	BOOL _supportsOneupMode;
	VideosExtrasZoomingImageTransitionController* _activeZoomingImageInteractiveTransitionController;
	NSArray* _bannerButtonElements;
	NSArray* _carouselLockupElements;
	VideosExtrasCarouselViewController* _carouselViewController;
	VideosExtrasImageBrowserViewController* _imageBrowserViewController;
	NSDictionary* _overriddenFullscreenImages;
	unsigned long long _autohighlightIndex;

}

@property (nonatomic,retain) VideosExtrasZoomingImageTransitionController * activeZoomingImageInteractiveTransitionController;              //@synthesize activeZoomingImageInteractiveTransitionController=_activeZoomingImageInteractiveTransitionController - In the implementation block
@property (nonatomic,retain) NSArray * bannerButtonElements;                                                                                //@synthesize bannerButtonElements=_bannerButtonElements - In the implementation block
@property (nonatomic,retain) NSArray * carouselLockupElements;                                                                              //@synthesize carouselLockupElements=_carouselLockupElements - In the implementation block
@property (nonatomic,retain) VideosExtrasCarouselViewController * carouselViewController;                                                   //@synthesize carouselViewController=_carouselViewController - In the implementation block
@property (nonatomic,retain) VideosExtrasImageBrowserViewController * imageBrowserViewController;                                           //@synthesize imageBrowserViewController=_imageBrowserViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * overriddenFullscreenImages;                                                                     //@synthesize overriddenFullscreenImages=_overriddenFullscreenImages - In the implementation block
@property (assign,nonatomic) BOOL supportsOneupMode;                                                                                        //@synthesize supportsOneupMode=_supportsOneupMode - In the implementation block
@property (assign,nonatomic) unsigned long long autohighlightIndex;                                                                         //@synthesize autohighlightIndex=_autohighlightIndex - In the implementation block
@property (nonatomic,readonly) IKShowcaseTemplate * templateElement; 
@property (nonatomic,readonly) unsigned long long indexOfVisibleItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)showsPlaceholder;
-(IKShowcaseTemplate *)templateElement;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(unsigned long long)indexOfVisibleItem;
-(void)_prepareLayout;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)setCarouselLockupElements:(NSArray *)arg1 ;
-(void)setSupportsOneupMode:(BOOL)arg1 ;
-(void)setCarouselViewController:(VideosExtrasCarouselViewController *)arg1 ;
-(void)setImageBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1 ;
-(id)_mainChildViewController;
-(VideosExtrasCarouselViewController *)carouselViewController;
-(VideosExtrasImageBrowserViewController *)imageBrowserViewController;
-(void)setActiveZoomingImageInteractiveTransitionController:(VideosExtrasZoomingImageTransitionController *)arg1 ;
-(void)setOverriddenFullscreenImages:(NSDictionary *)arg1 ;
-(NSArray *)carouselLockupElements;
-(BOOL)supportsOneupMode;
-(void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)arg1 ;
-(NSDictionary *)overriddenFullscreenImages;
-(void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(VideosExtrasZoomingImageTransitionController *)activeZoomingImageInteractiveTransitionController;
-(unsigned long long)numberOfItemsInCarouselViewController:(id)arg1 ;
-(void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(CGSize)arg4 ;
-(unsigned long long)carouselSize;
-(void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)numberOfImagesForBrowserViewController:(id)arg1 ;
-(void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1 ;
-(NSArray *)bannerButtonElements;
-(void)setBannerButtonElements:(NSArray *)arg1 ;
-(unsigned long long)autohighlightIndex;
-(void)setAutohighlightIndex:(unsigned long long)arg1 ;
@end

