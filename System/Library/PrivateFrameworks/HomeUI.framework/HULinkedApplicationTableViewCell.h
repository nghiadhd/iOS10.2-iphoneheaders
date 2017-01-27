/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HULinkedApplicationView, NSString, HFItem;

@interface HULinkedApplicationTableViewCell : UITableViewCell <HUCellProtocol> {

	HULinkedApplicationView* _linkedApplicationView;

}

@property (nonatomic,retain) HULinkedApplicationView * linkedApplicationView;              //@synthesize linkedApplicationView=_linkedApplicationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HFItem *)item;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HULinkedApplicationView *)linkedApplicationView;
-(void)setLinkedApplicationView:(HULinkedApplicationView *)arg1 ;
@end

