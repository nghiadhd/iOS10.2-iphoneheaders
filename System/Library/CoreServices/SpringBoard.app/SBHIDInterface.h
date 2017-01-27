/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBProximitySensorControlling.h>

@class NSString;

@interface SBHIDInterface : NSObject <SBProximitySensorControlling> {

	BOOL _proximityDetectionEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isProximityDetectionEnabled,nonatomic) BOOL proximityDetectionEnabled; 
+(id)sharedInstance;
-(void)resetProximityCalibration;
-(BOOL)isProximityDetectionEnabled;
-(void)setProximityDetectionEnabled:(BOOL)arg1 ;
-(id)init;
@end

