/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UIImageView.h>

@class SFImage;

@interface SearchUIImageView : UIImageView {

	unsigned long long _style;
	SFImage* _currentImage;

}

@property (assign) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (retain) SFImage * currentImage;                //@synthesize currentImage=_currentImage - In the implementation block
+(id)imageViewWithImage:(id)arg1 style:(unsigned long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)willMoveToSuperview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(SFImage *)currentImage;
-(void)updateWithImage:(id)arg1 ;
-(void)updateWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentImage:(SFImage *)arg1 ;
-(void)updateWithLoadedImage:(id)arg1 forImage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateWithUIImage:(id)arg1 isTemplate:(BOOL)arg2 ;
@end

