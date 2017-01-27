/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface FCDateRange : NSObject <NSCopying, NSCoding> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * earlierDate; 
@property (nonatomic,readonly) NSDate * laterDate; 
@property (nonatomic,readonly) BOOL isFinite; 
@property (nonatomic,readonly) BOOL isFromInfinity; 
@property (nonatomic,readonly) BOOL isToInfinity; 
@property (nonatomic,readonly) double timeInterval; 
@property (nonatomic,readonly) double absoluteTimeInterval; 
@property (nonatomic,readonly) unsigned long long minMillisecondsTimeIntervalSince1970; 
@property (nonatomic,readonly) unsigned long long maxMillisecondsTimeIntervalSince1970; 
+(id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timeInterval;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)isFinite;
-(BOOL)isToInfinity;
-(BOOL)isFromInfinity;
-(BOOL)containsDate:(id)arg1 ;
-(id)intersectionWithDateRange:(id)arg1 ;
-(BOOL)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2 ;
-(BOOL)startsLaterThanDateRange:(id)arg1 ;
-(NSDate *)earlierDate;
-(NSDate *)laterDate;
-(id)initWithStartDate:(id)arg1 timeInterval:(double)arg2 ;
-(double)absoluteTimeInterval;
-(unsigned long long)minMillisecondsTimeIntervalSince1970;
-(unsigned long long)maxMillisecondsTimeIntervalSince1970;
-(id)slicesWithTimeInterval:(double)arg1 ;
-(id)sliceForDate:(id)arg1 withInterval:(double)arg2 ;
-(long long)sliceIndexForDate:(id)arg1 withInterval:(double)arg2 ;
@end
