/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _HKActivityStatisticsStandHourInfo : NSObject <NSSecureCoding> {

	double _timeStamp;
	long long _state;

}

@property (assign,nonatomic) double timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) long long state;               //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(id)initWithTimeStamp:(double)arg1 state:(long long)arg2 ;
@end

