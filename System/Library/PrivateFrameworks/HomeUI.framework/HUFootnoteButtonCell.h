/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UIButton, NSString;

@interface HUFootnoteButtonCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	UIButton* _titleButton;

}

@property (nonatomic,retain) UIButton * titleButton;                //@synthesize titleButton=_titleButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                         //@synthesize item=_item - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HFItem *)item;
-(void)tintColorDidChange;
-(void)didMoveToSuperview;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_updateTextColor;
-(UIButton *)titleButton;
-(void)setTitleButton:(UIButton *)arg1 ;
@end

