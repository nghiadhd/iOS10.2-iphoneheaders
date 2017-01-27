/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKAnchoredObjectQuery, _HKLocationShifter, _HKLocationSeriesStore, HKHealthStore;

@interface FIUIWorkoutRouteSmoother : NSObject {

	HKAnchoredObjectQuery* _locationSeriesQuery;
	_HKLocationShifter* _shifter;
	_HKLocationSeriesStore* _seriesSamplesStore;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) _HKLocationSeriesStore * seriesSamplesStore;              //@synthesize seriesSamplesStore=_seriesSamplesStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                              //@synthesize healthStore=_healthStore - In the implementation block
-(void)dealloc;
-(id)initWithHealthStore:(id)arg1 ;
-(_HKLocationSeriesStore *)seriesSamplesStore;
-(void)handleAndShiftLocations:(id)arg1 withSamplesHandler:(/*^block*/id)arg2 ;
-(void)fetchSeriesSamplesFromWorkout:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 ;
-(id)_locationSeriesQueryForWorkout:(id)arg1 isUpdate:(BOOL)arg2 withUpdateHandler:(/*^block*/id)arg3 ;
-(void)fetchLocationsFromWorkout:(id)arg1 withSamplesHandler:(/*^block*/id)arg2 ;
-(void)setSeriesSamplesStore:(_HKLocationSeriesStore *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end

