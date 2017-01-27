/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString;


@protocol MTAlarmSoundInfoProvider <NSObject>
@property (nonatomic,copy) NSNumber * alarmSoundVolume; 
@property (nonatomic,readonly) NSString * alarmSoundIdentifier; 
@property (nonatomic,readonly) long long alarmSoundType; 
@property (nonatomic,copy) NSString * vibrationID; 
@required
-(void)setVibrationID:(id)arg1;
-(NSString *)vibrationID;
-(NSNumber *)alarmSoundVolume;
-(void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
-(void)setAlarmSoundVolume:(id)arg1;
-(NSString *)alarmSoundIdentifier;
-(long long)alarmSoundType;

@end

