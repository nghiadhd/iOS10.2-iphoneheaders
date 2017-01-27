/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	BOOL _inBackground;
	BOOL _active;
	BOOL _lastOccludedState;
	unsigned long long _observerCount;
	BOOL _forceBackboardServicesMonitoring;

}

@property (assign,nonatomic) BOOL forceBackboardServicesMonitoring;                  //@synthesize forceBackboardServicesMonitoring=_forceBackboardServicesMonitoring - In the implementation block
@property (getter=isInBackground,nonatomic,readonly) BOOL inBackground;              //@synthesize inBackground=_inBackground - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                          //@synthesize active=_active - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isActive;
-(void)_resignActive;
-(void)setForceBackboardServicesMonitoring:(BOOL)arg1 ;
-(void)_enterBackground;
-(void)_exitBackground;
-(void)_becomeActive;
-(void)_sceneOcclusionChanged:(id)arg1 ;
-(void)startObserving;
-(BOOL)forceBackboardServicesMonitoring;
-(BOOL)isInBackground;
-(void)stopObserving;
@end

