/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel;

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView {

	UIView*<NTKComplicationImageView> _imageView;
	NTKColoringLabel* _label;

}
+(void)load;
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateForTemplateChange;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(double)_widthThatFits;
-(void)_updateContentForMaxSizeChange;
-(void)_updateLabelMaxWidth;
-(BOOL)_shouldLayoutWithImageView;
@end

