/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BCBatteryDeviceController;

@interface VMVoicemailPowerController : NSObject {

	BCBatteryDeviceController* _controller;

}

@property (nonatomic,retain) BCBatteryDeviceController * controller;                     //@synthesize controller=_controller - In the implementation block
@property (getter=isDeviceCharging,nonatomic,readonly) BOOL deviceCharging; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(BCBatteryDeviceController *)controller;
-(void)setController:(BCBatteryDeviceController *)arg1 ;
-(BOOL)isDeviceCharging;
@end

