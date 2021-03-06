/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImage, UIView;

@interface LPAnimationMaskView : UIView {

	UIImage* _image;
	long long _animationOrigin;
	UIView* _imageView;

}

@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long animationOrigin;                //@synthesize animationOrigin=_animationOrigin - In the implementation block
@property (nonatomic,retain,readonly) UIView * imageView; 
-(id)init;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIView *)imageView;
-(void)setAnimationOrigin:(long long)arg1 ;
-(long long)animationOrigin;
@end

