/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CLLocation, NSDate;

@interface NTKLocationManager : NSObject {

	BOOL _enableLogging;
	CLLocation* _currentLocation;
	CLLocation* _lastLocation;
	CLLocation* _forcedLocation;
	NSDate* _lastLocationUpdateTime;

}

@property (nonatomic,retain) CLLocation * currentLocation;                 //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocation;                    //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,retain) CLLocation * forcedLocation;                  //@synthesize forcedLocation=_forcedLocation - In the implementation block
@property (nonatomic,retain) NSDate * lastLocationUpdateTime;              //@synthesize lastLocationUpdateTime=_lastLocationUpdateTime - In the implementation block
+(id)sharedLocationManager;
+(id)locationFromDefaults;
+(id)fallbackLocation;
+(void)updateLastLocationUpdateTime:(id)arg1 ;
+(id)lastLocationUpdateTimeFromDefaults;
+(void)updateDefaultsLocation:(id)arg1 ;
-(id)init;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
-(NSNumber*)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopLocationUpdatesForToken:(NSNumber*)arg1 ;
-(void)placemarkForCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(id)nameOfCurrentLocation;
-(void)forceLocation:(id)arg1 ;
-(CLLocation *)forcedLocation;
-(void)setForcedLocation:(CLLocation *)arg1 ;
-(NSDate *)lastLocationUpdateTime;
-(void)setLastLocationUpdateTime:(NSDate *)arg1 ;
@end

