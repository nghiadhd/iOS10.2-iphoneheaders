/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIViewElementLayoutContext, SKUIBrowseItemComponent;

@interface SKUIBrowseItemPageSection : SKUIStorePageSection {

	SKUIViewElementLayoutContext* _layoutContext;
	SKUIBrowseItemComponent* _component;

}

@property (nonatomic,readonly) SKUIBrowseItemComponent * pageComponent;              //@synthesize component=_component - In the implementation block
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(SKUIBrowseItemComponent *)pageComponent;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(id)_imageForImageViewElement:(id)arg1 styleColor:(id)arg2 ;
-(UIEdgeInsets)sectionContentInset;
@end

