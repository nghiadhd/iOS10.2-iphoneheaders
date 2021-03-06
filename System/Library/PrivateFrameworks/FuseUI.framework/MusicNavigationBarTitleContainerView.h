/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, UIColor;

@interface MusicNavigationBarTitleContainerView : UIView {

	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) double titleAlpha; 
@property (nonatomic,retain) UIColor * titleTextColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(CGSize)intrinsicContentSize;
-(id)viewForBaselineLayout;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)setTitleAlpha:(double)arg1 ;
-(double)titleAlpha;
@end

