/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIColor, UIScrollView, PLBatteryUIMoveableGraphView, UIActivityIndicatorView;

@interface PSGraphViewTableCell : PSTableCell {

	BOOL waitingForData;
	BOOL graphViewDidChange;
	NSMutableArray* _graphArray;
	UIColor* labelColor;
	UIColor* graphColor;
	UIScrollView* _scrollView;
	PLBatteryUIMoveableGraphView* _graphView;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSMutableArray * graphArray; 
@property (nonatomic,retain) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) PLBatteryUIMoveableGraphView * graphView;                 //@synthesize graphView=_graphView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
+(int)graphHeight;
-(void)setGraphArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)graphArray;
-(void)generateGraphs;
-(void)pinch:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(PLBatteryUIMoveableGraphView *)graphView;
-(void)setGraphView:(PLBatteryUIMoveableGraphView *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
@end

