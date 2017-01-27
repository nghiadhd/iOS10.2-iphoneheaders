/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSDateComponents;

@interface HKCurrentActivityCacheQuery : HKQuery {

	NSDateComponents* _statisticsIntervalComponents;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
+(Class)_queryServerDataObjectClass;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_validate;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 statisticsIntervalComponents:(id)arg2 ;
-(void)_queue_deliverError:(id)arg1 ;
-(void)deliverCurrentActivityCache:(id)arg1 moveStatistics:(id)arg2 exerciseStatistics:(id)arg3 standHoursInfo:(id)arg4 queryUUID:(id)arg5 ;
@end

