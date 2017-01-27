/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSError;

@interface HMDLogEvent : NSObject {

	BOOL _submitted;
	NSUUID* _eventType;
	NSError* _eventError;
	double _startTime;
	double _endTime;

}

@property (assign,getter=isSubmitted,nonatomic) BOOL submitted;              //@synthesize submitted=_submitted - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                 //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSUUID * eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,retain) NSError * eventError;                           //@synthesize eventError=_eventError - In the implementation block
@property (readonly) double durationInMilliseconds; 
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(NSUUID *)eventType;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(id)initWithEventType:(id)arg1 ;
-(BOOL)isSubmitted;
-(void)setSubmitted:(BOOL)arg1 ;
-(void)setEventError:(NSError *)arg1 ;
-(void)submitAtTime:(double)arg1 error:(id)arg2 ;
-(double)durationInMilliseconds;
-(NSError *)eventError;
@end

