/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UIImageView, NSMutableArray, UIImage, NSString;

@interface CAMImageWell : UIButton {

	BOOL _thumbnailImageHidden;
	long long _layoutStyle;
	long long _cameraOrientation;
	UIView* __containerView;
	UIImageView* __thumbnailImageView;
	UIImageView* __maskImageView;
	NSMutableArray* __dimmingViewQueue;
	UIImage* __thumbnailImage;
	NSString* __uuid;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImage * thumbnailImage; 
@property (nonatomic,readonly) UIView * _containerView;                                            //@synthesize _containerView=__containerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _thumbnailImageView;                                  //@synthesize _thumbnailImageView=__thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _maskImageView;                                       //@synthesize _maskImageView=__maskImageView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _dimmingViewQueue;                                 //@synthesize _dimmingViewQueue=__dimmingViewQueue - In the implementation block
@property (setter=_setThumbnailImage:,nonatomic,retain) UIImage * _thumbnailImage;                 //@synthesize _thumbnailImage=__thumbnailImage - In the implementation block
@property (setter=_setUuid:,nonatomic,retain) NSString * _uuid;                                    //@synthesize _uuid=__uuid - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long cameraOrientation;                                          //@synthesize cameraOrientation=_cameraOrientation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                      //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,getter=isThumbnailImageHidden,nonatomic) BOOL thumbnailImageHidden;              //@synthesize thumbnailImageHidden=_thumbnailImageHidden - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(NSString *)_uuid;
-(CGSize)intrinsicContentSize;
-(UIView *)_containerView;
-(id)_maskImage;
-(void)_setUuid:(id)arg1 ;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(UIImage *)thumbnailImage;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(UIImageView *)_thumbnailImageView;
-(UIImage *)_thumbnailImage;
-(void)_setThumbnailImage:(id)arg1 ;
-(void)_updateForLayoutStyle;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)prepareForThumbnailUpdateFromCapture;
-(void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(BOOL)arg3 ;
-(void)recoverFromFailedThumbnailUpdate;
-(void)setCameraOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setThumbnailImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setThumbnailImageHidden:(BOOL)arg1 ;
-(void)_commonCAMImageWellInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_updateThumbnailTransformFromCameraOrientation;
-(void)_updateThumbnailImageAnimated:(BOOL)arg1 ;
-(void)_removeFirstDimmingView;
-(BOOL)isThumbnailImageHidden;
-(void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1 ;
-(void)setCameraOrientation:(long long)arg1 ;
-(long long)cameraOrientation;
-(UIImageView *)_maskImageView;
-(NSMutableArray *)_dimmingViewQueue;
@end

