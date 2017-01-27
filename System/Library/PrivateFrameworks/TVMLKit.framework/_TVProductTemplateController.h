/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class IKViewElement, IKImageElement, UIImage, UIImageView, CALayer, UIView, IKAudioElement, _TVCollectionView, UIViewController, NSArray, NSIndexPath, NSString;

@interface _TVProductTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, _TVCollectionViewDelegate, TVAppTemplateImpressionable, CAAnimationDelegate, UIPopoverPresentationControllerDelegate> {

	IKViewElement* _templateElement;
	IKImageElement* _bgImageElement;
	IKImageElement* _heroImageElement;
	UIImage* _bgImage;
	UIImageView* _bgImageView;
	CALayer* _bgBlurSublayer;
	UIView* _backdropView;
	UIView* _backdropAccessoryView;
	UIView* _backdropTintView;
	UIImageView* _vignetteView;
	UIImageView* _tvVignetteView;
	IKAudioElement* _bgAudioElement;
	IKViewElement* _productBannerElement;
	IKViewElement* _infoListElement;
	IKViewElement* _titleElement;
	_TVCollectionView* _collectionView;
	UIViewController* _bannerViewController;
	NSArray* _viewControllers;
	NSArray* _rowSpacingMetricsList;
	double _productBannerHeight;
	BOOL _isPartialScrollingTemplate;
	NSIndexPath* _autoHighlightIndexPath;
	BOOL _fadedIn;
	double _impressionThreshold;
	CGSize _contentSizeEnsured;
	UIImageView* _topHeroImageView;
	UIView* _topHeroSeparatorView;
	UIImageView* _topHeroGradientView;
	BOOL _topHeroImageVisible;
	IKImageElement* _topHeroImageElement;
	UIViewController* _accessoryMarkerViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_imageDecoratorForLoadingTemplateElement:(id)arg1 ;
+(id)_backgroundImageProxyForProductTemplateElement:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(long long)preferredStatusBarStyle;
-(long long)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(long long)_backdropStyle;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(BOOL)animateAppearanceUpdate;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)updateWithProductTemplate:(id)arg1 ;
-(void)_configureWithBgElement:(id)arg1 ;
-(void)_updateImpressions;
-(void)_cancelImpressionsUpdate;
-(void)_recordImpressionsForVisibleView;
-(void)_configureTopHeroImage:(id)arg1 ;
-(id)_spacingMetricsForViewControllers:(id)arg1 ;
-(void)_configureWithBannerElement:(id)arg1 ;
-(id)_adamIDForElement:(id)arg1 ;
-(id)_canonicalIDForElement:(id)arg1 ;
-(void)_configureBackgroundAccessoryView;
-(CGSize)_topHeroImageViewSize;
-(UIEdgeInsets)_cellMarginForIndex:(long long)arg1 partialMargins:(UIEdgeInsets*)arg2 ;
-(void)_updateBackgroundAccessoryView;
-(id)_relatedSectionHeaderView;
-(void)_updateBackgroundAccessoryViewEffects;
-(CGSize)_maxContentSize;
-(id)_yOffsetForView:(id)arg1 withScrollView:(id)arg2 targetYOffset:(double)arg3 ;
@end

