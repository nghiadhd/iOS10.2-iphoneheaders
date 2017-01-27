/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray, UIView, NSString, UIColor;

@interface BFFLinkLabelFooterView : UIView {

	UILabel* _label;
	NSMutableArray* _linkHandlers;
	UIView* _topLine;
	BOOL _wantsSideBySideLayout;
	BOOL _wantsFromBottomLayout;
	double _flexibleHeight;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) double flexibleHeight;                   //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                    //@synthesize margins=_margins - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (assign,nonatomic) BOOL wantsSideBySideLayout;              //@synthesize wantsSideBySideLayout=_wantsSideBySideLayout - In the implementation block
@property (assign,nonatomic) BOOL wantsFromBottomLayout;              //@synthesize wantsFromBottomLayout=_wantsFromBottomLayout - In the implementation block
@property (nonatomic,retain) UIColor * topLineColor; 
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)removeAllLinks;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(double)flexibleHeight;
-(void)setFlexibleHeight:(double)arg1 ;
-(unsigned long long)numberOfLinks;
-(void)addLinkWithTitle:(id)arg1 textStyle:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeLinkAtIndex:(unsigned long long)arg1 ;
-(BOOL)wantsSideBySideLayout;
-(BOOL)wantsFromBottomLayout;
-(UIColor *)topLineColor;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
-(void)addLinkWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setTopLineColor:(UIColor *)arg1 ;
-(void)setWantsSideBySideLayout:(BOOL)arg1 ;
-(void)setWantsFromBottomLayout:(BOOL)arg1 ;
@end

