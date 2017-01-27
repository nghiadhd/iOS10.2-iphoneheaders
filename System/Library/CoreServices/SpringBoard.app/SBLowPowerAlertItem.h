/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLowPowerAlertItem : SBAlertItem {

	unsigned _talkLevel;

}
+(void)saveLowBatteryLogWithCapacity:(int)arg1 voltage:(int)arg2 ;
+(BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned)arg1 ;
+(unsigned)_thresholdForLevel:(unsigned)arg1 ;
+(void)setBatteryLevel:(unsigned)arg1 ;
+(void)initialize;
+(id)systemVersionDescription;
-(void)_enableLowPowerMode;
-(id)init;
-(id)initWithLevel:(unsigned)arg1 ;
-(BOOL)undimsScreen;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
@end

