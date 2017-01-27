/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryUsageUI/BatteryUsageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSDate, NSMutableArray;

@interface PLBatteryUIGraphView : UIView {

	NSDate* startDate;
	NSDate* endDate;
	float maxPower;
	float minPower;
	int _errValue;
	int _graphType;
	NSMutableArray* _inputData;

}

@property (nonatomic,copy) NSMutableArray * inputData;              //@synthesize inputData=_inputData - In the implementation block
@property (assign,nonatomic) int graphType;                         //@synthesize graphType=_graphType - In the implementation block
+(int)graphHeight;
-(id)initWithFrame:(CGRect)arg1 andData:(id)arg2 ;
-(void)setDefaultRange;
-(void)setGraphType:(int)arg1 ;
-(void)drawPoints:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)setRangesFromArray:(id)arg1 ;
-(int)graphType;
-(void)drawErrorText:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawGrid:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSMutableArray *)inputData;
-(void)setInputData:(NSMutableArray *)arg1 ;
@end

