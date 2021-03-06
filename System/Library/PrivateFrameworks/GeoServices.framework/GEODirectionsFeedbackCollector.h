/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject {

	GEODirectionsFeedback* _currentDirectionsFeedback;
	GEODirectionsFeedbackLogMessage* _currentFeedbackLogMessage;
	NSMutableSet* _routeIDs;
	double _currentDirectionsNavigationStartTime;
	double _currentDirectionsNavigationEndTime;

}

@property (nonatomic,retain) GEODirectionsFeedbackLogMessage * currentFeedbackLogMessage;              //@synthesize currentFeedbackLogMessage=_currentFeedbackLogMessage - In the implementation block
@property (nonatomic,retain) GEODirectionsFeedback * currentDirectionsFeedback;                        //@synthesize currentDirectionsFeedback=_currentDirectionsFeedback - In the implementation block
@property (nonatomic,retain) NSMutableSet * routeIDs;                                                  //@synthesize routeIDs=_routeIDs - In the implementation block
-(void)dealloc;
-(id)description;
-(void)reset;
-(void)_updateFeedbackSessionWithResponseID:(id)arg1 ;
-(void)startFeedbackSession;
-(void)startFeedbackSessionForResponseID:(id)arg1 ;
-(void)setupFeedbackSessionWithResponseID:(id)arg1 ;
-(void)addRouteID:(id)arg1 routeIndex:(unsigned)arg2 stepID:(unsigned)arg3 completeStep:(BOOL)arg4 ;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)setFinalLocation:(id)arg1 asArrival:(BOOL)arg2 ;
-(void)addAlightNotificationFeedback:(id)arg1 ;
-(void)setAudioFeedback:(GEONavigationAudioFeedback*)arg1 ;
-(void)endFeedbackSession;
-(GEODirectionsFeedbackLogMessage *)currentFeedbackLogMessage;
-(void)setCurrentFeedbackLogMessage:(GEODirectionsFeedbackLogMessage *)arg1 ;
-(GEODirectionsFeedback *)currentDirectionsFeedback;
-(void)setCurrentDirectionsFeedback:(GEODirectionsFeedback *)arg1 ;
-(NSMutableSet *)routeIDs;
-(void)setRouteIDs:(NSMutableSet *)arg1 ;
@end

