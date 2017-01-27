/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEEvents.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSUserDefaults, ABLECoreDuetController, ABLEModelController, NSDictionary, NSArray, ABLEBONPostAdjust, NSString, NSNumber, NSDate, CDAdmissionControlLogWriter;

@interface ABLEController : NSObject <ABLEEvents> {

	NSObject*<OS_dispatch_queue> DuetABLEQueue;
	NSObject*<OS_dispatch_source> DuetABLETimer;
	unsigned long long sequenceNumber;
	BOOL _suspended;
	BOOL _enabled;
	BOOL _timerSuspended;
	BOOL _adjustForAbsoluteBatteryLevel;
	BOOL _adjustForShortDrain;
	BOOL _admissionLoggingEnabled;
	float _timerFrequencyPerHour;
	int _settingsNotifyToken;
	int _coreDuetSettingsNotifyToken;
	NSUserDefaults* _ableUserDefaults;
	NSUserDefaults* _coreDuetUserDefaults;
	ABLECoreDuetController* _coreDuetController;
	ABLEModelController* _chargingModelController;
	ABLEModelController* _defaultModelController;
	NSDictionary* _modelControllers;
	NSArray* _validModelControllers;
	ABLEBONPostAdjust* _postAdjust;
	ABLEBONPostAdjust* _postAdjustDrainDirect;
	ABLEBONPostAdjust* _postAdjustChargeDirect;
	double _shortDrainMultiplier;
	double _shortDrainThreshold;
	long long _maxBONWithoutCharge;
	NSString* _selectedModel;
	NSNumber* _lastBON;
	NSNumber* _lastRawBON;
	NSDate* _lastBONDate;
	NSNumber* _lastBatteryLevel;
	NSNumber* _lastChargingState;
	/*^block*/id _configurationChangedHandler;
	NSDictionary* _appSettings;
	id _dataSourceOverride;
	CDAdmissionControlLogWriter* _cdAdmissionLog;
	double _timeToRecalculateModel;
	double _timeToResetAndRecalculateModel;
	double _timeToCalculateBON;

}

@property (retain) ABLECoreDuetController * coreDuetController;                //@synthesize coreDuetController=_coreDuetController - In the implementation block
@property (retain) ABLEModelController * chargingModelController;              //@synthesize chargingModelController=_chargingModelController - In the implementation block
@property (retain) ABLEModelController * defaultModelController;               //@synthesize defaultModelController=_defaultModelController - In the implementation block
@property (retain) NSDictionary * modelControllers;                            //@synthesize modelControllers=_modelControllers - In the implementation block
@property (retain) NSArray * validModelControllers;                            //@synthesize validModelControllers=_validModelControllers - In the implementation block
@property (assign) BOOL timerSuspended;                                        //@synthesize timerSuspended=_timerSuspended - In the implementation block
@property (retain) ABLEBONPostAdjust * postAdjust;                             //@synthesize postAdjust=_postAdjust - In the implementation block
@property (retain) ABLEBONPostAdjust * postAdjustDrainDirect;                  //@synthesize postAdjustDrainDirect=_postAdjustDrainDirect - In the implementation block
@property (retain) ABLEBONPostAdjust * postAdjustChargeDirect;                 //@synthesize postAdjustChargeDirect=_postAdjustChargeDirect - In the implementation block
@property (assign) BOOL adjustForAbsoluteBatteryLevel;                         //@synthesize adjustForAbsoluteBatteryLevel=_adjustForAbsoluteBatteryLevel - In the implementation block
@property (assign) BOOL adjustForShortDrain;                                   //@synthesize adjustForShortDrain=_adjustForShortDrain - In the implementation block
@property (assign) double shortDrainMultiplier;                                //@synthesize shortDrainMultiplier=_shortDrainMultiplier - In the implementation block
@property (assign) double shortDrainThreshold;                                 //@synthesize shortDrainThreshold=_shortDrainThreshold - In the implementation block
@property (assign) long long maxBONWithoutCharge;                              //@synthesize maxBONWithoutCharge=_maxBONWithoutCharge - In the implementation block
@property (retain) NSString * selectedModel;                                   //@synthesize selectedModel=_selectedModel - In the implementation block
@property (assign) float timerFrequencyPerHour;                                //@synthesize timerFrequencyPerHour=_timerFrequencyPerHour - In the implementation block
@property (retain) NSNumber * lastBON;                                         //@synthesize lastBON=_lastBON - In the implementation block
@property (retain) NSNumber * lastRawBON;                                      //@synthesize lastRawBON=_lastRawBON - In the implementation block
@property (retain) NSDate * lastBONDate;                                       //@synthesize lastBONDate=_lastBONDate - In the implementation block
@property (retain) NSNumber * lastBatteryLevel;                                //@synthesize lastBatteryLevel=_lastBatteryLevel - In the implementation block
@property (retain) NSNumber * lastChargingState;                               //@synthesize lastChargingState=_lastChargingState - In the implementation block
@property (assign) int settingsNotifyToken;                                    //@synthesize settingsNotifyToken=_settingsNotifyToken - In the implementation block
@property (assign) int coreDuetSettingsNotifyToken;                            //@synthesize coreDuetSettingsNotifyToken=_coreDuetSettingsNotifyToken - In the implementation block
@property (nonatomic,copy) id configurationChangedHandler;                     //@synthesize configurationChangedHandler=_configurationChangedHandler - In the implementation block
@property (retain) NSDictionary * appSettings;                                 //@synthesize appSettings=_appSettings - In the implementation block
@property (retain) id dataSourceOverride;                                      //@synthesize dataSourceOverride=_dataSourceOverride - In the implementation block
@property (retain) CDAdmissionControlLogWriter * cdAdmissionLog;               //@synthesize cdAdmissionLog=_cdAdmissionLog - In the implementation block
@property (assign) BOOL admissionLoggingEnabled;                               //@synthesize admissionLoggingEnabled=_admissionLoggingEnabled - In the implementation block
@property (assign) double timeToRecalculateModel;                              //@synthesize timeToRecalculateModel=_timeToRecalculateModel - In the implementation block
@property (assign) double timeToResetAndRecalculateModel;                      //@synthesize timeToResetAndRecalculateModel=_timeToResetAndRecalculateModel - In the implementation block
@property (assign) double timeToCalculateBON;                                  //@synthesize timeToCalculateBON=_timeToCalculateBON - In the implementation block
@property (assign) BOOL enabled;                                               //@synthesize enabled=_enabled - In the implementation block
@property (assign) BOOL suspended; 
@property (retain) NSUserDefaults * ableUserDefaults;                          //@synthesize ableUserDefaults=_ableUserDefaults - In the implementation block
@property (retain) NSUserDefaults * coreDuetUserDefaults;                      //@synthesize coreDuetUserDefaults=_coreDuetUserDefaults - In the implementation block
+(id)staticAppDefaults;
+(id)appDefaults;
+(void)resetConfiguration;
-(ABLEBONPostAdjust *)postAdjust;
-(void)resetModel;
-(ABLECoreDuetController *)coreDuetController;
-(void)significantEventAtDate:(id)arg1 ;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(BOOL)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(void)setCoreDuetController:(ABLECoreDuetController *)arg1 ;
-(void)setDefaultModelController:(ABLEModelController *)arg1 ;
-(void)setChargingModelController:(ABLEModelController *)arg1 ;
-(void)setModelControllers:(NSDictionary *)arg1 ;
-(void)setSelectedModel:(NSString *)arg1 ;
-(void)setValidModelControllers:(NSArray *)arg1 ;
-(void)setPostAdjust:(ABLEBONPostAdjust *)arg1 ;
-(void)setPostAdjustDrainDirect:(ABLEBONPostAdjust *)arg1 ;
-(void)setPostAdjustChargeDirect:(ABLEBONPostAdjust *)arg1 ;
-(void)setMaxBONWithoutCharge:(long long)arg1 ;
-(void)setTimerSuspended:(BOOL)arg1 ;
-(void)setAbleUserDefaults:(NSUserDefaults *)arg1 ;
-(void)setCoreDuetUserDefaults:(NSUserDefaults *)arg1 ;
-(void)updateConfigurationFromCoreDuet;
-(id)initWithCoreDuetController:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)modelControllers;
-(NSUserDefaults *)ableUserDefaults;
-(NSUserDefaults *)coreDuetUserDefaults;
-(void)setAdmissionLoggingEnabled:(BOOL)arg1 ;
-(void)typeCheckAndFixConfiguration:(id)arg1 ;
-(void)setAppSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)appSettings;
-(void)setAdjustForAbsoluteBatteryLevel:(BOOL)arg1 ;
-(void)setAdjustForShortDrain:(BOOL)arg1 ;
-(void)setShortDrainMultiplier:(double)arg1 ;
-(void)setShortDrainThreshold:(double)arg1 ;
-(void)setTimerFrequencyPerHour:(float)arg1 ;
-(id)dataSourceOverride;
-(void)setDataSourceOverride:(id)arg1 ;
-(void)updateTimerAndScheduleImmediately:(BOOL)arg1 ;
-(float)timerFrequencyPerHour;
-(BOOL)timerSuspended;
-(NSString *)selectedModel;
-(void)setLastBON:(NSNumber *)arg1 ;
-(void)setLastBONDate:(NSDate *)arg1 ;
-(void)setLastBatteryLevel:(NSNumber *)arg1 ;
-(void)setLastChargingState:(NSNumber *)arg1 ;
-(CDAdmissionControlLogWriter *)cdAdmissionLog;
-(BOOL)admissionLoggingEnabled;
-(BOOL)getChargeModeOverride;
-(double)timeToCalculateBON;
-(NSNumber *)lastRawBON;
-(id)getModelMode;
-(ABLEModelController *)chargingModelController;
-(void)setLastRawBON:(NSNumber *)arg1 ;
-(BOOL)adjustForAbsoluteBatteryLevel;
-(ABLEBONPostAdjust *)postAdjustChargeDirect;
-(ABLEModelController *)defaultModelController;
-(BOOL)adjustForShortDrain;
-(double)shortDrainThreshold;
-(double)shortDrainMultiplier;
-(ABLEBONPostAdjust *)postAdjustDrainDirect;
-(void)setTimeToCalculateBON:(double)arg1 ;
-(void)updateModelsForDate:(id)arg1 ;
-(void)setTimeToResetAndRecalculateModel:(double)arg1 ;
-(double)timeToResetAndRecalculateModel;
-(void)setTimeToRecalculateModel:(double)arg1 ;
-(double)timeToRecalculateModel;
-(id)configurationChangedHandler;
-(id)reportStateWithRequestInner;
-(NSNumber *)lastBON;
-(NSDate *)lastBONDate;
-(NSNumber *)lastBatteryLevel;
-(NSNumber *)lastChargingState;
-(NSArray *)validModelControllers;
-(id)initWithCDSession:(id)arg1 device:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(float)gradientLong;
-(float)gradientShort;
-(id)reportStateWithRequest:(id)arg1 ;
-(long long)maxBONWithoutCharge;
-(int)coreDuetSettingsNotifyToken;
-(void)setCoreDuetSettingsNotifyToken:(int)arg1 ;
-(void)setConfigurationChangedHandler:(id)arg1 ;
-(void)setCdAdmissionLog:(CDAdmissionControlLogWriter *)arg1 ;
-(void)updateConfiguration;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(int)settingsNotifyToken;
-(void)setSettingsNotifyToken:(int)arg1 ;
-(BOOL)suspended;
@end

