/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, NSArray, NSLayoutConstraint, UIImage, NSString;

@interface HUWallpaperPhotoCollectionCell : UITableViewCell {

	UIImageView* _imageThumbnailView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSArray* _imageSizeConstraints;
	NSArray* _horizontalConstraints;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImageView * imageThumbnailView;                        //@synthesize imageThumbnailView=_imageThumbnailView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSArray * imageSizeConstraints;                          //@synthesize imageSizeConstraints=_imageSizeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalConstraints;                         //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;               //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageHeightConstraint;              //@synthesize imageHeightConstraint=_imageHeightConstraint - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * descriptionText; 
@property (assign,nonatomic) CGSize imageSize;                                        //@synthesize imageSize=_imageSize - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImage *)image;
-(CGSize)imageSize;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(NSArray *)horizontalConstraints;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)imageHeightConstraint;
-(NSLayoutConstraint *)imageWidthConstraint;
-(UIImageView *)imageThumbnailView;
-(void)setImageThumbnailView:(UIImageView *)arg1 ;
-(NSArray *)imageSizeConstraints;
-(void)setImageSizeConstraints:(NSArray *)arg1 ;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

