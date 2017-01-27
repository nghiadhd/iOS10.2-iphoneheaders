/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/VoiceTriggerUI.axbundle/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/__VTUIEnrollTrainingViewControllerAccessibility_super.h>

@interface VTUIEnrollTrainingViewControllerAccessibility : __VTUIEnrollTrainingViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_axAnnounceString:(id)arg1 ;
-(void)_axHandleAnnouncementDidFinishNotification:(id)arg1 ;
-(void)_axHandleVoiceOverStatusChangedNotification:(id)arg1 ;
-(id)AXSuspendAudioTimer;
-(void)_axSuspendAudio:(BOOL)arg1 ;
-(void)setAXSuspendAudioTimer:(id)arg1 ;
-(void)_axHandleElementFocusedNotification:(id)arg1 ;
-(void)_axAnnounceInstructionWithNumber:(long long)arg1 ;
-(void)_axHandleSuspendAudioTimerFired:(id)arg1 ;
-(void)dealloc;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_triggerEndpoint:(id)arg1 ;
-(void)_continueFromIntro:(id)arg1 ;
-(void)_showIntroView;
-(void)_showEnrollmentSuccessView;
-(void)_showTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(BOOL)arg3 animate:(BOOL)arg4 ;
-(void)_showStatusMessage:(id)arg1 afterDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_retryAfterBadMicAlert;
-(void)_advanceState;
-(void)_setupViews;
@end

