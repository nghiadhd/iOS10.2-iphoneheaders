/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTRoutineManagerRegistrant.h>

@class NSPredicate;

@interface RTRoutineManagerRegistrantApplicationPrediction : RTRoutineManagerRegistrant {

	BOOL _registered;
	NSPredicate* _applicationMonitoringPredicate;
	/*^block*/id _predictedApplicationHandler;

}

@property (nonatomic,retain) NSPredicate * applicationMonitoringPredicate;              //@synthesize applicationMonitoringPredicate=_applicationMonitoringPredicate - In the implementation block
@property (nonatomic,copy) id predictedApplicationHandler;                              //@synthesize predictedApplicationHandler=_predictedApplicationHandler - In the implementation block
@property (assign,nonatomic) BOOL registered;                                           //@synthesize registered=_registered - In the implementation block
-(NSPredicate *)applicationMonitoringPredicate;
-(id)predictedApplicationHandler;
-(id)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setApplicationMonitoringPredicate:(NSPredicate *)arg1 ;
-(void)setPredictedApplicationHandler:(id)arg1 ;
-(void)onPredictedApplications:(id)arg1 error:(id)arg2 ;
-(id)stopMonitoringForPredictedApplications;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
@end

