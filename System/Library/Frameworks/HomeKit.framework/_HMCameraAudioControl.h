/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

@interface _HMCameraAudioControl : _HMCameraControl {

	HMCharacteristic* _mute;
	HMCharacteristic* _volume;

}

@property (nonatomic,readonly) HMCharacteristic * mute;                //@synthesize mute=_mute - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * volume;              //@synthesize volume=_volume - In the implementation block
-(HMCharacteristic *)volume;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(HMCharacteristic *)mute;
@end

