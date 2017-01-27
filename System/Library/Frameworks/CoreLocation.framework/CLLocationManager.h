/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, CLLocation, CLHeading, NSSet;

@interface CLLocationManager : NSObject {

	id _internal;

}

@property (assign,getter=isMatchInfoEnabled,nonatomic) BOOL matchInfoEnabled; 
@property (nonatomic,readonly) BOOL locationServicesAvailable; 
@property (nonatomic,readonly) BOOL locationServicesApproved; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (assign,nonatomic) BOOL supportInfo; 
@property (nonatomic,readonly) double bestAccuracy; 
@property (nonatomic,readonly) CLClientRef internalClient; 
@property (assign,getter=isPersistentMonitoringEnabled,nonatomic) BOOL persistentMonitoringEnabled; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,getter=isDynamicAccuracyReductionEnabled,nonatomic) BOOL dynamicAccuracyReductionEnabled; 
@property (assign,nonatomic) BOOL allowsAlteredAccessoryLocations; 
@property (assign,nonatomic) BOOL privateMode; 
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,readonly) BOOL locationServicesEnabled; 
@property (nonatomic,copy) NSString * purpose; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) BOOL pausesLocationUpdatesAutomatically; 
@property (assign,nonatomic) BOOL allowsBackgroundLocationUpdates; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL headingAvailable; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy,readonly) CLHeading * heading; 
@property (nonatomic,readonly) double maximumRegionMonitoringDistance; 
@property (nonatomic,copy,readonly) NSSet * monitoredRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedRegions; 
+(BOOL)convertAuthStatusToBool:(int)arg1 ;
+(id)referenceFrameDescription:(int)arg1 ;
+(id)locationAuthorizationDescription:(int)arg1 ;
+(id)regionStateDescription:(long long)arg1 ;
+(id)regionDescription:(id)arg1 ;
+(int)convertToHMDLocationAuthorization:(int)arg1 ;
+(id)hmdLocationAuthorizationAsString:(int)arg1 ;
+(int)convertToHMDRegionState:(long long)arg1 ;
+(id)hmdRegionStateAsString:(int)arg1 ;
+(int)authorizationStatus;
+(int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(int)_regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(BOOL)significantLocationChangeMonitoringAvailable;
+(BOOL)isMonitoringAvailableForClass:(Class)arg1 ;
+(BOOL)regionMonitoringAvailable;
+(BOOL)regionMonitoringEnabled;
+(BOOL)deferredLocationUpdatesAvailable;
+(BOOL)isPeerRangingAvailable;
+(int)regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)regionMonitoringAuthorizationStatusForBundle:(id)arg1 ;
+(void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(void)setDefaultEffectiveBundle:(id)arg1 ;
+(void)dumpDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
+(BOOL)shutdownDaemon;
+(BOOL)bundleSupported:(id)arg1 ;
+(BOOL)advertiseAsBeacon:(id)arg1 withPower:(id)arg2 ;
+(BOOL)isMicroLocationAvailable;
+(unsigned long long)entityClassesForLocationDictionary:(id)arg1 ;
+(BOOL)isLocationActiveForLocationDictionary:(id)arg1 ;
+(BOOL)hasUsedBackgroundLocationServices:(id)arg1 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(BOOL)mapCorrectionAvailable;
+(BOOL)headingAvailable;
+(id)sharedManager;
+(BOOL)dumpLogsWithMessage:(id)arg1 ;
+(unsigned long long)entityAuthorizationForLocationDictionary:(id)arg1 ;
+(unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1 ;
+(id)dateLocationLastUsedForLocationDictionary:(id)arg1 ;
+(void)setLocationServicesEnabled:(BOOL)arg1 ;
+(unsigned long long)allowableAuthorizationForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorization:(unsigned long long)arg1 forLocationDictionary:(id)arg2 ;
+(BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1 ;
+(void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned long long)arg2 ;
+(int)_authorizationStatus;
+(BOOL)locationServicesEnabled;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(BOOL)locationServicesEnabled:(BOOL)arg1 ;
+(unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1 ;
+(BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2 ;
+(BOOL)isRangingAvailable;
+(void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<CLLocationManagerDelegate>)delegate;
-(CLHeading *)heading;
-(long long)activityType;
-(CLLocation *)location;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(NSString *)purpose;
-(void)setPurpose:(NSString *)arg1 ;
-(void)onClientEvent:(int)arg1 supportInfo:(id)arg2 ;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(NSSet *)rangedRegions;
-(void)onDidBecomeActive:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
-(void)onClientEventAuthStatus:(id)arg1 ;
-(void)onClientEventLocation:(id)arg1 forceMapMatching:(BOOL)arg2 type:(id)arg3 ;
-(void)onClientEventLocationUnavailable:(id)arg1 ;
-(void)onClientEventHeading:(id)arg1 ;
-(void)onClientEventHeadingCalibration:(id)arg1 ;
-(void)onClientEventHistoricLocation:(id)arg1 ;
-(void)onClientEventError:(id)arg1 ;
-(void)onClientEventRegion:(id)arg1 ;
-(void)onClientEventRegionState:(id)arg1 ;
-(void)onClientEventRegionError:(id)arg1 ;
-(void)onClientEventRanging:(id)arg1 ;
-(void)onClientEventRangingError:(id)arg1 ;
-(void)onClientEventPeerRanging:(id)arg1 ;
-(void)onClientEventPeerRangingError:(id)arg1 ;
-(void)onClientEventRegionResponseDelayed:(id)arg1 ;
-(void)onClientEventRegionSetupCompleted:(id)arg1 ;
-(void)onClientEventAutopauseStatus:(id)arg1 ;
-(void)onClientEventBatch:(id)arg1 ;
-(void)onClientEventInterrupted:(id)arg1 ;
-(void)onClientEventVehicleSpeed:(id)arg1 ;
-(void)onClientEventVehicleHeading:(id)arg1 ;
-(void)onClientEventSignificantLocationVisit:(id)arg1 ;
-(void)onClientEventMicroLocations:(id)arg1 ;
-(void)resumeLocationUpdates;
-(void)pauseLocationUpdates:(BOOL)arg1 ;
-(BOOL)pausesLocationUpdatesAutomatically;
-(BOOL)locationServicesAvailable;
-(void)setSupportInfo:(BOOL)arg1 ;
-(BOOL)supportInfo;
-(double)bestAccuracy;
-(CLClientRef)internalClient;
-(void)setPrivateMode:(BOOL)arg1 ;
-(BOOL)privateMode;
-(void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2 ;
-(void)disallowDeferredLocationUpdates;
-(double)headingFilter;
-(void)startAppStatusUpdates;
-(void)stopAppStatusUpdates;
-(void)startTechStatusUpdates;
-(void)stopTechStatusUpdates;
-(void)startMonitoringSignificantLocationChanges;
-(void)stopMonitoringSignificantLocationChanges;
-(void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)requestStateForRegion:(id)arg1 ;
-(double)maximumRegionMonitoringDistance;
-(void)startRangingBeaconsInRegion:(id)arg1 ;
-(void)stopRangingBeaconsInRegion:(id)arg1 ;
-(void)requestRangingToPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)respondToRangingFromPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)startRangingToPeers:(id)arg1 intervalSeconds:(unsigned long long)arg2 ;
-(void)stopRangingToPeers:(id)arg1 ;
-(void)startRangingFromPeers:(id)arg1 ;
-(void)stopRangingFromPeers:(id)arg1 ;
-(id)appsUsingLocation;
-(id)appsUsingLocationWithDetails;
-(id)technologiesInUse;
-(void)onLocationRequestTimeout;
-(void)onRangingRequestTimeout;
-(BOOL)isPersistentMonitoringEnabled;
-(void)setPersistentMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isDynamicAccuracyReductionEnabled;
-(void)setDynamicAccuracyReductionEnabled:(BOOL)arg1 ;
-(BOOL)allowsAlteredAccessoryLocations;
-(void)registerAsLocationClient;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setHeadingFilter:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(BOOL)locationServicesApproved;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)dismissHeadingCalibrationDisplay;
-(double)desiredAccuracy;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(double)distanceFilter;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(int)headingOrientation;
-(double)expectedGpsUpdateInterval;
-(BOOL)isMatchInfoEnabled;
-(void)setAllowsAlteredAccessoryLocations:(BOOL)arg1 ;
-(BOOL)headingAvailable;
-(void)startUpdatingLocationWithPrompt;
-(void)requestWhenInUseAuthorization;
-(void)setPausesLocationUpdatesAutomatically:(BOOL)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setIsActuallyAWatchKitExtension:(BOOL)arg1 ;
-(void)resetApps;
-(void)setActivityType:(long long)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(BOOL)locationServicesEnabled;
-(void)startMonitoringForRegion:(id)arg1 ;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(NSSet *)monitoredRegions;
-(void)requestLocation;
-(void)markAsHavingReceivedLocation;
-(void)requestCurrentMicroLocation;
-(void)startMonitoringVisits;
-(void)stopMonitoringVisits;
-(void)stopUpdatingMicroLocation;
-(void)startUpdatingMicroLocation;
-(void)requestAlwaysAuthorization;
@end
