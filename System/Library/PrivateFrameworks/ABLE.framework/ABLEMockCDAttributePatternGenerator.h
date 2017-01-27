/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEModelController.h>
#import <ABLE/ABLEMockCDAttributeProtocol.h>

@class NSArray, NSDate, ABLEMockCDAttribute;

@interface ABLEMockCDAttributePatternGenerator : ABLEModelController <ABLEMockCDAttributeProtocol> {

	id _pattern;
	NSArray* _sampleData;
	NSDate* _sampleEndDate;
	ABLEMockCDAttribute* _databaseData;

}

@property (readonly) ABLEMockCDAttribute * databaseData;              //@synthesize databaseData=_databaseData - In the implementation block
@property (readonly) id pattern;                                      //@synthesize pattern=_pattern - In the implementation block
@property (readonly) NSArray * sampleData;                            //@synthesize sampleData=_sampleData - In the implementation block
@property (readonly) NSDate * sampleEndDate;                          //@synthesize sampleEndDate=_sampleEndDate - In the implementation block
-(NSDate *)sampleEndDate;
-(ABLEMockCDAttribute *)databaseData;
-(id)getSinValueForDate:(id)arg1 withPeriod:(double)arg2 andMin:(double)arg3 andMax:(double)arg4 ;
-(id)getSinValueForDate:(id)arg1 withPeriod:(double)arg2 andMin:(double)arg3 andMax:(double)arg4 andOffsetTime:(double)arg5 ;
-(NSArray *)sampleData;
-(id)initWithPattern:(id)arg1 ;
-(id)pattern;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
@end

