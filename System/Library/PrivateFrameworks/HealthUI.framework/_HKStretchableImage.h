/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class UIImage;

@interface _HKStretchableImage : NSObject {

	UIImage* _topImage;
	UIImage* _centerImage;
	UIImage* _bottomImage;
	UIImage* _singlePointImage;

}

@property (nonatomic,retain) UIImage * topImage;                      //@synthesize topImage=_topImage - In the implementation block
@property (nonatomic,retain) UIImage * centerImage;                   //@synthesize centerImage=_centerImage - In the implementation block
@property (nonatomic,retain) UIImage * bottomImage;                   //@synthesize bottomImage=_bottomImage - In the implementation block
@property (nonatomic,retain) UIImage * singlePointImage;              //@synthesize singlePointImage=_singlePointImage - In the implementation block
-(double)_desiredWidth;
-(void)renderInContext:(CGContextRef)arg1 topCenter:(CGPoint)arg2 bottomCenter:(CGPoint)arg3 contextBounds:(CGRect)arg4 alpha:(double)arg5 ;
-(void)setTopImage:(UIImage *)arg1 ;
-(void)setCenterImage:(UIImage *)arg1 ;
-(void)setBottomImage:(UIImage *)arg1 ;
-(void)setSinglePointImage:(UIImage *)arg1 ;
-(void)_renderSingleImageInContext:(CGContextRef)arg1 point:(CGPoint)arg2 contextBounds:(CGRect)arg3 alpha:(double)arg4 ;
-(void)_renderStretchedInContext:(CGContextRef)arg1 frame:(CGRect)arg2 contextBounds:(CGRect)arg3 alpha:(double)arg4 ;
-(UIImage *)topImage;
-(UIImage *)centerImage;
-(UIImage *)bottomImage;
-(UIImage *)singlePointImage;
@end

