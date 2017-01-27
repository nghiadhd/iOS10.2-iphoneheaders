/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMDeviceOrientationManager : NSObject {

	id _internal;

}
+(void)initialize;
+(void)dummySelector:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)deallocPrivate;
-(void)onDeviceOrientation:(const Sample*)arg1 ;
-(void)onMotionPreferencesUpdated;
-(void)stopDeviceOrientationUpdatesPrivate;
-(void)setDeviceOrientationCallbackModePrivate:(int)arg1 ;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isDeviceOrientationAvailable;
-(void)signalAndReleaseSemaphoreIfNecessaryPrivate;
-(void)updateAggregateDictionaryPrivate;
-(BOOL)orientationNotificationsDisabled;
-(id)stringForOrientation:(int)arg1 ;
-(BOOL)isDeviceOrientationActive;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopDeviceOrientationUpdates;
-(id)deviceOrientationBlocking;
-(void)onNotification:(id)arg1 ;
-(id)initPrivate;
@end

