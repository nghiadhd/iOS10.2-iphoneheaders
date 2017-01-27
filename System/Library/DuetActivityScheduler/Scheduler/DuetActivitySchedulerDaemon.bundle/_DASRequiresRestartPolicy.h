/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicy.h>

@class NSString, _CDContextualKeyPath, NSArray, NSDate, _CDDateRange;

@interface _DASRequiresRestartPolicy : NSObject <_DASActivityPolicy> {

	NSString* _policyName;
	_CDContextualKeyPath* _deviceAssertionsHeld;
	_CDContextualKeyPath* _inUseStatus;
	_CDContextualKeyPath* _nextWakeRequest;
	NSArray* _triggers;
	NSDate* _lastCacheDate;
	_CDDateRange* _deviceRestartPeriod1;
	_CDDateRange* _deviceRestartPeriod2;
	double _minDurationAfterLastUserInteraction;
	double _minDurationBeforeNextScheduledWake;

}

@property (nonatomic,retain) NSString * policyName;                                    //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * deviceAssertionsHeld;              //@synthesize deviceAssertionsHeld=_deviceAssertionsHeld - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * inUseStatus;                       //@synthesize inUseStatus=_inUseStatus - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * nextWakeRequest;                   //@synthesize nextWakeRequest=_nextWakeRequest - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                       //@synthesize triggers=_triggers - In the implementation block
@property (retain) NSDate * lastCacheDate;                                             //@synthesize lastCacheDate=_lastCacheDate - In the implementation block
@property (nonatomic,retain) _CDDateRange * deviceRestartPeriod1;                      //@synthesize deviceRestartPeriod1=_deviceRestartPeriod1 - In the implementation block
@property (nonatomic,retain) _CDDateRange * deviceRestartPeriod2;                      //@synthesize deviceRestartPeriod2=_deviceRestartPeriod2 - In the implementation block
@property (assign,nonatomic) double minDurationAfterLastUserInteraction;               //@synthesize minDurationAfterLastUserInteraction=_minDurationAfterLastUserInteraction - In the implementation block
@property (assign,nonatomic) double minDurationBeforeNextScheduledWake;                //@synthesize minDurationBeforeNextScheduledWake=_minDurationBeforeNextScheduledWake - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(NSDate *)lastCacheDate;
-(void)setPolicyName:(NSString *)arg1 ;
-(void)setInUseStatus:(_CDContextualKeyPath *)arg1 ;
-(NSString *)policyName;
-(id)initializeTriggers;
-(BOOL)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(BOOL)appliesToActivity:(id)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(void)setLastCacheDate:(NSDate *)arg1 ;
-(_CDContextualKeyPath *)inUseStatus;
-(_CDDateRange *)deviceRestartPeriod1;
-(void)setDeviceRestartPeriod1:(_CDDateRange *)arg1 ;
-(double)minDurationBeforeNextScheduledWake;
-(void)setMinDurationBeforeNextScheduledWake:(double)arg1 ;
-(void)setDeviceRestartPeriod2:(_CDDateRange *)arg1 ;
-(_CDDateRange *)deviceRestartPeriod2;
-(id)defaultDeviceRestartDateRangeWithDate:(id)arg1 ;
-(_CDContextualKeyPath *)nextWakeRequest;
-(double)minDurationAfterLastUserInteraction;
-(void)setMinDurationAfterLastUserInteraction:(double)arg1 ;
-(_CDContextualKeyPath *)deviceAssertionsHeld;
-(void)setNextWakeRequest:(_CDContextualKeyPath *)arg1 ;
-(void)setDeviceAssertionsHeld:(_CDContextualKeyPath *)arg1 ;
-(id)init;
-(BOOL)cacheSleepPeriod:(id)arg1 end:(id)arg2 period1:(id*)arg3 period2:(id*)arg4 ;
-(void)getDeviceRestartForecast;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

