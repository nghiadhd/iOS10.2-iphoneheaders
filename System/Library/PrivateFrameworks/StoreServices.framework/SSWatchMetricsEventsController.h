/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSWatchMetricsEventTable, NSObject;

@interface SSWatchMetricsEventsController : NSObject {

	SSWatchMetricsEventTable* _table;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) SSWatchMetricsEventTable * table; 
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue; 
+(id)_numberFormatter;
-(BOOL)insertWatchMetricEvent:(id)arg1 error:(id*)arg2 ;
-(id)unreportedEventsSinceTimestamp:(long long)arg1 ;
-(void)discardUnreportableEvents;
-(void)markAsCompleted:(id)arg1 ;
-(void)markAsFailed:(id)arg1 ;
-(SSWatchMetricsEventTable *)table;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

