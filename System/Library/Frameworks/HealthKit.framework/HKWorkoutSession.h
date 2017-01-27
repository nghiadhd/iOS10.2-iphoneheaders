/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKWorkoutSessionDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, HKWorkoutSessionDelegate;
@class NSObject, _HKWorkoutSession, HKWorkoutConfiguration, NSDate, NSString;

@interface HKWorkoutSession : NSObject <_HKWorkoutSessionDelegate, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	id<HKWorkoutSessionDelegate> _delegate;
	_HKWorkoutSession* _privateSession;

}

@property (getter=_privateSession,nonatomic,readonly) _HKWorkoutSession * privateSession;              //@synthesize privateSession=_privateSession - In the implementation block
@property (readonly) unsigned long long activityType; 
@property (readonly) long long locationType; 
@property (copy,readonly) HKWorkoutConfiguration * workoutConfiguration; 
@property (__weak) id<HKWorkoutSessionDelegate> delegate; 
@property (readonly) long long state; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HKWorkoutSessionDelegate>)arg1 ;
-(id<HKWorkoutSessionDelegate>)delegate;
-(long long)state;
-(id)_init;
-(unsigned long long)activityType;
-(long long)locationType;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2 ;
-(id)_privateSession;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4 ;
-(void)workoutSession:(id)arg1 didFailWithError:(id)arg2 ;
-(void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2 ;
@end

