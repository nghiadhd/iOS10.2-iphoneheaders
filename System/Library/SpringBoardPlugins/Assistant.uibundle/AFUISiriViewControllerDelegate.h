/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISiriViewControllerDelegate <NSObject>
@optional
-(void)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(/*^block*/id)arg5;
-(void)siriViewController:(id)arg1 didEndSession:(id)arg2;

@required
-(void)siriViewControllerDidChangeVisibility:(id)arg1;
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2;
-(void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2;
-(void)startGuidedAccessForSiriViewController:(id)arg1;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1;
-(void)notifyOnNextUserInteractionForSiriViewController:(id)arg1;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
-(void)siriViewController:(id)arg1 didHideStatusView:(BOOL)arg2;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
-(void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2;
-(BOOL)siriViewControllerShouldEndSession:(id)arg1;
-(BOOL)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2;
-(void)siriViewControllerDidChangeListeningState:(id)arg1;
-(void)siriViewController:(id)arg1 didChangeDialogPhase:(id)arg2;
-(void)siriViewControllerSessionDidResetContext:(id)arg1;

@end

