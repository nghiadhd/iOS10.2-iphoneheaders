/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTDaemonProtocol <NSObject>
@required
-(void)setRestorationIdentifier:(id)arg1;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
-(void)fetchPredictedApplications:(/*^block*/id)arg1;
-(void)setRoutineEnabled:(BOOL)arg1;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/id)arg1;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchRoutineEnabledWithReply:(/*^block*/id)arg1;
-(void)fetchBBPluginSupportedWithReply:(/*^block*/id)arg1;
-(void)clearRoutine;
-(void)simulateApplicationPredictionWithBundleIdentifier:(id)arg1 reason:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchAllLocationsOfInterestForSettingsWithReply:(/*^block*/id)arg1;
-(void)fetchPredictedConditionsForAction:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchRoutineModeFromLocation:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)startMonitoringVisits;
-(void)stopMonitoringVisits;
-(void)startLeechingVisits;
-(void)stopLeechingVisits;
-(void)fetchPathToDiagnosticFilesWithReply:(/*^block*/id)arg1;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchLocationOfInterestAtCurrentLocationWithReply:(/*^block*/id)arg1;
-(void)fetchLocationOfInterestAtCachedLocationWithReply:(/*^block*/id)arg1;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
-(void)fetchMonitoredScenarioTriggerTypesWithReply:(/*^block*/id)arg1;
-(void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1;
-(void)stopMonitoringForPredictedApplications;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchPredictedApplicationsWithPredicate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startMonitoringForPredictedRooms;
-(void)stopMonitoringForPredictedRooms;
-(void)fetchPredictedRoomsAtCurrentLocationWithReply:(/*^block*/id)arg1;
-(void)startMonitoringNextPredictedLocationsOfInterest;
-(void)stopMonitoringNextPredictedLocationsOfInterest;
-(void)fetchLastVehicleEventsWithHandler:(/*^block*/id)arg1;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)clearAllVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
-(void)engageInVehicleEventWithIdentifier:(id)arg1;
-(void)startMonitoringVehicleEvents;
-(void)stopMonitoringVehicleEvents;
-(void)addLocationOfInterestOfType:(long long)arg1 mapItemStorage:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItemStorage:(id)arg3 customLabel:(id)arg4 reply:(/*^block*/id)arg5;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItemStorage:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 reply:(/*^block*/id)arg3;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3;

@end

