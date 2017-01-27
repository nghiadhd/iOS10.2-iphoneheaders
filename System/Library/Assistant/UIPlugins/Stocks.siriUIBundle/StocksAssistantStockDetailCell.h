/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Stocks.siriUIBundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <Stocks/StocksAssistantStockCell.h>
#import <libobjc.A.dylib/ChartUpdaterDelegate.h>

@class StocksAssistantChartView, NSMutableArray, UILabel, SiriUIKeyline, ChartUpdater;

@interface StocksAssistantStockDetailCell : StocksAssistantStockCell <ChartUpdaterDelegate> {

	StocksAssistantChartView* _stockChart;
	NSMutableArray* _titleLabels;
	NSMutableArray* _valueLabels;
	UILabel* _priceLabel;
	UILabel* _changeLabel;
	SiriUIKeyline* _chartTopKeyline;
	SiriUIKeyline* _chartBottomKeyline;
	SiriUIKeyline* _infoKeylines[5];
	ChartUpdater* _chartUpdater;

}
+(id)infoLabelFont;
-(BOOL)shouldCenterInfoLabelViews;
-(void)centerInfoLabelViews;
-(void)layoutInfoLabelArray:(id)arg1 atPoint:(CGPoint)arg2 columnOrRowOffset:(double)arg3 maxLabelWidth:(double)arg4 horizontally:(BOOL)arg5 step:(double)arg6 ;
-(void)resetInfoLabelColors;
-(id)infoLabelWithText:(id)arg1 ;
-(void)setStockObject:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2 ;
-(void)chartUpdater:(id)arg1 didFailWithError:(id)arg2 ;
@end

