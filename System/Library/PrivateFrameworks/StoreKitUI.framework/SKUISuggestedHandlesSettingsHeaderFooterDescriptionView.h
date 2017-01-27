/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class NSMutableArray, SKUISuggestedHandlesSettingsHeaderFooterDescription, UILabel;

@interface SKUISuggestedHandlesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {

	NSMutableArray* _buttons;
	SKUISuggestedHandlesSettingsHeaderFooterDescription* _description;
	UILabel* _label;

}
+(CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3 ;
+(id)_helpLabelWithDescription:(id)arg1 forWidth:(double)arg2 ;
-(void)layoutSubviews;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)_buttonAction:(id)arg1 ;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
@end

