/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PLAccountingRange : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double length; 
+(id)rangeWithStartDate:(id)arg1 withEndDate:(id)arg2 ;
+(id)emptyRange;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)length;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)intersect:(id)arg1 ;
-(BOOL)overlaps:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(BOOL)containsDate:(id)arg1 ;
@end

