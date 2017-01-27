/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUINavigationBarSectionController.h>

@class SKUINavigationBarContext, SKUINavigationPaletteView, SKUIPaletteViewElement, SKUIViewElementLayoutContext;

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController {

	SKUINavigationBarContext* _navigationBarContext;
	SKUINavigationPaletteView* _paletteView;
	SKUIPaletteViewElement* _viewElement;
	SKUIViewElementLayoutContext* _viewLayoutContext;

}
-(id)view;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)willAppearInNavigationBar;
-(void)reloadSectionViews;
-(id)initWithPaletteViewElement:(id)arg1 ;
@end

