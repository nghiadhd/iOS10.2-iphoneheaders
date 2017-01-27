/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSDateFormatter, NSArray, NSDate, NSTimeZone;

@interface CLKTimeIntervalTextProvider : CLKTextProvider {

	NSDateFormatter* _dateFormatter;
	NSArray* _fallbackSequence;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)finalizedTextProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 ;
+(id)textProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 ;
+(id)textProviderWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)finalizedTextProviderWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSTimeZone *)timeZone;
-(void)_validate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_fallbackSequence;
-(id)_attributedTextForSequenceItem:(long long)arg1 style:(id)arg2 ;
-(NSRange)_rangeOfAnnontatedTime:(id)arg1 matchingPattern:(/*^block*/id)arg2 ;
-(id)_timeIntervalFullAttributedTextWithStyle:(id)arg1 ;
-(id)_timeIntervalDropMinutesAttributedTextWithStyle:(id)arg1 ;
-(id)_startTimeFullAttributedTextWithStyle:(id)arg1 ;
-(id)_startTimeDropMinutesAttributedTextWithStyle:(id)arg1 ;
-(id)_dateIntervalWideAttributedTextWithStyle:(id)arg1 ;
-(id)_dateIntervalNarrowAttributedTextWithStyle:(id)arg1 ;
-(id)_timeIntervalAttributedTextWithStyle:(id)arg1 dropMinutes:(BOOL)arg2 onlyStartDate:(BOOL)arg3 ;
-(id)_dateIntervalAttributedTextWithStyle:(id)arg1 narrow:(BOOL)arg2 ;
-(NSRange)_rangeOfDesignatorInAnnotatedTime:(id)arg1 ;
-(id)_stringByRemovingDesignatorRange:(NSRange)arg1 fromString:(id)arg2 ;
-(NSRange)_rangeOfHoursInAnnotatedTime:(id)arg1 ;
@end

