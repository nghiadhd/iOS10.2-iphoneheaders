/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIView.h>

@class _TtC12UpNextWidget14LargeAlarmView, UIView;

@interface UpNextWidget.DetailedView : UIView {

	 alarmView;
	 dynamicView;
	 firstBaselineDistance;

}

@property (retain,nonatomic) _TtC12UpNextWidget14LargeAlarmView * alarmView; 
@property (retain,nonatomic) UIView * dynamicView; 
@property (assign,nonatomic) CGRect frame; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TtC12UpNextWidget14LargeAlarmView *)alarmView;
-(void)setAlarmView:(_TtC12UpNextWidget14LargeAlarmView *)arg1 ;
-(UIView *)dynamicView;
-(void)setDynamicView:(UIView *)arg1 ;
@end

