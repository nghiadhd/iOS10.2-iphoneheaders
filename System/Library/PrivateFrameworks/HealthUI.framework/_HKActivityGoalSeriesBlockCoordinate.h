/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@class NSString;

@interface _HKActivityGoalSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id _userInfo;
	CGPoint _coordinate;

}

@property (nonatomic,readonly) CGPoint coordinate;                  //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id userInfo; 
-(NSString *)description;
-(id)userInfo;
-(CGPoint)coordinate;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(double)minYValue;
-(double)maxYValue;
-(id)initWithCoordinate:(CGPoint)arg1 userInfo:(id)arg2 ;
@end

