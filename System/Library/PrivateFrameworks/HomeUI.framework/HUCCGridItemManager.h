/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@protocol HUCCFavoriteItemProvider;
@class HFItemProvider;

@interface HUCCGridItemManager : HFItemManager {

	unsigned long long _maximumNumberOfItems;
	unsigned long long _itemType;
	HFItemProvider*<HUCCFavoriteItemProvider> _favoriteItemProvider;

}

@property (nonatomic,retain) HFItemProvider*<HUCCFavoriteItemProvider> favoriteItemProvider;              //@synthesize favoriteItemProvider=_favoriteItemProvider - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItems;                                     //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType;                                               //@synthesize itemType=_itemType - In the implementation block
-(unsigned long long)itemType;
-(void)setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(unsigned long long)maximumNumberOfItems;
-(HFItemProvider*<HUCCFavoriteItemProvider>)favoriteItemProvider;
-(void)setFavoriteItemProvider:(HFItemProvider*<HUCCFavoriteItemProvider>)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 itemType:(unsigned long long)arg2 ;
-(void)reloadForMaximumNumberOfItemsChange;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(id)_itemForSorting;
@end

