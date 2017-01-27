/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HKCategorySample;

@interface HDCoachingDiagnosticData : NSObject {

	NSArray* _items;
	HKCategorySample* _coachingEventSample;

}

@property (nonatomic,readonly) NSArray * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) HKCategorySample * coachingEventSample;              //@synthesize coachingEventSample=_coachingEventSample - In the implementation block
-(id)init;
-(NSArray *)items;
-(id)itemForInterval:(unsigned long long)arg1 future:(BOOL)arg2 ;
-(HKCategorySample *)coachingEventSample;
-(void)setCoachingEventSample:(HKCategorySample *)arg1 ;
@end

