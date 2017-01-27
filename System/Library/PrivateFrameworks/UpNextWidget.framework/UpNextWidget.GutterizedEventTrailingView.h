/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSDateInterval, NSAttributedString;

@interface UpNextWidget.GutterizedEventTrailingView : UIView {

	 title;
	 location;
	 dateInterval;
	 travelAdvisoryText;
	 showTravelAdvisoryText;
	 titleLabel;
	 locationLabel;
	 timeLabel;
	 travelAdvisoryLabel;
	 topBaselineDistance;
	 intraBaselineDistance;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * location; 
@property (retain,nonatomic) NSDateInterval * dateInterval; 
@property (retain,nonatomic) NSAttributedString * travelAdvisoryText; 
@property (assign,nonatomic) BOOL showTravelAdvisoryText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(double)lastBaselineOffsetFromBottom;
-(double)firstBaselineOffsetFromTop;
-(NSDateInterval *)dateInterval;
-(double)capHeightOffsetFromTop;
-(NSAttributedString *)travelAdvisoryText;
-(void)setTravelAdvisoryText:(NSAttributedString *)arg1 ;
-(BOOL)showTravelAdvisoryText;
-(void)setShowTravelAdvisoryText:(BOOL)arg1 ;
@end

