/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIVisualEffect, UITableViewRowAction;

@interface _UITableViewCellActionButton : UIButton {

	UIVisualEffect* _backgroundEffect;
	UITableViewRowAction* _action;
	unsigned long long _style;

}

@property (nonatomic,retain) UITableViewRowAction * action;                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
+(id)actionButtonWithStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UITableViewRowAction *)action;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(void)setAction:(UITableViewRowAction *)arg1 ;
@end

