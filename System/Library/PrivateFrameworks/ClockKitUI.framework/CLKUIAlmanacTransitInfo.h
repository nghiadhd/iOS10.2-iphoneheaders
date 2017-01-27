/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@class NSDate;

@interface CLKUIAlmanacTransitInfo : NSObject {

	NSDate* _day;
	long long _constantSun;
	NSDate* _rise;
	NSDate* _transit;
	NSDate* _set;
	SCD_Struct_CL0 _location;

}

@property (nonatomic,retain) NSDate * day;                         //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL0 location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long constantSun;                //@synthesize constantSun=_constantSun - In the implementation block
@property (nonatomic,retain) NSDate * rise;                        //@synthesize rise=_rise - In the implementation block
@property (nonatomic,retain) NSDate * transit;                     //@synthesize transit=_transit - In the implementation block
@property (nonatomic,retain) NSDate * set;                         //@synthesize set=_set - In the implementation block
+(id)transitInfoForDate:(id)arg1 location:(SCD_Struct_CL0)arg2 ;
+(id)transitInfoForDate:(id)arg1 ;
+(id)transitInfoForDate:(id)arg1 city:(id)arg2 ;
+(id)transitInfoForDate:(id)arg1 location:(SCD_Struct_CL0)arg2 sunAltitude:(double)arg3 ;
+(id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3 ;
-(id)description;
-(NSDate *)set;
-(void)setDay:(NSDate *)arg1 ;
-(SCD_Struct_CL0)location;
-(void)setLocation:(SCD_Struct_CL0)arg1 ;
-(NSDate *)day;
-(NSDate *)rise;
-(NSDate *)transit;
-(void)setTransit:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)setSet:(NSDate *)arg1 ;
-(long long)constantSun;
-(void)setConstantSun:(long long)arg1 ;
-(id)initWithDate:(id)arg1 location:(SCD_Struct_CL0)arg2 ;
-(id)initWithDate:(id)arg1 city:(id)arg2 ;
-(id)initWithDate:(id)arg1 location:(SCD_Struct_CL0)arg2 sunAltitude:(double)arg3 ;
-(id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3 ;
-(void)setRise:(NSDate *)arg1 ;
@end

