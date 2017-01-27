/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <libobjc.A.dylib/MusicActionableHeaderViewDelegate.h>

@protocol MusicEntityVerticalSectionHeaderViewDelegate;
@class UIView, MusicActionableHeaderView, NSString;

@interface MusicEntityVerticalSectionHeaderView : UICollectionReusableView <MusicActionableHeaderViewDelegate> {

	UIView* _hairlineView;
	BOOL _alignsHairlineWithTitle;
	id<MusicEntityVerticalSectionHeaderViewDelegate> _delegate;
	MusicActionableHeaderView* _actionableHeaderView;
	double _topContentInset;
	double _bottomContentInset;

}

@property (assign,nonatomic,__weak) id<MusicEntityVerticalSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MusicActionableHeaderView * actionableHeaderView;                            //@synthesize actionableHeaderView=_actionableHeaderView - In the implementation block
@property (assign,nonatomic) double topContentInset;                                                        //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                                                     //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (assign,nonatomic) BOOL alignsHairlineWithTitle;                                                  //@synthesize alignsHairlineWithTitle=_alignsHairlineWithTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_Mu6)_actionableHeaderMetricsForDisplayScale:(double)arg1 ;
+(double)heightForTraitCollection:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MusicEntityVerticalSectionHeaderViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MusicEntityVerticalSectionHeaderViewDelegate>)delegate;
-(void)music_inheritedLayoutInsetsDidChange;
-(void)actionableHeaderViewDidSelectButton:(id)arg1 ;
-(void)setTopContentInset:(double)arg1 ;
-(double)topContentInset;
-(MusicActionableHeaderView *)actionableHeaderView;
-(BOOL)alignsHairlineWithTitle;
-(void)setBottomContentInset:(double)arg1 ;
-(double)bottomContentInset;
-(void)setAlignsHairlineWithTitle:(BOOL)arg1 ;
@end

