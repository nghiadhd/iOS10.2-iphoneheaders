/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABLEMockCDAttributeProtocol;
@class CDSession, CDDevice;

@interface ABLECoreDuetController : NSObject {

	CDSession* _session;
	CDDevice* _device;
	id<ABLEMockCDAttributeProtocol> _batteryLevelAttribute;

}

@property (readonly) CDSession * session;                                              //@synthesize session=_session - In the implementation block
@property (readonly) CDDevice * device;                                                //@synthesize device=_device - In the implementation block
@property (retain) id<ABLEMockCDAttributeProtocol> batteryLevelAttribute;              //@synthesize batteryLevelAttribute=_batteryLevelAttribute - In the implementation block
-(id<ABLEMockCDAttributeProtocol>)batteryLevelAttribute;
-(id)initWithCDSession:(id)arg1 device:(id)arg2 ;
-(id)getBatteryDataForDayFrom:(id)arg1 withRecurrencePeriod:(double)arg2 ;
-(unsigned long long)countBatteryDataForDayDaysAgo:(unsigned long long)arg1 from:(id)arg2 alignedTo:(double)arg3 ;
-(id)makeAllTimeHistoryWindowWithRecurrencePeriod:(double)arg1 ;
-(id)getBatteryDataForMinutes:(unsigned long long)arg1 minutesAgo:(unsigned long long)arg2 from:(id)arg3 alignedTo:(double)arg4 asTable:(BOOL)arg5 ;
-(void)setBatteryLevelAttribute:(id<ABLEMockCDAttributeProtocol>)arg1 ;
-(unsigned long long)countBatteryDataInHistoryWindow:(id)arg1 ;
-(id)getSanitizedBatteryDataForHistoryWindow:(id)arg1 expectingResultsCount:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)makeNanVectorOfLength:(unsigned long long)arg1 ;
-(id)getBatteryDataForDayDaysAgo:(unsigned long long)arg1 from:(id)arg2 withRecurrencePeriod:(double)arg3 ;
-(void)useCoreDuetAttribute;
-(id)initWithMockCDAttribute:(id)arg1 ;
-(id)getBatteryDataForAllTimeWithRecurrencePeriod:(double)arg1 ;
-(id)getBatteryDataForDays:(unsigned long long)arg1 withRecurrencePeriod:(double)arg2 ;
-(id)getBatteryDataForMinutes:(unsigned long long)arg1 withRecurrencePeriod:(double)arg2 ;
-(double)getBatteryLevelForDate:(id)arg1 withWindowInMinutes:(double)arg2 ;
-(CDSession *)session;
-(CDDevice *)device;
@end

