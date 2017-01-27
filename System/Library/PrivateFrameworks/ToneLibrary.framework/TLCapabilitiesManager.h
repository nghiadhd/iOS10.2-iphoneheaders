/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject {

	BOOL _isRingtoneStoreAvailable;
	BOOL _isAlertToneStoreAvailable;
	NSDictionary* _deviceCodeNameSimplicationMapping;

}

@property (getter=isRingtoneStoreAvailable,nonatomic,readonly) BOOL ringtoneStoreAvailable; 
@property (getter=isAlertToneStoreAvailable,nonatomic,readonly) BOOL alertToneStoreAvailable; 
@property (nonatomic,readonly) BOOL hasVibratorCapability; 
@property (nonatomic,readonly) BOOL hasSynchronizedVibrationsCapability; 
@property (nonatomic,readonly) BOOL hasSynchronizedEmbeddedVibrationsCapability; 
@property (nonatomic,readonly) BOOL hasUserGeneratedVibrationsCapability; 
@property (nonatomic,readonly) NSString * deviceCodeName; 
@property (nonatomic,readonly) NSString * simplifiedDeviceCodeName; 
+(id)sharedCapabilitiesManager;
-(id)init;
-(void)dealloc;
-(BOOL)hasVibratorCapability;
-(NSString *)deviceCodeName;
-(NSString *)simplifiedDeviceCodeName;
-(BOOL)hasSynchronizedVibrationsCapability;
-(BOOL)hasSynchronizedEmbeddedVibrationsCapability;
-(void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1 ;
-(void)_checkRingtoneStoreAvailability;
-(BOOL)_hasTelephonyCapability;
-(BOOL)isRingtoneStoreAvailable;
-(BOOL)isAlertToneStoreAvailable;
-(BOOL)hasUserGeneratedVibrationsCapability;
@end

