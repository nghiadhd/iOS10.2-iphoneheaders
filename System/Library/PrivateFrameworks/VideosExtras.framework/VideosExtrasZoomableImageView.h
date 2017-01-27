/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <VideosExtras/VideosExtrasZoomingImageTransitionParticipant.h>

@class UIImage, UIImageView, NSString;

@interface VideosExtrasZoomableImageView : UIScrollView <UIScrollViewDelegate, VideosExtrasZoomingImageTransitionParticipant> {

	UIImage* _image;
	double _scaleToRestoreAfterResize;
	UIImageView* _zoomView;
	CGSize _imageSize;
	CGPoint _pointToCenterAfterResize;

}

@property (assign,nonatomic) CGSize imageSize;                              //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) CGPoint pointToCenterAfterResize;              //@synthesize pointToCenterAfterResize=_pointToCenterAfterResize - In the implementation block
@property (assign,nonatomic) double scaleToRestoreAfterResize;              //@synthesize scaleToRestoreAfterResize=_scaleToRestoreAfterResize - In the implementation block
@property (nonatomic,retain) UIImageView * zoomView;                        //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(UIImage *)image;
-(CGSize)imageSize;
-(void)_prepareToResize;
-(void)setImageSize:(CGSize)arg1 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)zoomToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_recoverFromResizing;
-(UIImageView *)zoomView;
-(void)setZoomView:(UIImageView *)arg1 ;
-(void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;
-(void)setPointToCenterAfterResize:(CGPoint)arg1 ;
-(void)setScaleToRestoreAfterResize:(double)arg1 ;
-(double)scaleToRestoreAfterResize;
-(CGPoint)pointToCenterAfterResize;
-(CGPoint)_maximumContentOffset;
-(CGPoint)_minimumContentOffset;
@end

