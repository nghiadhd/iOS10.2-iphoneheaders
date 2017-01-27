/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject {

	GEOLocationShifter* _locationShifter;

}

@property (getter=isLocationShiftEnabled,nonatomic,readonly) BOOL locationShiftEnabled; 
+(BOOL)isLocationShiftRequiredForLocation:(id)arg1 ;
-(id)init;
-(BOOL)isLocationShiftEnabled;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 withShiftRequestBlock:(/*^block*/id)arg3 ;
@end

