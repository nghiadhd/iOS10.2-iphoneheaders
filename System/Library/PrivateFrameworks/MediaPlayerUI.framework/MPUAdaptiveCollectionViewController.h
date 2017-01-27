/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MPUFoundation/MPUDataSourceViewController.h>
#import <libobjc.A.dylib/MPUInsetProxyScrollViewDelegate.h>

@class MPUInsetProxyScrollView, NSMutableDictionary, NSString;

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController <MPUInsetProxyScrollViewDelegate> {

	UIEdgeInsets _contentInsetAdditions;
	UIEdgeInsets _scrollIndicatorInsetsAdditions;
	MPUInsetProxyScrollView* _insetProxyScrollView;
	NSMutableDictionary* _sizeClassToClassMap;

}

@property (nonatomic,retain) NSMutableDictionary * sizeClassToClassMap;              //@synthesize sizeClassToClassMap=_sizeClassToClassMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(id)_childDataSourceViewController;
-(void)_updateViewControllerIfNecessary;
-(NSMutableDictionary *)sizeClassToClassMap;
-(void)setSizeClassToClassMap:(NSMutableDictionary *)arg1 ;
-(void)dataSourceDidInvalidate;
-(void)_applyNewContentInsetAdditions:(UIEdgeInsets)arg1 withExistingContentInsetAdditions:(UIEdgeInsets)arg2 toScrollView:(id)arg3 ;
-(void)_applyNewScrollIndicatorInsetsAdditions:(UIEdgeInsets)arg1 withExistingScrollIndicatorInsetsAdditions:(UIEdgeInsets)arg2 toScrollView:(id)arg3 ;
-(id)_indexPathOfTopVisibleItem;
-(void)_restoreTopVisibleIndexPath:(id)arg1 ;
-(void)insetProxyScrollViewContentInsetDidChange:(id)arg1 ;
-(void)insetProxyScrollViewScrollIndicatorInsetsDidChange:(id)arg1 ;
-(void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2 ;
@end

