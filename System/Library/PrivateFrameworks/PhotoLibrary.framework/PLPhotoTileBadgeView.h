/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, UILabel, UIButton;

@interface PLPhotoTileBadgeView : UIView {

	UIImageView* __photoIrisBadgeImageView;
	BOOL _isOverContent;
	BOOL _isIrisBadgeHidden;
	BOOL _enabled;
	BOOL _selected;
	long long _style;
	long long _numberOfPhotos;
	UIView* __backgroundView;
	UIImageView* __badgeImageView;
	UILabel* __textLabel;
	UIButton* __button;

}

@property (nonatomic,readonly) UIView * _backgroundView;                                     //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UIImageView * _badgeImageView;                                //@synthesize _badgeImageView=__badgeImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _photoIrisBadgeImageView;                       //@synthesize _photoIrisBadgeImageView=__photoIrisBadgeImageView - In the implementation block
@property (nonatomic,readonly) UILabel * _textLabel;                                         //@synthesize _textLabel=__textLabel - In the implementation block
@property (setter=_setButton:,nonatomic,retain) UIButton * _button;                          //@synthesize _button=__button - In the implementation block
@property (assign,nonatomic) long long style;                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long numberOfPhotos;                                       //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (assign,setter=setOverContent:,nonatomic) BOOL isOverContent;                      //@synthesize isOverContent=_isOverContent - In the implementation block
@property (assign,setter=setIrisBadgeHidden:,nonatomic) BOOL isIrisBadgeHidden;              //@synthesize isIrisBadgeHidden=_isIrisBadgeHidden - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)_backgroundView;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UIButton *)_button;
-(void)_setButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(UILabel *)_textLabel;
-(void)_updateSubviewsForStyle;
-(void)_commonPLPhotoTileBadgeViewInitialization:(long long)arg1 ;
-(UIImageView *)_photoIrisBadgeImageView;
-(void)_updatePhotoIrisBadgeAppearanceAnimated:(BOOL)arg1 ;
-(BOOL)isIrisBadgeHidden;
-(void)setIrisBadgeHidden:(BOOL)arg1 ;
-(long long)numberOfPhotos;
-(void)setOverContent:(BOOL)arg1 ;
-(BOOL)isOverContent;
-(void)setNumberOfPhotos:(long long)arg1 ;
-(void)setIrisBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateBadgeText;
-(void)_updateBadgeImage;
-(UIImageView *)_badgeImageView;
@end
