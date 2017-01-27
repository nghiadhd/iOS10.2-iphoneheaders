/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, NSMutableDictionary, NSUserDefaults;

@interface AppLaunchStatsSBSettings : NSObject <DuetLoggerProtocol> {

	NSObject*<OS_dispatch_queue> aplsSettingsQueue;
	/*^block*/id callbackBlock;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	NSMutableDictionary* settingsBlacklist;
	NSUserDefaults* aplsSBSettingsDefault;

}
-(id)init:(/*^block*/id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)loadSettingsBlacklist;
-(BOOL)isManagedConfigurationSettingOn;
-(BOOL)isAppDisabledInSettingsList:(id)arg1 ;
-(void)saveContext:(id)arg1 ;
@end

