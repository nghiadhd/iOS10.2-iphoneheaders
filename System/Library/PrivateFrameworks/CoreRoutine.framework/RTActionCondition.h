/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocationOfInterest, NSDate, NSString;

@interface RTActionCondition : NSObject <NSSecureCoding> {

	RTLocationOfInterest* _locationOfInterest;
	long long _locationOfInterestState;
	NSDate* _date;
	NSString* _depiction;

}

@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (nonatomic,readonly) long long locationOfInterestState;                      //@synthesize locationOfInterestState=_locationOfInterestState - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * depiction;                                   //@synthesize depiction=_depiction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)locationOfInterestStateToString:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(long long)locationOfInterestState;
-(NSString *)depiction;
-(RTLocationOfInterest *)locationOfInterest;
-(id)initWithLoi:(id)arg1 loiState:(long long)arg2 date:(id)arg3 depiction:(id)arg4 ;
@end

