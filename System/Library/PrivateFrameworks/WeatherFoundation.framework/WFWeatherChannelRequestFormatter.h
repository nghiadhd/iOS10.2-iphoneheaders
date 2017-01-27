/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFForecastRequestFormatter.h>
#import <libobjc.A.dylib/WFAirQualityRequestFormatter.h>

@class NSString;

@interface WFWeatherChannelRequestFormatter : NSObject <WFForecastRequestFormatter, WFAirQualityRequestFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostURLForService;
+(id)forecastRequestForLocation:(id)arg1 date:(id)arg2 ;
+(id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 error:(id*)arg3 ;
@end
