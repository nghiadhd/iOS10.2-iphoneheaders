/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISiriViewDelegate <NSObject>
@required
-(void)siriViewDidReceiveAudioRouteAction:(id)arg1;
-(void)siriViewDidReceiveKeyboardAction:(id)arg1;
-(void)siriViewDidReceiveReportBugAction:(id)arg1;
-(void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
-(void)siriViewDidReceiveHelpAction:(id)arg1;
-(BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
-(float)audioRecordingPowerLevelForSiriView:(id)arg1;
-(void)siriViewDidRecieveStatusViewTappedAction:(id)arg1;
-(void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
-(void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
-(void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;

@end

