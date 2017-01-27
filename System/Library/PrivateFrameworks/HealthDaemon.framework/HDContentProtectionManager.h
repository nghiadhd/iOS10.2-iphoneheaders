/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject> {

	int _contentProtectionState;
	int _shouldIgnoreUnlockedState;
	int _unlockedSinceBoot;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _observationQueue;
	NSMapTable* _observers;
	double _beganObservingTime;
	double _lastNotificationTime;
	double _lastRecheckTime;

}

@property (assign,nonatomic) BOOL shouldIgnoreUnlockedState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isProtectedDataAvailableWithState:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isProtectedDataAvailable;
-(BOOL)deviceUnlockedSinceBoot;
-(id)diagnosticDescription;
-(long long)observedState;
-(void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2 ;
-(void)recheckContentProtectionState;
-(void)removeContentProtectionObserver:(id)arg1 ;
-(id)initWithNotifications:(BOOL)arg1 initialState:(long long)arg2 unlockedSinceBoot:(BOOL)arg3 ;
-(long long)_keyBagLockState;
-(void)_observationQueue_adjustContentProtectionStateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreUnlockedState;
-(void)setContentProtectionState:(long long)arg1 ;
-(void)setShouldIgnoreUnlockedState:(BOOL)arg1 ;
@end

