/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol MMCSOperationStateTimeRange <NSObject>
@property (readonly) unsigned long long operationState; 
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (readonly) double absoluteStart; 
@property (readonly) double absoluteStop; 
@required
-(double)duration;
-(NSDate *)startDate;
-(unsigned long long)operationState;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1;
-(long long)compareStopTime:(id)arg1;

@end

