/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _DKQuery : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)exectuableQueryForQuery:(id)arg1 ;
+(id)queryNotExecutableError;
+(id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithCategoryValue:(id)arg1 ;
+(id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)endDateSortDescriptorAscending:(BOOL)arg1 ;
+(id)predicateForEventsWithIntegerValue:(long long)arg1 ;
+(id)predicateForEventsWithStringValue:(id)arg1 ;
+(id)predicateForEventsWithDoubleValue:(double)arg1 ;
+(id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1 ;
+(id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2 ;
+(id)predicateForEventsWithStreamName:(id)arg1 ;
+(id)predicateForEventsWithStreamNames:(id)arg1 ;
+(id)predicateForEventsWithIdentifierValue:(id)arg1 ;
+(id)predicateForEventsWithQuantityValue:(id)arg1 ;
+(id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2 ;
+(id)predicateForObjectWithUUID:(id)arg1 ;
+(id)predicateForObjectsWithUUIDs:(id)arg1 ;
+(id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)startDateSortDescriptorAscending:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

