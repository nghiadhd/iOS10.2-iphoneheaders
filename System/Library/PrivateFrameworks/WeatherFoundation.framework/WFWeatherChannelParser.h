/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFForecastDataParser.h>
#import <libobjc.A.dylib/WFAirQualityDataParser.h>

@class NSCalendar, WFTemperature, NSString;

@interface WFWeatherChannelParser : WFForecastDataParser <WFAirQualityDataParser> {

	NSCalendar* _calendar;
	WFTemperature* _todayHighTemperature;
	WFTemperature* _todayLowTemperature;

}

@property (nonatomic,retain) NSCalendar * calendar;                             //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) WFTemperature * todayHighTemperature;              //@synthesize todayHighTemperature=_todayHighTemperature - In the implementation block
@property (nonatomic,retain) WFTemperature * todayLowTemperature;               //@synthesize todayLowTemperature=_todayLowTemperature - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id*)arg4 ;
+(unsigned long long)conditionFromWeatherChannelCode:(id)arg1 ;
+(unsigned long long)expectedDailyForecastCount;
+(unsigned long long)expectedHourlyForecastCount;
+(unsigned long long)pressureTrendFromWeatherChannelCode:(id)arg1 ;
+(id)componentsForCurrentForecast;
+(id)componentsForHourlyForecasts;
+(id)componentsForDailyForecasts;
-(id)init;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(id)parseForecastData:(id)arg1 date:(id)arg2 error:(id*)arg3 ;
-(id)parseDailyForecasts:(id)arg1 date:(id)arg2 ;
-(id)parseHourlyForecasts:(id)arg1 date:(id)arg2 ;
-(id)parseCurrentCondition:(id)arg1 ;
-(id)dateComponentsForEpochDateNumber:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(void)setTodayHighTemperature:(WFTemperature *)arg1 ;
-(void)setTodayLowTemperature:(WFTemperature *)arg1 ;
-(void)parseCommonComponents:(id)arg1 data:(id)arg2 ;
-(WFTemperature *)todayHighTemperature;
-(WFTemperature *)todayLowTemperature;
@end

