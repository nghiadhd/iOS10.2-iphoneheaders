/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding> {

	double _t0;
	float _values[8];

}

@property (nonatomic,readonly) float lastMinute; 
@property (nonatomic,readonly) float lastHour; 
@property (nonatomic,readonly) float lastDay; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)clear;
-(void)updateForTime:(double)arg1 ;
-(float)availableBudgetWithDefaults:(id)arg1 ;
-(double)nextDateWithBudgetWithDefaults:(id)arg1 ;
-(id)debugDescriptionWithDefaults:(id)arg1 ;
-(float)lastDay;
-(double)_timeToLoseAmount:(float)arg1 count:(int)arg2 ;
-(float)lastHour;
-(float)lastMinute;
-(void)consume:(float)arg1 ;
@end

