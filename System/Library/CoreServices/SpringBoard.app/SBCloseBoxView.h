/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIButton.h>

@class SBIconBlurryBackgroundView, UIView, UIImageView, SBIconColorSettings;

@interface SBCloseBoxView : UIButton {

	SBIconBlurryBackgroundView* _backgroundView;
	UIView* _whiteTintView;
	UIImageView* _xColorBurnView;
	UIImageView* _xPlusDView;
	SBIconColorSettings* _colorSettings;
	CGPoint _wallpaperRelativeCenter;

}
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
@end

