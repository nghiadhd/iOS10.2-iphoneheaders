/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLogMsgEventCacheHit, GEOLogMsgEventDirections, GEOLogMsgEventListInteractionSession, GEOLogMsgEventLogFramework, NSMutableArray, GEOLogMsgEventMapLaunch, GEOLogMsgEventMapsWidgetsInteractionSession, GEOLogMsgEventNetwork, GEOLogMsgEventPlaceDataCache, GEOLogMsgEventProactiveSuggestionInteractionSession, GEOLogMsgEventRefineSearchSession, LOGMSGEVENTLogMsgEventRideBookedSession, LOGMSGEVENTLogMsgEventRideBookingSession, GEOLogMsgEventStaleResource, GEOLogMsgEventStateTiming, LOGMSGEVENTLogMsgEventTableBookedSession, LOGMSGEVENTLogMsgEventTableBookingSession, GEOLogMsgEventTelemetric, GEOLogMsgEventTileSetState, GEOLogMsgEventTimeToLeaveHypothesis, GEOLogMsgEventTimeToLeaveInitialTravelTime, GEOLogMsgEventTransitAppLaunch, GEOLogMsgEventUserAction;

@interface GEOLogMsgEvent : PBCodable <NSCopying> {

	GEOLogMsgEventCacheHit* _cacheHitEvent;
	GEOLogMsgEventDirections* _directionsEvent;
	int _eventType;
	GEOLogMsgEventListInteractionSession* _listInteractionSession;
	GEOLogMsgEventLogFramework* _logFrameworkEvent;
	NSMutableArray* _logMsgStates;
	GEOLogMsgEventMapLaunch* _mapLaunchEvent;
	GEOLogMsgEventMapsWidgetsInteractionSession* _mapsWidgetsInteractionSession;
	GEOLogMsgEventNetwork* _networkEvent;
	GEOLogMsgEventPlaceDataCache* _placeDataCacheEvent;
	GEOLogMsgEventProactiveSuggestionInteractionSession* _proactiveSuggestionInteractionSessionEvent;
	GEOLogMsgEventRefineSearchSession* _refineSearchSession;
	LOGMSGEVENTLogMsgEventRideBookedSession* _rideBookedSession;
	LOGMSGEVENTLogMsgEventRideBookingSession* _rideBookingSession;
	GEOLogMsgEventStaleResource* _staleResourceEvent;
	GEOLogMsgEventStateTiming* _stateTimingEvent;
	LOGMSGEVENTLogMsgEventTableBookedSession* _tableBookedSession;
	LOGMSGEVENTLogMsgEventTableBookingSession* _tableBookingSession;
	GEOLogMsgEventTelemetric* _telemetric;
	GEOLogMsgEventTileSetState* _tileSetStateEvent;
	GEOLogMsgEventTimeToLeaveHypothesis* _timeToLeaveHypothesisEvent;
	GEOLogMsgEventTimeToLeaveInitialTravelTime* _timeToLeaveInitialTravelTimeEvent;
	GEOLogMsgEventTransitAppLaunch* _transitAppLaunchEvent;
	GEOLogMsgEventUserAction* _userActionEvent;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,retain) NSMutableArray * logMsgStates;                                                                                 //@synthesize logMsgStates=_logMsgStates - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                                                                                 //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActionEvent; 
@property (nonatomic,retain) GEOLogMsgEventUserAction * userActionEvent;                                                                    //@synthesize userActionEvent=_userActionEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasStateTimingEvent; 
@property (nonatomic,retain) GEOLogMsgEventStateTiming * stateTimingEvent;                                                                  //@synthesize stateTimingEvent=_stateTimingEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTileSetStateEvent; 
@property (nonatomic,retain) GEOLogMsgEventTileSetState * tileSetStateEvent;                                                                //@synthesize tileSetStateEvent=_tileSetStateEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceDataCacheEvent; 
@property (nonatomic,retain) GEOLogMsgEventPlaceDataCache * placeDataCacheEvent;                                                            //@synthesize placeDataCacheEvent=_placeDataCacheEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkEvent; 
@property (nonatomic,retain) GEOLogMsgEventNetwork * networkEvent;                                                                          //@synthesize networkEvent=_networkEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasCacheHitEvent; 
@property (nonatomic,retain) GEOLogMsgEventCacheHit * cacheHitEvent;                                                                        //@synthesize cacheHitEvent=_cacheHitEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsEvent; 
@property (nonatomic,retain) GEOLogMsgEventDirections * directionsEvent;                                                                    //@synthesize directionsEvent=_directionsEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAppLaunchEvent; 
@property (nonatomic,retain) GEOLogMsgEventTransitAppLaunch * transitAppLaunchEvent;                                                        //@synthesize transitAppLaunchEvent=_transitAppLaunchEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeToLeaveHypothesisEvent; 
@property (nonatomic,retain) GEOLogMsgEventTimeToLeaveHypothesis * timeToLeaveHypothesisEvent;                                              //@synthesize timeToLeaveHypothesisEvent=_timeToLeaveHypothesisEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeToLeaveInitialTravelTimeEvent; 
@property (nonatomic,retain) GEOLogMsgEventTimeToLeaveInitialTravelTime * timeToLeaveInitialTravelTimeEvent;                                //@synthesize timeToLeaveInitialTravelTimeEvent=_timeToLeaveInitialTravelTimeEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasLogFrameworkEvent; 
@property (nonatomic,retain) GEOLogMsgEventLogFramework * logFrameworkEvent;                                                                //@synthesize logFrameworkEvent=_logFrameworkEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsWidgetsInteractionSession; 
@property (nonatomic,retain) GEOLogMsgEventMapsWidgetsInteractionSession * mapsWidgetsInteractionSession;                                   //@synthesize mapsWidgetsInteractionSession=_mapsWidgetsInteractionSession - In the implementation block
@property (nonatomic,readonly) BOOL hasListInteractionSession; 
@property (nonatomic,retain) GEOLogMsgEventListInteractionSession * listInteractionSession;                                                 //@synthesize listInteractionSession=_listInteractionSession - In the implementation block
@property (nonatomic,readonly) BOOL hasRefineSearchSession; 
@property (nonatomic,retain) GEOLogMsgEventRefineSearchSession * refineSearchSession;                                                       //@synthesize refineSearchSession=_refineSearchSession - In the implementation block
@property (nonatomic,readonly) BOOL hasProactiveSuggestionInteractionSessionEvent; 
@property (nonatomic,retain) GEOLogMsgEventProactiveSuggestionInteractionSession * proactiveSuggestionInteractionSessionEvent;              //@synthesize proactiveSuggestionInteractionSessionEvent=_proactiveSuggestionInteractionSessionEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasMapLaunchEvent; 
@property (nonatomic,retain) GEOLogMsgEventMapLaunch * mapLaunchEvent;                                                                      //@synthesize mapLaunchEvent=_mapLaunchEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasRideBookingSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventRideBookingSession * rideBookingSession;                                                 //@synthesize rideBookingSession=_rideBookingSession - In the implementation block
@property (nonatomic,readonly) BOOL hasRideBookedSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventRideBookedSession * rideBookedSession;                                                   //@synthesize rideBookedSession=_rideBookedSession - In the implementation block
@property (nonatomic,readonly) BOOL hasTableBookingSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventTableBookingSession * tableBookingSession;                                               //@synthesize tableBookingSession=_tableBookingSession - In the implementation block
@property (nonatomic,readonly) BOOL hasTableBookedSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventTableBookedSession * tableBookedSession;                                                 //@synthesize tableBookedSession=_tableBookedSession - In the implementation block
@property (nonatomic,readonly) BOOL hasStaleResourceEvent; 
@property (nonatomic,retain) GEOLogMsgEventStaleResource * staleResourceEvent;                                                              //@synthesize staleResourceEvent=_staleResourceEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTelemetric; 
@property (nonatomic,retain) GEOLogMsgEventTelemetric * telemetric;                                                                         //@synthesize telemetric=_telemetric - In the implementation block
+(Class)logMsgStateType;
+(BOOL)logMsgEventType:(int)arg1 acceptsLogMsgStateType:(int)arg2 ;
+(void)_initializeAllowedSessionTypes;
+(void)_initializeAcceptedLogMsgStateTypes;
+(id)acceptedLogMsgStates;
+(id)acceptedLogMsgStatesForLogMsgEventType:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)eventType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)logMsgStateOfType:(int)arg1 ;
-(NSMutableArray *)logMsgStates;
-(void)clearLogMsgStates;
-(void)addLogMsgState:(id)arg1 ;
-(unsigned long long)logMsgStatesCount;
-(id)logMsgStateAtIndex:(unsigned long long)arg1 ;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(BOOL)hasUserActionEvent;
-(BOOL)hasStateTimingEvent;
-(BOOL)hasTileSetStateEvent;
-(BOOL)hasPlaceDataCacheEvent;
-(BOOL)hasNetworkEvent;
-(BOOL)hasCacheHitEvent;
-(BOOL)hasDirectionsEvent;
-(BOOL)hasTransitAppLaunchEvent;
-(BOOL)hasTimeToLeaveHypothesisEvent;
-(BOOL)hasTimeToLeaveInitialTravelTimeEvent;
-(BOOL)hasLogFrameworkEvent;
-(BOOL)hasMapsWidgetsInteractionSession;
-(BOOL)hasListInteractionSession;
-(BOOL)hasRefineSearchSession;
-(BOOL)hasProactiveSuggestionInteractionSessionEvent;
-(BOOL)hasMapLaunchEvent;
-(BOOL)hasRideBookingSession;
-(BOOL)hasRideBookedSession;
-(BOOL)hasTableBookingSession;
-(BOOL)hasTableBookedSession;
-(BOOL)hasStaleResourceEvent;
-(BOOL)hasTelemetric;
-(void)setLogMsgStates:(NSMutableArray *)arg1 ;
-(GEOLogMsgEventUserAction *)userActionEvent;
-(void)setUserActionEvent:(GEOLogMsgEventUserAction *)arg1 ;
-(GEOLogMsgEventStateTiming *)stateTimingEvent;
-(void)setStateTimingEvent:(GEOLogMsgEventStateTiming *)arg1 ;
-(GEOLogMsgEventTileSetState *)tileSetStateEvent;
-(void)setTileSetStateEvent:(GEOLogMsgEventTileSetState *)arg1 ;
-(GEOLogMsgEventPlaceDataCache *)placeDataCacheEvent;
-(void)setPlaceDataCacheEvent:(GEOLogMsgEventPlaceDataCache *)arg1 ;
-(GEOLogMsgEventNetwork *)networkEvent;
-(void)setNetworkEvent:(GEOLogMsgEventNetwork *)arg1 ;
-(GEOLogMsgEventCacheHit *)cacheHitEvent;
-(void)setCacheHitEvent:(GEOLogMsgEventCacheHit *)arg1 ;
-(GEOLogMsgEventDirections *)directionsEvent;
-(void)setDirectionsEvent:(GEOLogMsgEventDirections *)arg1 ;
-(GEOLogMsgEventTransitAppLaunch *)transitAppLaunchEvent;
-(void)setTransitAppLaunchEvent:(GEOLogMsgEventTransitAppLaunch *)arg1 ;
-(GEOLogMsgEventTimeToLeaveHypothesis *)timeToLeaveHypothesisEvent;
-(void)setTimeToLeaveHypothesisEvent:(GEOLogMsgEventTimeToLeaveHypothesis *)arg1 ;
-(GEOLogMsgEventTimeToLeaveInitialTravelTime *)timeToLeaveInitialTravelTimeEvent;
-(void)setTimeToLeaveInitialTravelTimeEvent:(GEOLogMsgEventTimeToLeaveInitialTravelTime *)arg1 ;
-(GEOLogMsgEventLogFramework *)logFrameworkEvent;
-(void)setLogFrameworkEvent:(GEOLogMsgEventLogFramework *)arg1 ;
-(GEOLogMsgEventMapsWidgetsInteractionSession *)mapsWidgetsInteractionSession;
-(void)setMapsWidgetsInteractionSession:(GEOLogMsgEventMapsWidgetsInteractionSession *)arg1 ;
-(GEOLogMsgEventListInteractionSession *)listInteractionSession;
-(void)setListInteractionSession:(GEOLogMsgEventListInteractionSession *)arg1 ;
-(GEOLogMsgEventRefineSearchSession *)refineSearchSession;
-(void)setRefineSearchSession:(GEOLogMsgEventRefineSearchSession *)arg1 ;
-(GEOLogMsgEventProactiveSuggestionInteractionSession *)proactiveSuggestionInteractionSessionEvent;
-(void)setProactiveSuggestionInteractionSessionEvent:(GEOLogMsgEventProactiveSuggestionInteractionSession *)arg1 ;
-(GEOLogMsgEventMapLaunch *)mapLaunchEvent;
-(void)setMapLaunchEvent:(GEOLogMsgEventMapLaunch *)arg1 ;
-(LOGMSGEVENTLogMsgEventRideBookingSession *)rideBookingSession;
-(void)setRideBookingSession:(LOGMSGEVENTLogMsgEventRideBookingSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventRideBookedSession *)rideBookedSession;
-(void)setRideBookedSession:(LOGMSGEVENTLogMsgEventRideBookedSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventTableBookingSession *)tableBookingSession;
-(void)setTableBookingSession:(LOGMSGEVENTLogMsgEventTableBookingSession *)arg1 ;
-(LOGMSGEVENTLogMsgEventTableBookedSession *)tableBookedSession;
-(void)setTableBookedSession:(LOGMSGEVENTLogMsgEventTableBookedSession *)arg1 ;
-(GEOLogMsgEventStaleResource *)staleResourceEvent;
-(void)setStaleResourceEvent:(GEOLogMsgEventStaleResource *)arg1 ;
-(GEOLogMsgEventTelemetric *)telemetric;
-(void)setTelemetric:(GEOLogMsgEventTelemetric *)arg1 ;
-(BOOL)acceptsLogMsgStateType:(int)arg1 ;
-(unsigned long long)allowedSessionType;
-(BOOL)isNavigationSessionAllowed;
-(BOOL)isFullCarPlayStateAllowed;
-(unsigned long long)numberOfLogMsgStatesOfType:(int)arg1 ;
-(unsigned long long)numberOfLogMsgStatesOfType:(int)arg1 stateOrigin:(id)arg2 ;
-(id)logMsgStateOfType:(int)arg1 stateOrigin:(id)arg2 ;
@end

