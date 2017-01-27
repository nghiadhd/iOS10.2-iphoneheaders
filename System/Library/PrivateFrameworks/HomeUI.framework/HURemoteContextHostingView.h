/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface HURemoteContextHostingView : UIView {

	UIView* _contentView;
	UIView* _destinationOutContainerView;
	UIView* _destinationOutView;
	UIView* _destinationOverView;

}

@property (nonatomic,readonly) UIView * destinationOutContainerView;              //@synthesize destinationOutContainerView=_destinationOutContainerView - In the implementation block
@property (nonatomic,readonly) UIView * destinationOutView;                       //@synthesize destinationOutView=_destinationOutView - In the implementation block
@property (nonatomic,readonly) UIView * destinationOverView;                      //@synthesize destinationOverView=_destinationOverView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners; 
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(double)_continuousCornerRadius;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_cornerRadius;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(UIView *)destinationOutView;
-(UIView *)destinationOutContainerView;
-(UIView *)destinationOverView;
-(unsigned long long)maskedCorners;
@end

