/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CAMCallStatusMonitor : NSObject {

	BOOL __mutexQueue_enabled;
	BOOL __mutexQueue_callActive;
	BOOL __mutexQueue_mustQueryInitialValueForCallActive;
	NSObject*<OS_dispatch_queue> __mutexQueue;

}

@property (assign,setter=_mutexQueue_setEnabled:,getter=_mutexQueue_isEnabled,nonatomic) BOOL _mutexQueue_enabled;                                       //@synthesize _mutexQueue_enabled=__mutexQueue_enabled - In the implementation block
@property (assign,setter=_mutexQueue_setCallActive:,getter=_mutexQueue_isCallActive,nonatomic) BOOL _mutexQueue_callActive;                              //@synthesize _mutexQueue_callActive=__mutexQueue_callActive - In the implementation block
@property (assign,setter=_mutexQueue_setMustQueryInitialValueForCallActive:,nonatomic) BOOL _mutexQueue_mustQueryInitialValueForCallActive;              //@synthesize _mutexQueue_mustQueryInitialValueForCallActive=__mutexQueue_mustQueryInitialValueForCallActive - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _mutexQueue;                                                                                 //@synthesize _mutexQueue=__mutexQueue - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (getter=isCallActive,nonatomic,readonly) BOOL callActive; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isCallActive;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_handleCallIsActiveDidChangeNotification:(id)arg1 ;
-(void)_handleServerConnectionDiedNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_mutexQueue;
-(BOOL)_mutexQueue_isEnabled;
-(void)_mutexQueue_setEnabled:(BOOL)arg1 ;
-(void)_mutexQueue_setMustQueryInitialValueForCallActive:(BOOL)arg1 ;
-(void)_registerForAVSystemControllerNotifications;
-(void)_queryInitialValueForCallActiveIfNecessary;
-(BOOL)_mutexQueue_mustQueryInitialValueForCallActive;
-(void)_queryCallActiveStatusForReason:(id)arg1 ;
-(void)_setCallActive:(BOOL)arg1 ;
-(BOOL)_mutexQueue_isCallActive;
-(void)_mutexQueue_setCallActive:(BOOL)arg1 ;
@end

