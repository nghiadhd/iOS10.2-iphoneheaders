/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBAppViewBackgroundView.h>

@protocol SBAppViewBackgroundView <NSObject>
@property (assign,nonatomic) long long wallpaperStyle; 
@optional
-(long long)wallpaperStyle;
-(void)setWallpaperStyle:(long long)arg1;

@end


@class SBWallpaperEffectView, NSString;

@interface SBAppViewBackgroundView : UIView <SBAppViewBackgroundView> {

	long long _wallpaperStyle;
	SBWallpaperEffectView* _backgroundWallpaperEffectView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long wallpaperStyle;              //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
-(long long)wallpaperStyle;
-(void)setWallpaperStyle:(long long)arg1 ;
-(id)_backgroundWallpaperEffectView;
-(void)_teardownBackgroundWallpaperEffectView;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)description;
-(BOOL)_isTranslucent;
-(void)_setupBackground;
@end

