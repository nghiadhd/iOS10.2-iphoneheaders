/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderWriteSensorDataToFileForDateRange : NSObject <NSSecureCoding> {

	int _dataType;
	double _startTime;
	double _endTime;

}

@property (assign) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (assign) int dataType;                  //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setDataType:(int)arg1 ;
-(int)dataType;
@end

