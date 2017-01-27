/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSNumber, CMMotionActivityManager, NSOperationQueue, NSDate, AWDServerConnection, NSString;

@interface HDCoachingDiagnosticManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isRunning;
	NSNumber* _waitingToRun;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _activityQueue;
	NSDate* _cachedLastSubmittedDate;
	AWDServerConnection* _serverConnection;
	Class _motionActivityManagerClass;

}

@property (nonatomic,retain) Class motionActivityManagerClass;              //@synthesize motionActivityManagerClass=_motionActivityManagerClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)diagnosticDescription;
-(void)_queue_setWaitingToRun:(BOOL)arg1 ;
-(void)_registerActivity;
-(BOOL)_queue_isWaitingToRun;
-(void)_performCoachingDiagnosticIfWaiting;
-(void)_setNeedsToRunWithCompletion:(/*^block*/id)arg1 ;
-(void)_performCoachingDiagnosticActivity:(id)arg1 ;
-(void)_queue_performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(BOOL)arg2 submitMetrics:(BOOL)arg3 handler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_setLastRunDate:(id)arg1 ;
-(BOOL)_queue_submitMetrics:(id)arg1 ;
-(void)_queue_setLastSubmittedDate:(id)arg1 ;
-(void)_queue_performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_queue_lastSubmittedDate;
-(id)_queue_lastRunDate;
-(id)_queue_computeStatisticsForCoachingEvent:(id)arg1 error:(id*)arg2 ;
-(BOOL)_queue_addHealthCharacteristicsToMetrics:(id)arg1 error:(id*)arg2 ;
-(id)_queue_statisticsCollectionForAnchorDate:(id)arg1 quantityType:(id)arg2 statisticsOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_queue_acquireMotionActivityStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queue_computeWorkoutStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queue_submitMetricForData:(id)arg1 ;
-(BOOL)_queue_submitMetricForActivitySummary:(id)arg1 dateOfBirth:(id)arg2 biologicalSex:(id)arg3 heightSample:(id)arg4 weightSample:(id)arg5 ;
-(void)_queue_applyDataItem:(id)arg1 toMetric:(id)arg2 ;
-(id)_dateComponentsAsAge:(id)arg1 ;
-(void)performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(BOOL)arg2 submitMetrics:(BOOL)arg3 handler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setActivityManager:(id)arg1 ;
-(Class)motionActivityManagerClass;
-(void)setMotionActivityManagerClass:(Class)arg1 ;
@end

