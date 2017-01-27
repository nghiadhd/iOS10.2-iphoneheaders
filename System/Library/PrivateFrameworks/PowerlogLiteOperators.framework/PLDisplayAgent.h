/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLIOKitOperatorComposition, BrightnessSystemClient, CBAdaptationClient, PLTimer, NSTimer, NSDictionary, NSDate, NSString, PLXPCListenerOperatorComposition, PLMonotonicTimer, PLEntry, PLEventForwardDisplayEntry;

@interface PLDisplayAgent : PLAgent {

	BOOL _alsOn;
	BOOL _userTouch;
	BOOL _isMultitouchLoggingEnabled;
	BOOL _isMIEActive;
	BOOL _firstEntryOnInit;
	BOOL _isDisplayOn;
	BOOL _isDisplayHighBrightness;
	BOOL _isFirstTimeModeling;
	PLIOKitOperatorComposition* _iokitBacklight;
	PLIOKitOperatorComposition* _iokitBacklightControl;
	PLIOKitOperatorComposition* _iokitDisplay;
	PLIOKitOperatorComposition* _iokitTouch;
	BrightnessSystemClient* _brightnessSystemClient;
	CBAdaptationClient* _colorAdaptationClient;
	PLTimer* _backlightFilterTimer;
	NSTimer* _bluelightFilterTimer;
	NSTimer* _uAmpsFilterTimer;
	NSDictionary* _pendingBacklightEntry;
	NSDate* _pendingBacklightEntryDate;
	double _lastALSPowerSaved;
	NSDate* _userTouchDownTime;
	NSString* _displayHardware;
	NSDictionary* _displayPowerModel;
	IOHIDEventSystemClientRef _touchHIDClientRef;
	PLXPCListenerOperatorComposition* _multitouchXPCListener;
	PLMonotonicTimer* _logLastALSPowerSavedTimer;
	PLEntry* _bluelightStatusEntry;
	PLEventForwardDisplayEntry* _uAmpsEntry;

}

@property (readonly) PLIOKitOperatorComposition * iokitBacklight;                         //@synthesize iokitBacklight=_iokitBacklight - In the implementation block
@property (readonly) PLIOKitOperatorComposition * iokitBacklightControl;                  //@synthesize iokitBacklightControl=_iokitBacklightControl - In the implementation block
@property (readonly) PLIOKitOperatorComposition * iokitDisplay;                           //@synthesize iokitDisplay=_iokitDisplay - In the implementation block
@property (readonly) PLIOKitOperatorComposition * iokitTouch;                             //@synthesize iokitTouch=_iokitTouch - In the implementation block
@property (retain) BrightnessSystemClient * brightnessSystemClient;                       //@synthesize brightnessSystemClient=_brightnessSystemClient - In the implementation block
@property (retain) CBAdaptationClient * colorAdaptationClient;                            //@synthesize colorAdaptationClient=_colorAdaptationClient - In the implementation block
@property (retain) PLTimer * backlightFilterTimer;                                        //@synthesize backlightFilterTimer=_backlightFilterTimer - In the implementation block
@property (retain) NSTimer * bluelightFilterTimer;                                        //@synthesize bluelightFilterTimer=_bluelightFilterTimer - In the implementation block
@property (retain) NSTimer * uAmpsFilterTimer;                                            //@synthesize uAmpsFilterTimer=_uAmpsFilterTimer - In the implementation block
@property (retain) NSDictionary * pendingBacklightEntry;                                  //@synthesize pendingBacklightEntry=_pendingBacklightEntry - In the implementation block
@property (retain) NSDate * pendingBacklightEntryDate;                                    //@synthesize pendingBacklightEntryDate=_pendingBacklightEntryDate - In the implementation block
@property (assign) BOOL alsOn;                                                            //@synthesize alsOn=_alsOn - In the implementation block
@property (assign) double lastALSPowerSaved;                                              //@synthesize lastALSPowerSaved=_lastALSPowerSaved - In the implementation block
@property (assign) BOOL userTouch;                                                        //@synthesize userTouch=_userTouch - In the implementation block
@property (retain) NSDate * userTouchDownTime;                                            //@synthesize userTouchDownTime=_userTouchDownTime - In the implementation block
@property (readonly) NSString * displayHardware;                                          //@synthesize displayHardware=_displayHardware - In the implementation block
@property (readonly) NSDictionary * displayPowerModel;                                    //@synthesize displayPowerModel=_displayPowerModel - In the implementation block
@property (assign) IOHIDEventSystemClientRef touchHIDClientRef;                           //@synthesize touchHIDClientRef=_touchHIDClientRef - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * multitouchXPCListener;              //@synthesize multitouchXPCListener=_multitouchXPCListener - In the implementation block
@property (assign) BOOL isMultitouchLoggingEnabled;                                       //@synthesize isMultitouchLoggingEnabled=_isMultitouchLoggingEnabled - In the implementation block
@property (retain) PLMonotonicTimer * logLastALSPowerSavedTimer;                          //@synthesize logLastALSPowerSavedTimer=_logLastALSPowerSavedTimer - In the implementation block
@property (retain) PLEntry * bluelightStatusEntry;                                        //@synthesize bluelightStatusEntry=_bluelightStatusEntry - In the implementation block
@property (retain) PLEventForwardDisplayEntry * uAmpsEntry;                               //@synthesize uAmpsEntry=_uAmpsEntry - In the implementation block
@property (assign) BOOL isMIEActive;                                                      //@synthesize isMIEActive=_isMIEActive - In the implementation block
@property (assign) BOOL firstEntryOnInit;                                                 //@synthesize firstEntryOnInit=_firstEntryOnInit - In the implementation block
@property (assign) BOOL isDisplayOn;                                                      //@synthesize isDisplayOn=_isDisplayOn - In the implementation block
@property (assign) BOOL isDisplayHighBrightness;                                          //@synthesize isDisplayHighBrightness=_isDisplayHighBrightness - In the implementation block
@property (assign) BOOL isFirstTimeModeling;                                              //@synthesize isFirstTimeModeling=_isFirstTimeModeling - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventPointDefinitionDisplay;
+(id)entryEventPointDefinitionUserBrightness;
+(id)entryEventPointDefinitionMultitouch;
+(id)entryEventPointDefinitionBacklightControl;
+(id)entryEventForwardDefinitionDisplay;
+(id)entryEventForwardDefinitionALSUserPreferences;
+(id)entryEventForwardDefinitionALSEnabled;
+(id)entryEventForwardDefinitionALSPowerSaved;
+(id)entryEventForwardDefinitionColorAdaptationMode;
+(id)entryEventForwardDefinitionBlueLightReductionStatus;
+(id)entryEventBackwardDefinitionTouch;
+(id)entryEventBackwardDefinitionHarmonyParameters;
+(id)entryEventBackwardDefinitionBlueLightParameters;
+(id)entryAggregateDefinitionUserTouch;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(BOOL)isAlsEnabled;
-(void)handleBrightnessClientNotification:(id)arg1 withValue:(id)arg2 ;
-(NSDictionary *)pendingBacklightEntry;
-(NSDate *)pendingBacklightEntryDate;
-(void)logEventForwardDisplayWithRawData:(id)arg1 withDate:(id)arg2 ;
-(void)setPendingBacklightEntry:(NSDictionary *)arg1 ;
-(void)setPendingBacklightEntryDate:(NSDate *)arg1 ;
-(PLTimer *)backlightFilterTimer;
-(unsigned long long)getBacklightEnabledTimestamp:(unsigned)arg1 ;
-(void)logEventPointDisplayForBlock:(id)arg1 isActive:(BOOL)arg2 ;
-(void)logEventBackwardTouch;
-(void)setIsMIEActive:(BOOL)arg1 ;
-(IOHIDEventSystemClientRef)setUpIOHIDTouchSystemClient;
-(void)setIsMultitouchLoggingEnabled:(BOOL)arg1 ;
-(NSString *)displayHardware;
-(BOOL)isMultitouchLoggingEnabled;
-(void)logEventPointMultitouchWithPayload:(id)arg1 ;
-(void)setMultitouchXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardDisplay;
-(void)logEventPointDisplay;
-(void)logEventForwardALSEnabled;
-(void)logEventForwardALSUserPreferences;
-(void)logEventForwardColorAdaptationMode;
-(void)logEventPointDisplayBacklight;
-(void)logEventPointDisplayMIE;
-(PLIOKitOperatorComposition *)iokitBacklight;
-(PLIOKitOperatorComposition *)iokitDisplay;
-(BOOL)firstEntryOnInit;
-(void)setFirstEntryOnInit:(BOOL)arg1 ;
-(BrightnessSystemClient *)brightnessSystemClient;
-(BOOL)isMIEActive;
-(NSTimer *)uAmpsFilterTimer;
-(void)reArmUAmpsCallback:(id)arg1 ;
-(void)setUAmpsFilterTimer:(NSTimer *)arg1 ;
-(void)setUAmpsEntry:(PLEventForwardDisplayEntry *)arg1 ;
-(PLEventForwardDisplayEntry *)uAmpsEntry;
-(void)modelDisplayPower:(id)arg1 ;
-(void)logEventForwardALSUserPreferencesEntryWithLux:(id)arg1 ;
-(CBAdaptationClient *)colorAdaptationClient;
-(BOOL)alsOn;
-(PLIOKitOperatorComposition *)iokitTouch;
-(BOOL)userTouch;
-(void)setUserTouch:(BOOL)arg1 ;
-(NSDate *)userTouchDownTime;
-(void)setUserTouchDownTime:(NSDate *)arg1 ;
-(double)uAmpsToDisplayPower:(double)arg1 ;
-(void)setLastALSPowerSaved:(double)arg1 ;
-(double)lastALSPowerSaved;
-(void)setLogLastALSPowerSavedTimer:(PLMonotonicTimer *)arg1 ;
-(void)logEventPointUserBrightnessCommitted:(double)arg1 ;
-(void)logEventForwardALSUserPreferencesWithCurrLux;
-(void)setAlsOn:(BOOL)arg1 ;
-(void)logBrightnessDataWithEntryKey:(id)arg1 withColName:(id)arg2 withValue:(id)arg3 ;
-(void)extractDataWithEntry:(id)arg1 withColName:(id)arg2 withDataArray:(id)arg3 ;
-(void)logBlueLightDataWithDictionary:(id)arg1 ;
-(NSTimer *)bluelightFilterTimer;
-(void)reArmCallback:(id)arg1 ;
-(void)setBluelightFilterTimer:(NSTimer *)arg1 ;
-(void)setBluelightStatusEntry:(PLEntry *)arg1 ;
-(PLEntry *)bluelightStatusEntry;
-(BOOL)isFirstTimeModeling;
-(BOOL)isDisplayOn;
-(void)setIsDisplayOn:(BOOL)arg1 ;
-(BOOL)isDisplayHighBrightness;
-(void)setIsDisplayHighBrightness:(BOOL)arg1 ;
-(void)setIsFirstTimeModeling:(BOOL)arg1 ;
-(NSDictionary *)displayPowerModel;
-(void)logEventBackwardUserTouch:(BOOL)arg1 ;
-(double)modelDisplayPowerForK94:(id)arg1 ;
-(PLIOKitOperatorComposition *)iokitBacklightControl;
-(void)setBrightnessSystemClient:(BrightnessSystemClient *)arg1 ;
-(void)setColorAdaptationClient:(CBAdaptationClient *)arg1 ;
-(void)setBacklightFilterTimer:(PLTimer *)arg1 ;
-(IOHIDEventSystemClientRef)touchHIDClientRef;
-(void)setTouchHIDClientRef:(IOHIDEventSystemClientRef)arg1 ;
-(PLXPCListenerOperatorComposition *)multitouchXPCListener;
-(PLMonotonicTimer *)logLastALSPowerSavedTimer;
@end

