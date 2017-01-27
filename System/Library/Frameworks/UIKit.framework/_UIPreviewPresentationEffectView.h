/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface _UIPreviewPresentationEffectView : UIView {

	BOOL _shouldRasterizeForTransition;
	UIColor* _shadowColor;

}

@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double shadowAlpha; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,copy) UIColor * shadowColor;                            //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(double)blurRadius;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)shadowAlpha;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(double)shadowRadius;
-(BOOL)shouldRasterizeForTransition;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
@end

