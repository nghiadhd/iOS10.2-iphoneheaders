/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNLocationManagerObserver.h>

@class GEORouteSet, GEOComposedRoute, GEOETARoute, GEOComposedWaypoint, MNRoutePlanningDetails, MNActiveRouteDetails, GEORoutePreloader, NSString;

@interface MNRouteManager : NSObject <MNLocationManagerObserver> {

	GEORouteSet* _currentRouteSet;
	GEOComposedRoute* _currentRoute;
	GEOETARoute* _etaRoute;
	GEOComposedWaypoint* _originalDestination;
	GEOComposedRoute* _originalRoute;
	MNRoutePlanningDetails* _routePlanningDetails;
	MNActiveRouteDetails* _activeRouteDetails;
	int _guidanceLevel;
	GEORoutePreloader* _preloader;
	NSString* _tileLoaderClientIdentifier;

}

@property (nonatomic,readonly) GEORouteSet * currentRouteSet;                              //@synthesize currentRouteSet=_currentRouteSet - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * currentRoute;                            //@synthesize currentRoute=_currentRoute - In the implementation block
@property (nonatomic,readonly) GEOETARoute * etaRoute;                                     //@synthesize etaRoute=_etaRoute - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * originalDestination;                  //@synthesize originalDestination=_originalDestination - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * originalRoute;                           //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,readonly) MNRoutePlanningDetails * routePlanningDetails;              //@synthesize routePlanningDetails=_routePlanningDetails - In the implementation block
@property (nonatomic,readonly) MNActiveRouteDetails * activeRouteDetails;                  //@synthesize activeRouteDetails=_activeRouteDetails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)open;
-(GEOComposedRoute *)originalRoute;
-(void)updateForLocation:(id)arg1 ;
-(GEOComposedRoute *)currentRoute;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(GEOETARoute *)etaRoute;
-(GEOComposedWaypoint *)originalDestination;
-(MNActiveRouteDetails *)activeRouteDetails;
-(MNRoutePlanningDetails *)routePlanningDetails;
-(BOOL)updateForRoutePlanningDetails:(id)arg1 outError:(out id*)arg2 ;
-(void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)updateForETA:(id)arg1 forRoute:(id)arg2 ;
-(void)updateForGuidanceLevel:(int)arg1 ;
-(void)clearCurrentRoute;
-(void)_clearPreloader;
-(void)_updatePreloaderForNewRoute;
-(void)_updatePreloaderForCurrentGuidanceLevel;
-(GEORouteSet *)currentRouteSet;
@end

