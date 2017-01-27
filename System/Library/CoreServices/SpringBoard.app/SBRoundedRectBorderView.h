/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SBRoundedRectBorderView : UIView

@property (nonatomic,retain) UIColor * borderColor; 
@property (assign,nonatomic) double borderWidth; 
@property (assign,nonatomic) double cornerRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
@end
