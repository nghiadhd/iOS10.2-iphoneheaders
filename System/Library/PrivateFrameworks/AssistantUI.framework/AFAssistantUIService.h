/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFAssistantUIService <NSObject>
@optional
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionRequestWillStart:(id)arg1;
-(void)assistantConnectionRequestFinished:(id)arg1;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
-(void)assistantConnection:(id)arg1 shouldSpeak:(BOOL)arg2;
-(void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned)arg2;
-(void)assistantConnectionWillStartAcousticIDRequest:(id)arg1;
-(void)assistantConnectionDidDetectMusic:(id)arg1;
-(void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(BOOL)arg2;
-(void)assistantConnection:(id)arg1 setUserActivtiyInfoAndMakeCurrent:(id)arg2 webpageURL:(id)arg3;
-(void)assistantConnectionInvalidateCurrentUserActivity:(id)arg1;
-(void)assistantConnection:(id)arg1 wantsToCacheImage:(id)arg2;
-(void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg1;
-(void)assistantConnectionAudioSessionDidEndInterruption:(id)arg1 shouldResume:(BOOL)arg2;
-(void)assistantConnection:(id)arg1 openApplicationWithBundleID:(id)arg2 URL:(id)arg3 completion:(/*^block*/id)arg4;
-(void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionDismissAssistant:(id)arg1;

@end

