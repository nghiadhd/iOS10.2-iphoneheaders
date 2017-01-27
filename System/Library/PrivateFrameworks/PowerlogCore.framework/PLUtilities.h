/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PowerlogCore/PowerlogCore-Structs.h>
@interface PLUtilities : NSObject
+(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
+(id)workQueue;
+(BOOL)isPowerlogHelperd;
+(BOOL)isPingPongChargingWith:(BOOL)arg1 andBatteryLevelPercent:(double)arg2 ;
+(id)getIdentifierFromEntry:(id)arg1 ;
+(id)JSONSanitizeDictionary:(id)arg1 ;
+(id)bundleIDFromPid:(int)arg1 ;
+(id)cameraTypeString;
+(id)powerModelForOperatorName:(id)arg1 ;
+(id)torchTypeString;
+(double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2 ;
+(BOOL)isTaskMode;
+(int)kPLDeviceClass;
+(id)workQueueForClass:(Class)arg1 ;
+(BOOL)isBasebandClass:(int)arg1 ;
+(int)kPLBasebandClassOfDevice;
+(BOOL)isiPad;
+(BOOL)isiPhone;
+(BOOL)isIPod;
+(BOOL)internalBuild;
+(id)deviceBootTime;
+(BOOL)isWiFiClass:(int)arg1 ;
+(int)kPLSoCClassOfDevice;
+(id)dateFromTimeval:(timeval)arg1 ;
+(double)secondsFromMachTime:(unsigned long long)arg1 ;
+(BOOL)isVrrSupported;
+(BOOL)isDeviceClass:(int)arg1 ;
+(BOOL)isSoCClass:(int)arg1 ;
+(BOOL)isEduMode;
+(BOOL)isOrb;
+(BOOL)isHSupported;
+(int)kPLDisplayClassOfDevice;
+(BOOL)hasSmartConnector;
+(id)workQueueForKey:(id)arg1 ;
+(BOOL)internalOrSeedBuild;
+(int)kPLAudioSpeakerClassOfDevice;
+(BOOL)hasBaseband;
+(id)MavRevStringQuery;
+(id)processNameForPid:(int)arg1 ;
+(BOOL)hasNfc;
+(double)defaultBatteryEnergyCapacity;
+(BOOL)alsCurveHigherThanDefault;
+(int)compressWithSource:(_sFILE*)arg1 withDestination:(_sFILE*)arg2 withLevel:(int)arg3 ;
+(void)exitWithReason:(short)arg1 ;
+(id)allSubClassesForClass:(Class)arg1 ;
+(BOOL)nonUIBuild;
+(BOOL)appAnalyticsEnabled;
+(void)refreshBUI;
+(BOOL)isGPSClass:(int)arg1 ;
+(id)bundleIDFromURL:(id)arg1 ;
+(BOOL)isWatch;
+(id)runningAsUser;
+(void)setMobileOwnerForFile:(id)arg1 ;
+(void)_deallocatePortArray:(unsigned*)arg1 withCount:(unsigned)arg2 ;
+(id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2 ;
+(short)canLogMode:(id)arg1 fullMode:(BOOL)arg2 ;
+(id)kPLDeviceMap;
+(id)kPLPlatformAttributes;
+(id)kPLDeviceClassName;
+(int)kPLWiFiClassOfDevice;
+(int)kPLCameraClassOfDevice;
+(int)kPLTorchClassOfDevice;
+(int)kPLGPSClassOfDevice;
+(id)valueForMobileGestaltCapability:(id)arg1 ;
+(id)containerPath;
+(BOOL)createAndChownDirectory:(id)arg1 ;
+(id)launchdNameToProcessName:(id)arg1 ;
+(BOOL)gasGaugeEnabled;
+(BOOL)runningAsMobileUser;
+(unsigned long long)dispatchTimeInSeconds:(double)arg1 ;
+(void)dispatchSyncWithoutDeadlockOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(unsigned long long)pidForName:(id)arg1 ;
+(id)hashString:(id)arg1 ;
+(BOOL)shouldLogForEntryKey:(id)arg1 ;
+(short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3 ;
+(BOOL)isDeviceClassName:(id)arg1 ;
+(BOOL)isDisplayClass:(int)arg1 ;
+(BOOL)isAudioSpeakerClass:(int)arg1 ;
+(BOOL)isCameraClass:(int)arg1 ;
+(BOOL)isTorchClass:(int)arg1 ;
+(BOOL)isValidString:(id)arg1 ;
+(BOOL)isMav4;
+(BOOL)isMav2;
+(BOOL)isMav1;
+(int)getCameraTypeOfDevice;
+(id)shortUUIDString;
+(id)extractDateStringAndUUIDStringFromFilePath:(id)arg1 ;
+(BOOL)isIpad;
+(void)exitWithReasonSync:(short)arg1 ;
+(BOOL)is64Bit;
+(BOOL)isSiriEnabled;
+(BOOL)isHeySiriEnabled;
@end

