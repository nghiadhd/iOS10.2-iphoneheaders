/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIControl.h>
#import <MPUFoundation/MPUVibrantContentDisabling.h>
#import <MPUFoundation/MPUTransportButton.h>

@class UIButton, MPUTransportButtonEventHandler, UIImage, UIColor, UIImageView, NSString;

@interface MPUHalfTintedTransportButton : UIControl <MPUVibrantContentDisabling, MPUTransportButton> {

	UIButton* _regularButton;
	UIButton* _tintedButton;
	MPUTransportButtonEventHandler* _transportButtonEventHandler;
	UIImage* _regularImage;
	UIColor* _regularImageColor;
	UIImage* _tintedImage;

}

@property (getter=_regularButton,nonatomic,readonly) UIButton * regularButton; 
@property (getter=_tintedButton,nonatomic,readonly) UIButton * tintedButton; 
@property (nonatomic,retain) UIImage * regularImage;                                                      //@synthesize regularImage=_regularImage - In the implementation block
@property (assign,nonatomic) double regularImageAlpha; 
@property (nonatomic,retain) UIColor * regularImageColor;                                                 //@synthesize regularImageColor=_regularImageColor - In the implementation block
@property (nonatomic,readonly) UIImageView * regularImageView; 
@property (nonatomic,retain) UIImage * tintedImage;                                                       //@synthesize tintedImage=_tintedImage - In the implementation block
@property (assign,nonatomic) double tintedImageAlpha; 
@property (nonatomic,retain) UIColor * tintedImageColor; 
@property (nonatomic,readonly) UIImageView * tintedImageView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) long long transportButtonImageViewContentMode; 
+(id)transportButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)shouldTrack;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_newButton;
-(UIImage *)tintedImage;
-(BOOL)adjustsImageWhenHighlighted;
-(id)layersNotWantingVibrancy;
-(BOOL)_shouldForwardSelectedState;
-(void)_updateRegularImage;
-(void)_applyImage:(id)arg1 toButton:(id)arg2 ;
-(id)_tintedButton;
-(double)regularImageAlpha;
-(UIImageView *)regularImageView;
-(void)setRegularImageAlpha:(double)arg1 ;
-(void)setTintedImageAlpha:(double)arg1 ;
-(double)tintedImageAlpha;
-(UIColor *)tintedImageColor;
-(UIImageView *)tintedImageView;
-(id)_regularButton;
-(UIImage *)regularImage;
-(UIColor *)regularImageColor;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MP11)arg1 ;
-(BOOL)wantsCustomHighlightAppearance;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;
-(void)setTransportButtonImageViewContentMode:(long long)arg1 ;
-(long long)transportButtonImageViewContentMode;
-(void)setTintedImageColor:(UIColor *)arg1 ;
-(void)setRegularImageColor:(UIColor *)arg1 ;
-(void)setRegularImage:(UIImage *)arg1 ;
-(void)setTintedImage:(UIImage *)arg1 ;
@end

