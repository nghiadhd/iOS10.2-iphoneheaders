/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences, NSString;

@interface EKDebugPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double availabilityFreshnessWindow; 
@property (assign,nonatomic) BOOL overrideTravelAdvisoryHypothesis; 
@property (nonatomic,retain) NSString * overriddenTravelAdvisoryHypothesisTransportType; 
@property (assign,nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime; 
@property (assign,nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime; 
@property (assign,nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime; 
@property (assign,nonatomic) BOOL overriddenTravelAdvisoryHypothesisSupportsLiveTraffic; 
@property (nonatomic,retain) NSString * overriddenTravelAdvisoryHypothesisCurrentTrafficDensity; 
@property (nonatomic,retain) NSString * overriddenTravelAdvisoryHypothesisRouteName; 
@property (nonatomic,retain) NSString * overriddenTravelAdvisoryHypothesisTravelState; 
@property (assign,nonatomic) BOOL preventMarkingTravelAdvisoryEntriesAsDismissed; 
@property (assign,nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses; 
@property (assign,nonatomic) BOOL saveGeocodedLocationsInTravelEngine; 
@property (assign,nonatomic) BOOL performAgendaEntryEqualityChecksInTravelEngine; 
@property (assign,nonatomic) BOOL verifyIntegrityOfAvailabilityTimeSearchTimelines; 
@property (assign,nonatomic) BOOL showDepartureDateForTransitTimeToLeave; 
@property (assign,nonatomic) BOOL useAverageETAForTimeToLeave; 
@property (assign,nonatomic) BOOL showVerboseMessagesForTimeToLeave; 
@property (assign,nonatomic) BOOL shouldBypassTravelEngineThrottle; 
+(id)shared;
-(id)init;
-(BOOL)verifyIntegrityOfAvailabilityTimeSearchTimelines;
-(double)availabilityFreshnessWindow;
-(void)setAvailabilityFreshnessWindow:(double)arg1 ;
-(BOOL)saveGeocodedLocationsInTravelEngine;
-(void)setSaveGeocodedLocationsInTravelEngine:(BOOL)arg1 ;
-(BOOL)overrideTravelAdvisoryHypothesis;
-(void)setOverrideTravelAdvisoryHypothesis:(BOOL)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisTransportType;
-(void)setOverriddenTravelAdvisoryHypothesisTransportType:(NSString *)arg1 ;
-(double)overriddenTravelAdvisoryHypothesisConservativeTravelTime;
-(void)setOverriddenTravelAdvisoryHypothesisConservativeTravelTime:(double)arg1 ;
-(double)overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
-(void)setOverriddenTravelAdvisoryHypothesisEstimatedTravelTime:(double)arg1 ;
-(double)overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
-(void)setOverriddenTravelAdvisoryHypothesisAggressiveTravelTime:(double)arg1 ;
-(BOOL)overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
-(void)setOverriddenTravelAdvisoryHypothesisSupportsLiveTraffic:(BOOL)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
-(void)setOverriddenTravelAdvisoryHypothesisCurrentTrafficDensity:(NSString *)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisRouteName;
-(void)setOverriddenTravelAdvisoryHypothesisRouteName:(NSString *)arg1 ;
-(NSString *)overriddenTravelAdvisoryHypothesisTravelState;
-(void)setOverriddenTravelAdvisoryHypothesisTravelState:(NSString *)arg1 ;
-(BOOL)preventMarkingTravelAdvisoryEntriesAsDismissed;
-(void)setPreventMarkingTravelAdvisoryEntriesAsDismissed:(BOOL)arg1 ;
-(BOOL)forceDisplayOfNewTravelAdvisoryHypotheses;
-(void)setForceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg1 ;
-(BOOL)performAgendaEntryEqualityChecksInTravelEngine;
-(void)setPerformAgendaEntryEqualityChecksInTravelEngine:(BOOL)arg1 ;
-(void)setVerifyIntegrityOfAvailabilityTimeSearchTimelines:(BOOL)arg1 ;
-(BOOL)showDepartureDateForTransitTimeToLeave;
-(void)setShowDepartureDateForTransitTimeToLeave:(BOOL)arg1 ;
-(BOOL)useAverageETAForTimeToLeave;
-(void)setUseAverageETAForTimeToLeave:(BOOL)arg1 ;
-(BOOL)showVerboseMessagesForTimeToLeave;
-(void)setShowVerboseMessagesForTimeToLeave:(BOOL)arg1 ;
-(BOOL)shouldBypassTravelEngineThrottle;
-(void)setShouldBypassTravelEngineThrottle:(BOOL)arg1 ;
@end

