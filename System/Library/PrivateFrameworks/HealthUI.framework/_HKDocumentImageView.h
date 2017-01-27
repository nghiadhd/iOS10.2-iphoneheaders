/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface _HKDocumentImageView : UIView {

	UIImageView* _imageView;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) UIEdgeInsets margins;                   //@synthesize margins=_margins - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)layoutSubviews;
-(id)initWithImage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
@end

