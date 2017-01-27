/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, SignStyle;

@interface GuidanceSignBackgroundView : UIView {

	UIImageView* _outerBackdrop;
	UIImageView* _innerBackdrop;
	SignStyle* _style;

}

@property (nonatomic,retain) SignStyle * style;              //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SignStyle *)style;
-(void)setStyle:(SignStyle *)arg1 ;
@end

