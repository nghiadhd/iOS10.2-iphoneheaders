/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionWidget/AppPredictionWidget-Structs.h>
#import <UIKit/UIControl.h>

@class UIButton, UILabel, NSString, UIView;

@interface APWAppIconAndLabelView : UIControl {

	UIButton* _iconButton;
	UILabel* _label;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) UIView * iconView; 
+(CGSize)size;
+(double)fontSize;
+(double)caption2BodyLeading;
+(void)_applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3 ;
+(id)_attributedStringForAppName:(id)arg1 font:(id)arg2 textColor:(id)arg3 bounds:(CGRect)arg4 ;
+(double)heightToLabelBaseline;
+(id)labelFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)bundleIdentifier;
-(id)viewForLastBaselineLayout;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)viewForFirstBaselineLayout;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(UIView *)iconView;
-(void)_iconButtonTapped:(id)arg1 ;
-(id)_iconButtonView;
@end

