/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol HKIDIntroductionCellDelegate;
@class UIImageView, UILabel, UIButton, UIImage, NSString;

@interface HKIDIntroductionCell : UITableViewCell {

	id<HKIDIntroductionCellDelegate> _delegate;
	long long _cellType;
	UIImageView* _logoImageView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _linkButton;
	UIButton* _actionButton;

}

@property (nonatomic,retain) UIImageView * logoImageView;                                   //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * linkButton;                                         //@synthesize linkButton=_linkButton - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                       //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic,__weak) id<HKIDIntroductionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * logoImage; 
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * bodyText; 
@property (nonatomic,retain) NSString * linkButtonTitleText; 
@property (nonatomic,retain) NSString * actionButtonTitleText; 
@property (assign,nonatomic) long long cellType;                                            //@synthesize cellType=_cellType - In the implementation block
-(void)setDelegate:(id<HKIDIntroductionCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<HKIDIntroductionCellDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(void)setLogoImage:(UIImage *)arg1 ;
-(UIImage *)logoImage;
-(UILabel *)bodyLabel;
-(void)setActionButton:(UIButton *)arg1 ;
-(UIButton *)actionButton;
-(void)setCellType:(long long)arg1 ;
-(long long)cellType;
-(void)linkButtonTapped:(id)arg1 ;
-(UIImageView *)logoImageView;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(void)actionButtonTapped:(id)arg1 ;
-(void)setLinkButtonTitleText:(NSString *)arg1 ;
-(NSString *)linkButtonTitleText;
-(void)setActionButtonTitleText:(NSString *)arg1 ;
-(NSString *)actionButtonTitleText;
-(void)setLinkButton:(UIButton *)arg1 ;
-(UIButton *)linkButton;
-(void)setBodyLabel:(UILabel *)arg1 ;
@end

