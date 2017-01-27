/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperts/ProactiveExperts-Structs.h>
#import <ProactiveExperts/PEXConnectionsSource.h>
#import <libobjc.A.dylib/PEXConnectionsLocationSource.h>

@protocol OS_dispatch_queue;
@class NSCache, EKEventStore, NSArray, PEXEventCache, NSObject, NSString;

@interface PEXConnectionsCalendarSource : PEXConnectionsSource <PEXConnectionsLocationSource> {

	NSCache* _ekEventsCache;
	EKEventStore* _eventStore;
	NSArray* _calendars;
	BOOL _eventStoreAccessGranted;
	PEXEventCache* _eventCache;
	id _calendarObserver;
	NSObject*<OS_dispatch_queue> _eventLoadingQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)identifier;
+(id)locationLabelFromEKEvent:(id)arg1 ;
+(id)locationValueFromEKEvent:(id)arg1 ;
+(id)locationNameFromEKEvent:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_loadCalendars;
-(void)registerForCalendarNotifications;
-(id)_predicateForRange:(NSRange)arg1 ;
-(id)_filterOutAllDayAndMultiDayEvents:(id)arg1 ;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 category:(unsigned long long)arg6 ;
-(void)requestAccessToEventStore;
-(void)preloadEKEvents;
-(void)setEventStoreAccessGranted:(BOOL)arg1 ;
-(void)clearEKEventCaches;
-(id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2 ;
-(BOOL)isCalendarEventEligibleForLocationPrediction:(id)arg1 ;
-(id)ekEventWithExternalID:(id)arg1 ;
@end

