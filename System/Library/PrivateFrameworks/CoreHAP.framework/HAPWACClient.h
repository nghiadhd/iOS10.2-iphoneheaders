/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, HAPWACScanControlDelegate;
#import <CoreHAP/CoreHAP-Structs.h>
@class EasyConfigDevice, NSString, NSObject, HAPAccessoryServerIP;

@interface HAPWACClient : NSObject {

	BOOL _didRestoreNetwork;
	BOOL _supportsSpruce2;
	BOOL _supports2pt4GHz;
	BOOL _supports5GHz;
	EasyConfigDevice* _ezConfigDevice;
	CFDictionaryRef _wifiInfo;
	NSString* _name;
	NSString* _identifier;
	NSString* _ssid;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _completion;
	/*function pointer*/void* _promptForSetupCode_f;
	HAPAccessoryServerIP* _ipServer;
	id<HAPWACScanControlDelegate> _scanDelegate;
	/*^block*/id _wacCompatibilityCheckCompletionHandler;

}

@property (nonatomic,retain) EasyConfigDevice * ezConfigDevice;                                //@synthesize ezConfigDevice=_ezConfigDevice - In the implementation block
@property (assign,nonatomic) CFDictionaryRef wifiInfo;                                         //@synthesize wifiInfo=_wifiInfo - In the implementation block
@property (assign,nonatomic) BOOL didRestoreNetwork;                                           //@synthesize didRestoreNetwork=_didRestoreNetwork - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * ssid;                                           //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) BOOL supportsSpruce2;                                           //@synthesize supportsSpruce2=_supportsSpruce2 - In the implementation block
@property (nonatomic,readonly) BOOL supports2pt4GHz;                                           //@synthesize supports2pt4GHz=_supports2pt4GHz - In the implementation block
@property (nonatomic,readonly) BOOL supports5GHz;                                              //@synthesize supports5GHz=_supports5GHz - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                       //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* promptForSetupCode_f;                   //@synthesize promptForSetupCode_f=_promptForSetupCode_f - In the implementation block
@property (nonatomic,__weak,readonly) HAPAccessoryServerIP * ipServer;                         //@synthesize ipServer=_ipServer - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPWACScanControlDelegate> scanDelegate;              //@synthesize scanDelegate=_scanDelegate - In the implementation block
@property (nonatomic,copy) id wacCompatibilityCheckCompletionHandler;                          //@synthesize wacCompatibilityCheckCompletionHandler=_wacCompatibilityCheckCompletionHandler - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(NSString *)identifier;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)pairInvalidate;
-(id)initWithWACDevice:(id)arg1 server:(id)arg2 andScanDelegate:(id)arg3 ;
-(void)checkCompatibleNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pairSetupStart:(/*function pointer*/void*)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pairSetupContinueWithSetupCode:(id)arg1 ;
-(void)pairSetupStop;
-(BOOL)_checkCompatibleNetwork:(id)arg1 ;
-(void)setWacCompatibilityCheckCompletionHandler:(id)arg1 ;
-(CFDictionaryRef)wifiInfo;
-(void)setPromptForSetupCode_f:(/*function pointer*/void*)arg1 ;
-(id<HAPWACScanControlDelegate>)scanDelegate;
-(EasyConfigDevice *)ezConfigDevice;
-(void)setDidRestoreNetwork:(BOOL)arg1 ;
-(/*function pointer*/void*)promptForSetupCode_f;
-(HAPAccessoryServerIP *)ipServer;
-(BOOL)didRestoreNetwork;
-(void)setEzConfigDevice:(EasyConfigDevice *)arg1 ;
-(BOOL)supportsSpruce2;
-(int)_configPrompt:(unsigned)arg1 inDelaySeconds:(int)arg2 ;
-(void)_configProgress:(id)arg1 ;
-(void)_configStopped:(id)arg1 ;
-(void)_joinComplete;
-(void)_waitForLinkUp:(int)arg1 inContext:(void*)arg2 ;
-(void)setWifiInfo:(CFDictionaryRef)arg1 ;
-(BOOL)supports2pt4GHz;
-(BOOL)supports5GHz;
-(id)wacCompatibilityCheckCompletionHandler;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)ssid;
@end

