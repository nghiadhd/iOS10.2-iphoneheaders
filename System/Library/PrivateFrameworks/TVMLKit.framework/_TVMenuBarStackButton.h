/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIButton.h>

@class NSDictionary;

@interface _TVMenuBarStackButton : UIButton {

	NSDictionary* _tabBarItem;

}

@property (nonatomic,retain) NSDictionary * tabBarItem;              //@synthesize tabBarItem=_tabBarItem - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
-(NSDictionary *)tabBarItem;
-(void)setTabBarItem:(NSDictionary *)arg1 ;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
-(void)_configureSubviews;
-(void)_setSelectedOrHighlighted:(BOOL)arg1 ;
-(void)_updateImageEdgeInsets;
@end

