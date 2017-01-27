/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIControl.h>

@class NCMaterialButton, UIButton, NCMaterialView;

@interface NCMediaPlayPauseButton : UIControl {

	long long _type;
	NCMaterialButton* _button;
	UIButton* _invisibleButton;
	NCMaterialView* _backgroundCircle;

}

@property (nonatomic,retain) NCMaterialButton * button;                      //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIButton * invisibleButton;                     //@synthesize invisibleButton=_invisibleButton - In the implementation block
@property (nonatomic,retain) NCMaterialView * backgroundCircle;              //@synthesize backgroundCircle=_backgroundCircle - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
+(id)_buttonImageNamed:(id)arg1 size:(CGSize)arg2 ;
-(void)layoutSubviews;
-(NCMaterialButton *)button;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)tintColorDidChange;
-(void)_updateStyle;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateBackground;
-(void)_updateSize;
-(void)setButton:(NCMaterialButton *)arg1 ;
-(void)_updateSelected;
-(id)initWithFrame:(CGRect)arg1 type:(long long)arg2 ;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(void)_updateBackgroundForAudioStyle;
-(void)_updateBackgroundForMovieStyle;
-(NCMaterialView *)backgroundCircle;
-(void)setBackgroundCircle:(NCMaterialView *)arg1 ;
-(void)_updateSizeForAudioStyle;
-(void)_updateSizeForMovieStyle;
-(UIButton *)invisibleButton;
-(void)_updateStyleForAudioStyle;
-(void)_updateStyleForMovieStyle;
-(void)_updateSelectedForAudioStyle;
-(void)_updateSelectedForMovieStyle;
-(void)setInvisibleButton:(UIButton *)arg1 ;
-(void)_updateType;
@end

