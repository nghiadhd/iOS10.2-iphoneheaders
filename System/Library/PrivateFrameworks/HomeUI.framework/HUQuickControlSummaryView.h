/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@protocol HFStringGenerator;
@class HUIconView, UILabel, NSArray;

@interface HUQuickControlSummaryView : UIView {

	HUIconView* _iconView;
	id<HFStringGenerator> _primaryStatusText;
	id<HFStringGenerator> _secondaryStatusText;
	unsigned long long _contentAlignment;
	long long _sizeSubclass;
	unsigned long long _iconSize;
	UILabel* _primaryStatusLabel;
	UILabel* _secondaryStatusLabel;
	NSArray* _contentConstraints;

}

@property (assign,nonatomic) unsigned long long iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) UILabel * primaryStatusLabel;                       //@synthesize primaryStatusLabel=_primaryStatusLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryStatusLabel;                     //@synthesize secondaryStatusLabel=_secondaryStatusLabel - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                         //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (nonatomic,readonly) HUIconView * iconView;                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> primaryStatusText;                //@synthesize primaryStatusText=_primaryStatusText - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> secondaryStatusText;              //@synthesize secondaryStatusText=_secondaryStatusText - In the implementation block
@property (assign,nonatomic) unsigned long long contentAlignment;                  //@synthesize contentAlignment=_contentAlignment - In the implementation block
@property (assign,nonatomic) long long sizeSubclass;                               //@synthesize sizeSubclass=_sizeSubclass - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)setIconSize:(unsigned long long)arg1 ;
-(void)setContentAlignment:(unsigned long long)arg1 ;
-(unsigned long long)contentAlignment;
-(unsigned long long)iconSize;
-(HUIconView *)iconView;
-(void)_updatePrimaryStatusContent;
-(void)_updateSecondaryStatusContent;
-(UILabel *)primaryStatusLabel;
-(void)_invalidateContentAndConstraints;
-(long long)sizeSubclass;
-(id)_statusParagraphStyleWithLineHeight:(double)arg1 ;
-(id<HFStringGenerator>)primaryStatusText;
-(UILabel *)secondaryStatusLabel;
-(id<HFStringGenerator>)secondaryStatusText;
-(double)_iconHeight;
-(void)setSizeSubclass:(long long)arg1 ;
-(void)setPrimaryStatusText:(id<HFStringGenerator>)arg1 ;
-(void)setSecondaryStatusText:(id<HFStringGenerator>)arg1 ;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentConstraints;
@end

