/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, NSDate, NSURL;

@interface SBBestAppSuggestion : NSObject

@property (copy,readonly) NSUUID * uniqueIdentifier; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (copy,readonly) NSString * activityType; 
@property (copy,readonly) NSDate * lastUpdateTime; 
@property (copy,readonly) NSString * originatingDeviceIdentifier; 
@property (copy,readonly) NSString * originatingDeviceName; 
@property (copy,readonly) NSString * originatingDeviceType; 
@property (copy,readonly) NSString * originatingBundleIdentifier; 
@property (copy,readonly) NSString * suggestedLocationName; 
@property (copy,readonly) NSURL * launchURL; 
-(BOOL)isCallContinuitySuggestion;
-(BOOL)isEligibleForLockScreen;
-(BOOL)isSiriSuggestion;
-(BOOL)isArrivedAtHomePrediction;
-(BOOL)isArrivedAtWorkPrediction;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isLocationPredictionFromSource:(unsigned long long)arg1 ;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isFirstWakePrediction;
-(BOOL)isCarPlayPrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isLocationPredictionOfType:(unsigned long long)arg1 ;
-(NSString *)suggestedLocationName;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(BOOL)launchURLRequiresInboxCopy;
-(BOOL)isBluetoothAudioPrediction;
-(NSString *)originatingDeviceIdentifier;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(NSUUID *)uniqueIdentifier;
-(NSString *)originatingDeviceType;
-(NSString *)originatingDeviceName;
-(NSDate *)lastUpdateTime;
-(NSURL *)launchURL;
-(BOOL)isPrediction;
-(NSString *)originatingBundleIdentifier;
@end

