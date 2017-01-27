/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, HKHealthStore;

@interface _HKLocationSeriesStore : NSObject {

	NSMutableDictionary* _locations;
	NSMutableDictionary* _series;
	NSObject*<OS_dispatch_queue> _locationQueue;
	long long _loadingCount;
	/*^block*/id _loadingCompletionBlock;
	HKHealthStore* _healthStore;

}
-(id)init;
-(id)samples;
-(void)addLocationSeriesSamples:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_queue_checkAndReturnIfLocationsLoaded;
-(id)_queue_locations;
-(void)_queue_addLocationSeriesSamples:(id)arg1 ;
-(void)_fetchAllLocationsFromSeriesSample:(id)arg1 ;
-(void)_setLocations:(id)arg1 forUUID:(id)arg2 ;
-(BOOL)containsSameValuesAs:(id)arg1 ;
-(void)setLocationSeriesSamples:(id)arg1 ;
-(void)fetchAllLocationsWithCompletion:(/*^block*/id)arg1 ;
@end

