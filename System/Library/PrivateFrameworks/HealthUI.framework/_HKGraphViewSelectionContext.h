/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSArray, NSNumber, HKGraphSeries;

@interface _HKGraphViewSelectionContext : NSObject {

	long long _selectionState;
	NSArray* _selectionAreaMapping;
	NSNumber* _selectedPointXValue;
	HKGraphSeries* _selectedSeries;
	CGPoint _touchPoint;
	CGRect _seriesSelectionRect;

}

@property (assign,nonatomic) long long selectionState;                    //@synthesize selectionState=_selectionState - In the implementation block
@property (assign,nonatomic) CGRect seriesSelectionRect;                  //@synthesize seriesSelectionRect=_seriesSelectionRect - In the implementation block
@property (assign,nonatomic) CGPoint touchPoint;                          //@synthesize touchPoint=_touchPoint - In the implementation block
@property (nonatomic,retain) NSArray * selectionAreaMapping;              //@synthesize selectionAreaMapping=_selectionAreaMapping - In the implementation block
@property (nonatomic,retain) NSNumber * selectedPointXValue;              //@synthesize selectedPointXValue=_selectedPointXValue - In the implementation block
@property (nonatomic,retain) HKGraphSeries * selectedSeries;              //@synthesize selectedSeries=_selectedSeries - In the implementation block
-(long long)selectionState;
-(void)setSelectionState:(long long)arg1 ;
-(HKGraphSeries *)selectedSeries;
-(void)setSelectedSeries:(HKGraphSeries *)arg1 ;
-(NSNumber *)selectedPointXValue;
-(void)setSelectedPointXValue:(NSNumber *)arg1 ;
-(CGPoint)touchPoint;
-(NSArray *)selectionAreaMapping;
-(CGRect)seriesSelectionRect;
-(void)setSeriesSelectionRect:(CGRect)arg1 ;
-(void)setSelectionAreaMapping:(NSArray *)arg1 ;
-(void)setTouchPoint:(CGPoint)arg1 ;
@end

