/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol WallpaperMagicButtonActionHandler;
@class UIButton, UILabel, WallpaperMagicTableViewCellSpec;

@interface WallpaperMagicTableViewCell : UITableViewCell {

	UIButton* _dynamicButton;
	UIButton* _vrButton;
	UIButton* _panoramaButton;
	UILabel* _dynamicLabel;
	UILabel* _vrLabel;
	UILabel* _panoramaLabel;
	UIButton* _stillsButton;
	UILabel* _stillsLabel;
	UIButton* _irisButton;
	UILabel* _irisLabel;
	id<WallpaperMagicButtonActionHandler> _selectionTarget;
	WallpaperMagicTableViewCellSpec* _cellSpec;
	CGSize _buttonSize;

}

@property (nonatomic,retain) UIButton * dynamicButton;                                                  //@synthesize dynamicButton=_dynamicButton - In the implementation block
@property (nonatomic,retain) UIButton * vrButton;                                                       //@synthesize vrButton=_vrButton - In the implementation block
@property (nonatomic,retain) UIButton * panoramaButton;                                                 //@synthesize panoramaButton=_panoramaButton - In the implementation block
@property (nonatomic,retain) UILabel * dynamicLabel;                                                    //@synthesize dynamicLabel=_dynamicLabel - In the implementation block
@property (nonatomic,retain) UILabel * vrLabel;                                                         //@synthesize vrLabel=_vrLabel - In the implementation block
@property (nonatomic,retain) UILabel * panoramaLabel;                                                   //@synthesize panoramaLabel=_panoramaLabel - In the implementation block
@property (nonatomic,retain) UIButton * stillsButton;                                                   //@synthesize stillsButton=_stillsButton - In the implementation block
@property (nonatomic,retain) UILabel * stillsLabel;                                                     //@synthesize stillsLabel=_stillsLabel - In the implementation block
@property (nonatomic,retain) UIButton * irisButton;                                                     //@synthesize irisButton=_irisButton - In the implementation block
@property (nonatomic,retain) UILabel * irisLabel;                                                       //@synthesize irisLabel=_irisLabel - In the implementation block
@property (assign,nonatomic) CGSize buttonSize;                                                         //@synthesize buttonSize=_buttonSize - In the implementation block
@property (assign,nonatomic,__weak) id<WallpaperMagicButtonActionHandler> selectionTarget;              //@synthesize selectionTarget=_selectionTarget - In the implementation block
@property (nonatomic,retain) WallpaperMagicTableViewCellSpec * cellSpec;                                //@synthesize cellSpec=_cellSpec - In the implementation block
-(void)layoutSubviews;
-(id)initWithSpec:(id)arg1 ;
-(void)setButtonSize:(CGSize)arg1 ;
-(CGSize)buttonSize;
-(UIButton *)vrButton;
-(UIButton *)panoramaButton;
-(UIButton *)dynamicButton;
-(UIButton *)stillsButton;
-(void)setCellSpec:(WallpaperMagicTableViewCellSpec *)arg1 ;
-(UILabel *)vrLabel;
-(UILabel *)panoramaLabel;
-(UILabel *)dynamicLabel;
-(UILabel *)stillsLabel;
-(UILabel *)irisLabel;
-(CGRect)_rectForMagicWallpaperElement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(WallpaperMagicTableViewCellSpec *)cellSpec;
-(void)setSelectionTarget:(id<WallpaperMagicButtonActionHandler>)arg1 ;
-(void)setDynamicButton:(UIButton *)arg1 ;
-(void)setVrButton:(UIButton *)arg1 ;
-(void)setPanoramaButton:(UIButton *)arg1 ;
-(void)setDynamicLabel:(UILabel *)arg1 ;
-(void)setVrLabel:(UILabel *)arg1 ;
-(void)setPanoramaLabel:(UILabel *)arg1 ;
-(void)setStillsButton:(UIButton *)arg1 ;
-(void)setStillsLabel:(UILabel *)arg1 ;
-(void)setIrisLabel:(UILabel *)arg1 ;
-(id<WallpaperMagicButtonActionHandler>)selectionTarget;
-(void)setIrisButton:(UIButton *)arg1 ;
-(UIButton *)irisButton;
@end

