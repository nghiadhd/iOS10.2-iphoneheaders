/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNLocationManagerObserver.h>
#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@protocol MNGuidanceLevelUpdaterDelegate;
@class MNRouteManager, GEOComposedRoute, MNLocation, NSString;

@interface MNGuidanceLevelUpdater : NSObject <MNLocationManagerObserver, MNNavigationSessionObserver> {

	id<MNGuidanceLevelUpdaterDelegate> _delegate;
	int _guidanceLevel;
	MNRouteManager* _routeManager;
	int _navigationType;
	GEOComposedRoute* _route;
	MNLocation* _lastLocation;

}

@property (assign,setter=_setGuidanceLevel:,nonatomic) int guidanceLevel;                     //@synthesize guidanceLevel=_guidanceLevel - In the implementation block
@property (assign,nonatomic,__weak) id<MNGuidanceLevelUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startUpdating;
-(void)stopUpdating;
-(void)setDelegate:(id<MNGuidanceLevelUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGuidanceLevelUpdaterDelegate>)delegate;
-(void)_update;
-(int)guidanceLevel;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 ;
-(id)initWithRouteManager:(id)arg1 ;
-(void)updateWithRoutePlanningDetails:(id)arg1 ;
-(void)_setGuidanceLevel:(int)arg1 ;
-(BOOL)_shouldTrackForLocation;
-(BOOL)_shouldTrackForTime;
@end

