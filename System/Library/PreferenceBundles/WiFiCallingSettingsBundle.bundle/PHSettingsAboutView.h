/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/WiFiCallingSettingsBundle.bundle/WiFiCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIScrollView, UILabel;

@interface PHSettingsAboutView : UIView {

	UIScrollView* _scrollView;
	UILabel* _aboutTextLabel;

}

@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * aboutTextLabel;               //@synthesize aboutTextLabel=_aboutTextLabel - In the implementation block
-(UILabel *)aboutTextLabel;
-(void)setAboutTextLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithBodyText:(id)arg1 ;
@end

