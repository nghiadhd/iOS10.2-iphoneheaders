/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FitnessUI/FitnessUI-Structs.h>
@class HKWorkout, NSArray;

@interface FIUIBackgroundMapImageGenerator : NSObject {

	double _topSpeed;
	double _averageSpeed;
	double _bottomSpeed;
	HKWorkout* _workout;
	NSArray* _locationReadings;

}

@property (nonatomic,retain) HKWorkout * workout;                     //@synthesize workout=_workout - In the implementation block
@property (nonatomic,retain) NSArray * locationReadings;              //@synthesize locationReadings=_locationReadings - In the implementation block
+(void)enumerateWorkout:(id)arg1 activeLocations:(/*^block*/id)arg2 fromSeries:(id)arg3 ;
-(id)_createSnapshotOverlayPolyline:(id)arg1 pinView:(id)arg2 onSnapshot:(id)arg3 mapRect:(SCD_Struct_FI10)arg4 ;
-(void)drawLinesWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(SCD_Struct_FI10)arg3 context:(CGContextRef)arg4 pointFromMapPoint:(/*^block*/id)arg5 ;
-(void)_overlayPinView:(id)arg1 point:(CGSize)arg2 onSnapshot:(id)arg3 context:(CGContextRef)arg4 color:(id)arg5 ;
-(void)_drawLineFromPointA:(CGPoint)arg1 toPointB:(CGPoint)arg2 atSpeed:(double)arg3 context:(CGContextRef)arg4 drawDashes:(BOOL)arg5 lineWidth:(double)arg6 ;
-(id)relativeColorForSpeed:(double)arg1 ;
-(void)setLocationReadings:(NSArray *)arg1 ;
-(void)snapshotWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)locationReadings;
-(HKWorkout *)workout;
-(void)setWorkout:(HKWorkout *)arg1 ;
@end

