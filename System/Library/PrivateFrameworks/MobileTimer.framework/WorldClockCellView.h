/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/Clock.h>

@protocol WorldClockCellViewDelegate;
@class NSTimeZone, DigitalClockLabel, UILabel, NSArray;

@interface WorldClockCellView : UIView <Clock> {

	NSTimeZone* _timeZone;
	long long _nowInMinutes;
	BOOL _editing;
	BOOL _started;
	id<WorldClockCellViewDelegate> _delegate;
	DigitalClockLabel* _digitalClock;
	UILabel* _nameLabel;
	UILabel* _combinedLabel;
	NSArray* _currentConstraints;

}

@property (nonatomic,retain) NSArray * currentConstraints;                                //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<WorldClockCellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) DigitalClockLabel * digitalClock;                          //@synthesize digitalClock=_digitalClock - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * combinedLabel;                                   //@synthesize combinedLabel=_combinedLabel - In the implementation block
@property (nonatomic,readonly) BOOL started;                                              //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) int runMode; 
+(double)defaultHeight;
+(id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(BOOL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<WorldClockCellViewDelegate>)arg1 ;
-(id<WorldClockCellViewDelegate>)delegate;
-(void)setTimeZone:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)updateInterval;
-(UILabel *)nameLabel;
-(void)updateTime;
-(double)coarseUpdateInterval;
-(void)localeChange:(id)arg1 ;
-(void)updateTimeContinuously:(long long)arg1 ;
-(int)runMode;
-(DigitalClockLabel *)digitalClock;
-(UILabel *)combinedLabel;
-(void)significantTimeChange:(id)arg1 ;
-(BOOL)started;
-(NSArray *)currentConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
@end

