/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NPSManager, NSObject;

@interface NTKClockStatusBarSettings : NSObject {

	NPSManager* _npsManager;
	BOOL _notificationsIndicatorEnabled;
	NSObject*<OS_dispatch_queue> _prefsQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(BOOL)_isNotificationsIndicatorEnabledInPreferences;
-(BOOL)isNotificationsIndicatorEnabled;
-(void)setNotificationsIndicatorEnabled:(BOOL)arg1 ;
@end

