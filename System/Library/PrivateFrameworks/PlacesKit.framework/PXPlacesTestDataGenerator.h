/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PlacesKit/PlacesKit-Structs.h>
@class NSObject, NSArray, NSMutableArray;

@interface PXPlacesTestDataGenerator : NSObject {

	NSObject*<OS_dispatch_queue> _generationQueue;
	NSArray* _latOffsets;
	NSArray* _longOffsets;
	unsigned long long _max;
	CLLocationCoordinate2D _from;
	CLLocationCoordinate2D _to;
	NSMutableArray* _dataPoints;

}
-(id)init;
-(id)generateOffsetArray:(double)arg1 insert:(BOOL)arg2 ;
-(unsigned long long)generateDataPointsFromLocation:(CLLocationCoordinate2D)arg1 toLocation:(CLLocationCoordinate2D)arg2 longDir:(long long)arg3 currentCount:(unsigned long long)arg4 ;
-(void)generateTestImages:(unsigned long long)arg1 fromLocation:(CLLocationCoordinate2D)arg2 toLocation:(CLLocationCoordinate2D)arg3 atEnd:(/*^block*/id)arg4 ;
@end

